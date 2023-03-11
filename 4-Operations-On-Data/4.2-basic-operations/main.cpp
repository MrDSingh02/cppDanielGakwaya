// ! 4.2 Basic Operations
// ? Start Time :           | 04H : 47Min : 34 Sec |
//*  Code Time  :           | 04H : 50Min : 36 Sec |
//*  Left Time  :           | 04H : 58Min : 04 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.2 Basic Operations "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    // Addition
    int num1{2};
    int num2{7};

    int result= num1+num2;
    std::cout<<"Addition Result        : "<<result<<std::endl;

    // Subtraction

    result= num2-num1;
    std::cout<<"Subtraction Result     : "<<result<<std::endl;
    result= num1-num2;
    std::cout<<"Subtraction Result     : "<<result<<std::endl;

    // Muliplication
    result = num1* num2;
    std::cout<<"Multiplication Result  : "<<result<<std::endl;

    // Division
    result = num2/num1;
    std::cout<<"Division Result        : "<<result<<std::endl;

    //Modulus
    result = num2 %num1;
    std::cout<<"Modulus Result         : "<<result<<std::endl;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}