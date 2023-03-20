// Chapter 5: Flow Control
// ! 5.5 Ternary Operator
// ? |Lesson Start           | 07H : 42Min : 48 Sec |
//*  |Code Start             | 07H : 46Min : 13 Sec |
//*  |Next Lesson            | 00H : 00Min : 00 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 5.5 Ternary Operator "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int max{};
    int min{};

    int a{35};
    int b{20};

    std::cout << std::endl;
    std::cout << "Using regular if (a > b) : " << std::endl; 

    /* if(a > b){
        max = a;
    }else{
        max = b;
    } */

    //max = a > b ? a : "hello"; // ! error

    max = a > b ? a : b;
    auto max1 = a > b ? a : 22.f;

    std::cout << "max : " << max << std::endl;// max = 35
    std::cout << "max1 : " << max1 << std::endl;// max = 35

    std::cout << "Using ternary Operator (a < b) : " << std::endl;

    int (a < b) ? min = a : min = b;

    std::cout << "min : " << min << std::endl; // min =20
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}