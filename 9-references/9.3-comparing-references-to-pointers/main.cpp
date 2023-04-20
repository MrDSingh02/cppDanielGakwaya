// Chapter 9: References
// ! 9.3 Comparing pointers and references
// ? |Lesson Start           | 12H : 22Min : 29 Sec |
//-  |Code Start             | 12H : 27Min : 33 Sec |
//-  |Next Lesson            | 12H : 37Min : 26 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// /: | clang++ -std=c++20 -o build.clang main.cpp |
/// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 9.3 Comparing pointers and references "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    //? Declare pointer and reference

    double double_value {12.34};
    double& ref_double_value {double_value};/// Reference to double_value
    double* p_double_value {&double_value}; /// Pointer to double_value

    /// Reading
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //> Writting through pointer
    *p_double_value = 15.44;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //> Writting through Reference
    ref_double_value = 18.44;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //> Make the reference reference something else
    double some_other_double {78.45};

    ref_double_value = some_other_double;

    std::cout << "Make the reference reference something else" << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //> Make the Pointer point to something else
    p_double_value = &some_other_double;

    std::cout << "Make the Pointer point to something else" << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;


    //! Error
    // int& ref_some{};
    /* initial value of reference to non-const must be an lvalue */




    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}