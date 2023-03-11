// ! 4.3 Precedence And Associativity
// ? |Lesson Start           | 04H : 58Min : 04 Sec |
//*  |Code Start             | 05H : 01Min : 50 Sec |
//*  |Next Lesson            | 05H : 12Min : 07 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.3 Precedence And Associativity "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};
    
    int result = a + b * c - d / e - f + g; //6 + 24 - 3 - 2 +  5

    std::cout<<"result : "<<result<<std::endl;

    result = a / b * c + d - e + f; //24
    std::cout<<"result : "<<result<<std::endl;

    result= a+(b*c)-(d/e)-f+g;
    std::cout<<"result : "<<result<<std::endl;

    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}