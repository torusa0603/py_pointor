#include <stdlib.h>
#include <wchar.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>


//int main(uintptr_t address, const char *input_date) {
//    int i_number = 5;
//    std::cout << address << std::endl;
//    const char *str_buff  = (char *)malloc(sizeof(char)*i_number);
//    str_buff = (char *)address;
//    std::cout << (uintptr_t)str_buff << std::endl;
//    str_buff = "HELLO!";
//    std::cout << input_date << std::endl;
//    /*
//    std::cout << (uintptr_t)str_buff << std::endl;
//    */
//    str_buff = (char *)address;
//    /*
//    std::cout << (uintptr_t)str_buff << std::endl;
//    std::cout << address << std::endl;
//    */
//    return 0;
//}


extern "C" int pointor_access(uintptr_t address, const char *input_date) {
    int i_number = 5;
    const char *str_buff  = (char *)malloc(sizeof(char)*i_number);
    str_buff = (char *)address;
    std::cout << (uintptr_t)str_buff << std::endl;
    str_buff = "HELLO!";
    std::cout << input_date << std::endl;
    std::cout << (uintptr_t)str_buff << std::endl;
    str_buff = (char *)address;
    std::cout << (uintptr_t)str_buff << std::endl;
    std::cout << address << std::endl;
    return 0;
}


/*
//PYBIND11_MODULE()はPythonでimportする際の関数を作成する
PYBIND11_MODULE(py_pointor_access, m) {
    m.doc() = "";
    m.def("pointor_access", &pointor_access, "A function which adds tow numbers");
}
*/