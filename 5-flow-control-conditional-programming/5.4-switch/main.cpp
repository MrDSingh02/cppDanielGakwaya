// Chapter 5: Flow Control
// ! 5.4 Switch
// ? |Lesson Start           | 07H : 28Min : 49 Sec |
//*  |Code Start             | 07H : 31Min : 54 Sec |
//*  |Next Lesson            | 00H : 00Min : 00 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*
# Chapter 5: Flow Control

## 5.4 Switch

||Time (00H : 00Min : 00 Sec)|
|-|-|
 |Lesson Start           | 07H : 28Min : 49 Sec |  
 |Code Start             | 07H : 31Min : 54 Sec |  
 |Next Lesson            | 00H : 00Min : 00 Sec | 
* [main.cpp](./main.cpp)
* [Home](/README.md)
* [pdf]()

---

*/
#include<iostream>

const int pen{10};
const int marker{20};
const int eraser{30};
const int rectangle{40};
const int circle{50};
const int ellipse{60};

int main(int argc, char const *argv[])
{
    std::cout<<" 5.4 Switch "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int tool{eraser};
    switch (tool)
    {
        case pen :{
            std::cout << "Active tool is pen" << std::endl;
        }
        break; //! removing 'break' can be case print everything after selected item
        case marker :{
            std::cout << "Active tool is marker" << std::endl;
        }
        break;
        case eraser :{
            std::cout << "Active tool is eraser" << std::endl;
        }
        break;
        case rectangle :{
            std::cout << "Active tool is rectangle" << std::endl;
        }
        break;
        case circle :{
            std::cout << "Active tool is circle" << std::endl;
        }
        break;
        case ellipse :{
            std::cout << "Active tool is ellipse" << std::endl;
        }
        break;
        default: {
            std::cout << "No Match found" << std::endl;
        }
        break;
    }

    switch (tool)
    {
        case pen :{
            std::cout << "Active tool is pen" << std::endl;
        }
        break; 
        case marker :{
            std::cout << "Active tool is marker" << std::endl;
        }
        break;
        case eraser :
        case rectangle :
        case circle :{
            std::cout << "Drawing Shapes" << std::endl;
        }
        break;
        case ellipse :{
            std::cout << "Active tool is ellipse" << std::endl;
        }
        break;
        default: {
            std::cout << "No Match found" << std::endl;
        }
        break;
    }

    std::cout << "Moving On " << std::endl;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}