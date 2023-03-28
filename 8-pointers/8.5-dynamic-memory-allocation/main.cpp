// Chapter 8: Pointers
// ! 8.5 Dynamic Memory Allocation
// ? |Lesson Start           | 10H : 36Min : 31 Sec |
//*  |Code Start             | 10H : 46Min : 43 Sec |
//*  |Next Lesson            | 00H : 00Min : 00 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.5 Dynamic Memory Allocation "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
/*
    //>> How we've used pointers so far
    int number {22};
    int *p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointers and assigning address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    int *p_number1; //! UnInitialized pointer, contains junk address
    int number1 {12};
    p_number1 = &number1; //? Make it point to a valid address
    std::cout << std::endl;
    std::cout << "Unintialized Pointer : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    std::cout << "p_number1 : " << p_number1 << std::endl;
*/

    //!BAD
    //? Writing into uninitialized pointer through dereference
    int *p_number2; //! Contains Junk Address : Could be anythink
    *p_number2 = 55; //! Writing into Junk Address : BAD!
    std::cout << std::endl;
    std::cout << "Writing into Uninitialized pointer through dereference" << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl; //? Reading from junk Address.
    std::cout << "*p_number2 : " << *p_number2 << std::endl;


    //>> Initializing Pointer to null
    // int *p_number3 {nullptr}; //Also works
    int *p_number3{}; //
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}