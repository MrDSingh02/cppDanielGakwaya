// Chapter 8: Pointers
// ! 8.8 Null Pointer Safety
// ? |Lesson Start           | 11H : 38Min : 04 Sec |
//   |Code Start             | 00H : 00Min : 00 Sec |
//-  |Next Lesson            | 11H : 45Min : 19 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
/// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.8 Null Pointer Safety "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    //> Verbose nullptr check
    /* std::cout << std::endl;
    std::cout << "Verbose nullptr check: " << std::endl;

    int *p_number = new int{10}; /// Initialized to nullptr */

    /* if(!(p_number == nullptr)){
        std::cout << "p_number points to valid address : " << p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }else{
        std::cout << "p_number points to an INVALID address." << std::endl;
    }

    delete p_number;
    p_number = nullptr; */

    /* if(p_number){
        std::cout << "p_number points to valid address : " << p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }else{
        std::cout << "p_number points to an INVALID address." << std::endl;
    }

    delete p_number;
    p_number = nullptr; */

    //> It is OK to call delete on a nullptr
    //> Calling delete on a nullptr is OK
    int *p_number1 {};

    delete p_number1; //- this won't cause any problem
                      //- if p_number1 contains nullptr
    /* if(p_number1 != nullptr){
        delete p_number1;
    } */
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}