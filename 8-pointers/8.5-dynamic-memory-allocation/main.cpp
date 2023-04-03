// Chapter 8: Pointers
// ! 8.5 Dynamic Memory Allocation
// ? |Lesson Start           | 10H : 36Min : 31 Sec |
//*  |Code Start             | 10H : 46Min : 43 Sec |
//*  |Next Lesson            | 11H : 05Min : 45 Sec |
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
    int number {22}; //? Stack
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

/*     //!BAD
    //? Writing into uninitialized pointer through dereference
    int *p_number2; //! Contains Junk Address : Could be anythink
    std::cout << "Writting in the 55" << std::endl;
    *p_number2 = 55; //! Writing into Junk Address : BAD!
    std::cout << std::endl;
    std::cout << "Writing into Uninitialized pointer through dereference" << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl; //? Reading from junk Address.
    std::cout << "Dereferencing bad memory" << std::endl;
    std::cout << "*p_number2 : " << *p_number2 << std::endl;
 */

    /* //>> Initializing Pointer to null
    // int *p_number3 {nullptr}; //Also works
    int *p_number3{}; //- Initialized with pointer equivalent of zero : nullptr
                      //- A Pointer pointing nowhere
    std::cout << "Writting into nullptr memory" << std::endl;
    *p_number3 = 33; //!  :BAD, CRASH
    std::cout << "Done writting" << std::endl;

    std::cout << std::endl;
    std::cout << "Reading and Writting Through nullptr : " << std::endl; 
    std::cout << "p_number3 : " << p_number3 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl; //! Reading from nullptr | BAD, CRASH.
     */

    /* //> Dynamic heap Memory
    int *p_number4 {nullptr};
    p_number4 = new int; //? Dynamically allocate space for a single int on the heap
                         //? This memory belongs to our program from now on. The system 
                         //? Can't use it for anything else, untill we return it.
                         //? After this line executes, we will have valid memory location
                         //? allocated. the size of allocated memory will be such that it 
                         //? can store the type pointed to by the pointer.

    *p_number4 = 77; //? Writing into dynamically allocated memory
    std::cout << std::endl;
    std::cout << "Dynamically Allocated memory : " << std::endl;
    std::cout << "*p_number : " << *p_number4 << std::endl;
    std::cout << "&p_number : " << &p_number4 << std::endl;

    //> Return memory to OS
    delete p_number4;
    p_number4 = nullptr; */

    //! Error
    /* std::cout << "Writing in bad memory" << std::endl;
    *p_number4 = 45;
    std::cout << "*p_number : " << *p_number4 << std::endl;
    std::cout << "Done Writting" << std::endl; */

    //? It is also possible to intialize the pointer with valid Address up on declaration . Not with a nullptr

    int *p_number5{new int};    //Memory location contains junk value
    int *p_number6{new int(22)};//use direct initialization
    int *p_number7{new int{23}};//use uniform initialization

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl;// Junk

    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl;

    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;

    // Remember to release the memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    //> Can reuse pointers
    p_number5 = new int(81);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;

    // Release Memory
    delete p_number5;
    p_number5 = nullptr;

    //! Calling delete twice on a pointer : !BAD
    p_number5 = new int(99);
    std::cout << "*p_number5 : " << *p_number5 << std::endl; 
    /* delete p_number5;
    delete p_number5; */

    // Release Memory
    delete p_number5;
    p_number5 = nullptr;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}