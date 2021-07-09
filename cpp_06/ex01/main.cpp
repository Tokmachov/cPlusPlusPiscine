/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:00:44 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 15:03:31 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#define CHAR_ARR_LEN 8
#include <sys/time.h>

struct Data { std::string s1; int n; std::string s2; };

Data * deserialize(void * raw)
{
    Data *data = new Data();
    std::string *raw_as_string;
    int *raw_as_int;
    
    raw_as_string = reinterpret_cast<std::string*> (raw);
    data->s1 = *raw_as_string;
    raw_as_string += 1;
    raw_as_int = reinterpret_cast<int*> (raw_as_string);
    data->n = *raw_as_int;
    raw_as_int += 1;
    raw_as_string = reinterpret_cast<std::string*> (raw_as_int);
    data->s2 = *raw_as_string;  
    return data;
}

long getRandomNum(void)
{
    struct timeval t;
    gettimeofday(&t, 0);
    return t.tv_usec;
}

std::string getRandomString(void)
{
    srand(getRandomNum());
    std::string src("aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStT");
    std::string str("aaaaaaaa");
    char c;
    int num;
    for (int i = 0; i < 8; i++)
    {
        num = rand() % src.length();
        str[i] = src.at(num);
    }
    return str;
}

void * serialize(void)
{
    char *data_out;
    char *data_tmp;
    int data_bytes_count;
    std::string str1;
    int num;
    std::string str2;
    int str1_size;
    int int_size;
    int str2_size;
    
    str1 = getRandomString();
    num = static_cast<int> (getRandomNum());
    str2 = getRandomString();
    
    std::cout << "--Data to serialize---" << std::endl;
    std::cout << "First str: " << str1 << std::endl;
    std::cout << "Num : " << num << std::endl;
    std::cout << "Second str: " << str2 << std::endl;
     
    str1_size = sizeof(str1);
    int_size = sizeof(int);
    str2_size = sizeof(str2);
    data_bytes_count = str1_size + int_size + str2_size;
    std::cout << "Raw size is: " << data_bytes_count << std::endl;
    data_out = new char[data_bytes_count];
    data_tmp = data_out;
    std::memcpy(static_cast<void*> (data_tmp), static_cast<void*> (&str1), str1_size);
    data_tmp += str1_size;
    std::memcpy(static_cast<void*> (data_tmp), static_cast<void*> (&num), int_size);
    data_tmp += int_size;
    std::memcpy(static_cast<void*> (data_tmp), static_cast<void*> (&str2), str2_size);
    return data_out;
}

int main(void)
{
    void *data_raw = serialize();    
    Data *data_deserialized = deserialize(data_raw);
    std::cout << "---Serialized data---" << std::endl;
    std::cout << data_deserialized->s1 << std::endl;
    std::cout << data_deserialized->n << std::endl;
    std::cout << data_deserialized->s2 << std::endl;
    delete data_deserialized;
    return 0;
}