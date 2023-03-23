// Chapter 6: Loops
// ! 6.4 Do while Loop
// ? |Lesson Start           | 08H : 36Min : 55 Sec |
//*  |Code Start             | 08H : 38Min : 46 Sec |
//*  |Next Lesson            | 08H : 47Min : 13 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 6.4 Do while Loop "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    //>> Print I love c++20 10times
    /* std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl;
    std::cout << "I love c++20 " << std::endl; */

    const unsigned int COUNT{10};
    size_t i{0}; // iterator declaration

    do{
        std::cout << i << " : I love c++20." << std::endl;
        ++i; // Incrementation
    }while (i < COUNT);

    std::cout << i << "Loop Done!" << std::endl;
    
    

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}