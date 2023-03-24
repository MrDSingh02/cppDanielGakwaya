// Chapter 7: Arrays
// ! 7.5 Bounds of an Array
// ? |Lesson Start           | 09H : 46Min : 46 Sec |
//*  |Code Start             | 09H : 49Min : 21 Sec |
//*  |Next Lesson            | 09H : 53Min : 26 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 7.5 Bounds of an Array "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int number [] {1,2,3,4,5,6,7,8,9,0};

    //>> read beyond bounds : will read garbage or crash your program
    std::cout << "number[12] : " << number[12] << std::endl;

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}