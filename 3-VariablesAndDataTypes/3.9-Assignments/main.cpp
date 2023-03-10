// ! 3.9 Assignments
// ? Start Time :           | 04H : 38Min : 08 Sec |
//*  Code Time  :           | 04H : 39Min : 47 Sec |
//*  Left Time  :           | 04H : 45Min : 46 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 3.9 Assignments "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int var1{123}; //Declare and initialize
    std::cout<<" Var1 : "<<var1<<std::endl;

    var1=55; //Assign
    std::cout<<" Var1 : "<<var1<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<std::endl;

    double var2{44.55}; // Declare and initialize
    std::cout<<" Var2 : "<<var2<<std::endl;

    var2 = 99.99; //Assign
    std::cout<<" Var2 : "<<var2<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<std::endl;
    
    bool state{false}; // Declare and initialize
    std::cout<<std::boolalpha;
    std::cout<<" state : "<<state<<std::endl;

    state = true; //Assign
    std::cout<<" state : "<<state<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<std::endl;

    //! Auto type deduction
    //! Careful about auto assignments
    auto var3 {333u}; // Declare and initialize
    var3= -22; //! Assign negative number. DANGER!

    std::cout<<" Var3 : "<<var3<<std::endl;

    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}