#include <stdlib.h>
#include <wchar.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(void)
{
    int i_number = 20;
    /*
    int *p = (int *)malloc(sizeof(int));
    int *p2 = (int *)malloc(sizeof(int));
    int *p3 = (int *)malloc(sizeof(int));
    int *p4 = (int *)malloc(sizeof(int));
    */
    uintptr_t number;
    /*
    /*p2 = 2;
    /*p3 = 3;
    /*p4 = 4;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    */
    const char *str_buff = (char *)malloc(sizeof(char)*i_number);
    str_buff = "123456789";
    /*
    //std::cout << std::hex << str_buff << std::endl;
    //std::cout << str_buff  << std::endl;
    number = (uintptr_t)p2;
    //std::cout << number  << std::endl;
    p = (int *)number;
    std::cout << *p << std::endl;
    number = (uintptr_t)p3;
    //std::cout << number  << std::endl;
    p = (int *)number;
    std::cout << *p << std::endl;
    number = (uintptr_t)p4;
    //std::cout << number  << std::endl;
    p = (int *)number;
    std::cout << *p << std::endl;
    /*p4 = 100;
    std::cout << *p << std::endl;
    */
    number = (uintptr_t)str_buff;
    /*
    const char *str_buff_temp;
    str_buff_temp = "987654321";
    std::cout << str_buff_temp << std::endl;
    str_buff_temp = (char *)number;
    std::cout << str_buff_temp << std::endl;
    //p = p2;
    //std::cout << *p << std::endl;
    */
    
    std::ofstream writing_file;
    std::string filename = "address.txt";
    writing_file.open(filename, std::ios::out);
    std::ostringstream oss;
    oss << number;
    std::string writing_text = oss.str();
    writing_file << writing_text << std::endl;
    writing_file.close();
    system("python send_python.py");
    std::cout << str_buff << std::endl;
    /*
    std::ostringstream ss;
    ss << std::hex << number;
    std::string result = ss.str();
    std::cout << result << std::endl;
    */
    //std::cout << str_buff  << std::endl;
    
    return (0);
}