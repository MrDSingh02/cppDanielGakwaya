// Chapter 8: Pointers
// ! 8.9 Memory Leaks
// ? |Lesson Start           | 11H : 45Min : 19 Sec |
//-  |Code Start             | 11H : 50Min : 00 Sec |
//-  |Next Lesson            | 11H : 55Min : 46 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// /: | clang++ -std=c++20 -o build.clang main.cpp |
/// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.9 Memory Leaks "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    /* int *p_number {new int{67}}; //- Points to some address, lets call that address1 {heap variable}

    //> Should delete and reset here

    int number{55}; // lives at address2 {stack variable}

    p_number = &number; //- Now p_number points to address2, but address1 is still
                        //- our program. but our program has lost access to that
                        //> memory has been leaked. */

   /*  //> Double allocation
    int *p_number1 {new int{55}};

    //? Use the Pointer

    //? Should delete and reset here.

    p_number1 = new int{44}; //- Memory with int{55} leaked. */


    /* //> Nested scopes with dynamically allocated memory
    {
        int *p_number2 {new int{57}};
        //? Use the Pointer

        //? Should delete and reset here.

    }
    //> Memory Leaked with int{57} leaked. */
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}