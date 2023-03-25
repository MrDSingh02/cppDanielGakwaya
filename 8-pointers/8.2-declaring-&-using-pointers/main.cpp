// Chapter 8: Pointers
// ! 8.2 Declaring and Using Pointers
// ? |Lesson Start           | 09H : 56Min : 05 Sec |
//*  |Code Start             | 10H : 02Min : 37 Sec |
//*  |Next Lesson            | 10H : 14Min : 49 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.2 Declaring and Using Pointers "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
/*
    //>> Declare and initialize pointer
    int* p_number {}; //will initialize with nullptr
    double* p_fractional_number {};

    //>> Explicitly initialize with nullptr
    int* p_number1 {nullptr};
    int* p_fractional_number1{nullptr};

    //>> Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;

    //>> it doesn't matter if you put the * close to data type or to variable name
    int*  p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};


    //>> 
    int *p_number5{}, other_int_var{};  // Confusing as you wonder if other_int_var6 is also a pointer
    int* p_number6{}, other_int_var6{}; // to int. It is not 
                                        //The structure is exactly the same for the Previous Statements
                                    
    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    //>> It is better to seprate these declaration on different lines though
    int *p_number7{};
    int other_int_var7{}; //No Room for Confusion this time

    //>> for pointer
    int *p_number15{}, *other_int_var15{}; // Both are pointers
    std::cout << "sizeof(p_number15) : " << sizeof(p_number15) << std::endl;
    std::cout << "sizeof(other_int_var15) : " << sizeof(other_int_var15) << std::endl;
*/

    //>> Initializing pointers and assigning them data
    //We know that pointer store addresses of variables
    int int_var{43};
    int *p_int{&int_var}; // the address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Adress in memory) : " << p_int << std::endl;

    //? You can also change the address stored in a pointer any time
    int int_var1 {64};
    p_int = &int_var1; //Assign a different address to the pointer
    std::cout << "p_int (Adress in memory) : " << p_int << std::endl;

    //>> Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};

    //p_int1 = &double_var; //!Compiler Error "a value of type "double *" cannot be assigned to an entity of type "int *""

    //>> Dereferencing a pointer :
    int *p_int2 {nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "Value : " << *p_int2 << std::endl;//? Dereferencing a pointer :

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}