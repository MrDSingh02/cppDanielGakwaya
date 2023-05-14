// Chapter 10: Character Manipulation and Strings
// ! 10.2 Character Manipulation
// ? |Lesson Start           | 12H : 46Min : 24 Sec |
//-  |Code Start             | 12H : 54Min : 43 Sec |
//-  |Next Lesson            | 12H : 44Min : 26 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// /: | clang++ -std=c++20 -o build.clang main.cpp |
/// del Z
/*
# Chapter 10: Character Manipulation and Strings
## 10.2 Character Manipulation
||Time (00H : 00Min : 00 Sec)|
|-|-|
 |Lesson Start           | 12H : 46Min : 24 Sec |  
 |Code Start             | 12H : 54Min : 43 Sec |  
 |Next Lesson            | 12H : 44Min : 26 Sec | 
* [main.cpp](./main.cpp)
* [Home](/README.md)
* [pdf]()

---

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 10.2 Character Manipulation "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    /* //> Check if character is alphanumeric
    std::cout << std::endl;
    std::cout << "std::isalnum : " << std::endl;
    std::cout << std::boolalpha << std::endl;

    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;

    //? Can Use this as test condition
    
    char input_char{'*'};
    if(std::isalnum(input_char)){
        std::cout << input_char << " is alphanumeric." << std::endl;
    }else{
        std::cout << input_char << " is not alphanumeric." << std::endl;
    } */
    
    /* //> Check if character is alphabetic
    std::cout << std::endl;
    std::cout << "std::isalpha : " << std::endl;

    std::cout << "e is alphabetic : " << std::isalpha('e') << std::endl; /// 1
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl; /// 0
    std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl; /// 0

    if(std::isalpha('e')){
        std::cout << "e" << " is alphabetic" << std::endl;
    }else{
        std::cout << "e" << " is not alphabetic" << std::endl;
    } */

    //> Check if a character is blank
    std::cout << std::endl;
    std::cout << "std::isblank : " << std::endl;

    char message [] {"Hello there. How are you doing? The sun is shining."};
    std::cout << "message : " << message << std::endl;

    //? Find and print blank index
    int blank_count {};
    for (size_t i{0}; i < std::size(message); ++i){
        /// std::cout << "Value : " << message[i] << std::endl;
        if
    }


    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}