// ! 4.5 Compound Assignment Operators
// ? |Lesson Start           | 05H : 23Min : 26 Sec |
//*  |Code Start             | 05H : 26Min : 37 Sec |
//*  |Next Lesson            | 00H : 00Min : 00 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.5 Compound Assignment Operators "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int value {45};

    std::cout<<"The Value Is : "<<value<<std::endl;

    std::cout<<std::endl;
    value = value+5;
    // value +=5; // equivalent to value =value + 5
    std::cout<<"The Value is (after +=5) : "<<value<<std::endl;//50

    std::cout<<std::endl;
    value -=5; // equivalent to value = value - 5
    std::cout<<"The value is(after -=5) : "<<value<<std::endl;//45

    std::cout<<std::endl;
    value *= 2;
    std::cout<<"The Value is (after *=2) : "<<value<<std::endl;//90

    std::cout<<std::endl;
    value /=3;
    std::cout<<"The value is (after /=3) : "<<value<<std::endl;//30

    std::cout<<std::endl;
    value %= 11;
    std::cout<<"The value is (after %=11) : "<<value<<std::endl;//8
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}