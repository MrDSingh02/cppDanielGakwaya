// Chapter 8: Pointers
// ! 8.6 Dangling Pointers
// ? |Lesson Start           | 11H : 05Min : 45 Sec |
//*  |Code Start             | 11H : 12Min : 14 Sec |
//*  |Next Lesson            | 11H : 24Min : 16 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.6 Dangling Pointers "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    /* //> Case1 : Uninitialized Pointer
    int * p_number; //| Dangling Uninitialized Pointer

    std::cout << std::endl;
    std::cout << "Case 1 : Uninitialized Pointer : ." << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    // std::cout << "*p_number : " << *p_number << std::endl; //!CRASH */

    /* //> Case2 : Deleted Pointer
    std::cout << std::endl;
    std::cout << "Case 2 : Deleted Pointer " << std::endl;
    int *p_number1 {new int{67}};

    std::cout << "*p_number1 (before deleted) : " << *p_number1 << std::endl;

    delete p_number1;

    std::cout << "*p_number1 (after deleted) : " << *p_number1 << std::endl; */


    /* //> Case3 : Multiple Pointers pointing to same address
    std::cout << std::endl;
    std::cout << "Case 3 : Multiple Pointer pointing to same address : " << std::endl;

    int *p_number3{new int {83}};
    int *p_number4{p_number3};

    std::cout << "p_number3 _ " << p_number3 << " _ " << *p_number3 << std::endl;
    std::cout << "p_number4 _ " << p_number4 << " _ " << *p_number4 << std::endl;

    // Dleting p_number3
    delete p_number3;

    //? p_number4 points to deleted memory. Dereferencing it will lead to undefined behavior : Crash, Garbage or whatever
    std::cout << "p_number4(after deleting p_number3) _ " << p_number4 << " _ " << *p_number4 << std::endl; */

/*     //> Solution1 : Initialize your pointer immedialtely upon declaration
    std::cout << std::endl;
    std::cout << "Solution 1 : " << std::endl;
    int *p_number5{nullptr};
    int *p_number6{new int{56}};

    //? Check For nullptr before use
    if(p_number5 != nullptr){
        std::cout << "*p_number5 : " << p_number5 << std::endl;
    }else{
        std::cout << "Invalid Address" << std::endl;
    }
    if(p_number6 != nullptr){
        std::cout << "*p_number6 : " << p_number6 << std::endl;
    } */


    /* //> Solution2 : Right after your call delete on a pointer, remember to reset the pointer to nullptr to make it 
    //> CLEAR it doesn't point anywere

    std::cout << std::endl;
    std::cout << "Solution 2 : " << std::endl;
    int *p_number7{new int{82}};

    //? Use the pointer however you want
    std::cout << "p_number7 : " << p_number7 << " - " << *p_number7 << std::endl;

    delete p_number7;
    p_number7 = nullptr; //- Reset the pointer

    //? Check for nullptr before use
    if(p_number7 != nullptr){
        std::cout << "p_number7 : " << p_number7 << " - " << *p_number7 << std::endl;
    }else{
        std::cout << "Invalid Memory Access" << std::endl;
    } */

    //> Solution 3 : For Multiple pointer pointing to the same address, Make Sure there is
    //> One Clear pointer (master pointer) that owns the memory (responsible for releasing when nessary), other pointers should only be able to dereference when the master pointer is valid

    std::cout << std::endl;
    std::cout << "Solution 3 : " << std::endl;
    int *p_number8{new int{382}}; //- Let Say p_number8 is the master pointer
    int *p_number9{p_number8};

    //? Dereference the pointer and use them
    std::cout << "p_number8 : " << p_number8 << " - " << *p_number8 << std::endl;

    if(!(p_number8 == nullptr)){ //- Only use slave pointers when master pointer is valid
        std::cout << "p_number9 : " << p_number9 << " - " << *p_number9 << std::endl;
    }
    
    delete p_number8; //- Master releases the memory
    p_number8 = nullptr; //| Reset the pointer

    if(!(p_number8 == nullptr)){ //- Only use slave pointers when master pointer is valid
        std::cout << "p_number9 : " << p_number9 << " - " << *p_number9 << std::endl;
    }else{
        std::cerr << "WARNING : Trying to use an inValid pointer" << std::endl;
    }

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}