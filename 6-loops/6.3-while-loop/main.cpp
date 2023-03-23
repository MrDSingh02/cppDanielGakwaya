// Chapter 6: Loops
// ! 6.3 While Loop
// ? |Lesson Start           | 08H : 25Min : 23 Sec |
//*  |Code Start             | 08H : 29Min : 07 Sec |
//*  |Next Lesson            | 08H : 36Min : 55 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 6.3 While Loop "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    // >> Print I Love c++ 10 times
    /* std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl;
    std::cout << "I Love C++20" << std::endl; */

    const size_t COUNT {100};
    size_t i {0};//* iteration declaration

    while (i < COUNT){ //* test
        std::cout << i << " : I Love C++20" << std::endl;
        ++i; // Incrementation
    }
    std::cout << " LOOP DONE!" << std::endl;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}