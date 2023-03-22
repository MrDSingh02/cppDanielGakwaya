// Chapter 6: Loops
// ! 6.1 Loops Introduction
// ? |Lesson Start           | 07H : 55Min : 20 Sec |
//*  |Code Start             | 08H : 06Min : 32 Sec |
//*  |Next Lesson            | 08H : 25Min : 23 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 6.1 Loops Introduction "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
/* 
    // >> Print I Love C++ 10 Times
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
    std::cout << "I Love C++ " << std::endl;
     */

    // >> for loop : the good way
/* 
    for (unsigned int i{0}, j{10}; i < j; ++i){
        //  whatever we want the loop to run
        std::cout << "I Love C++20 " << i << " Times." <<std::endl;
    }
    std::cout << "Loop Done" << std::endl;
 */

    // >> Use 'size_t' : a representation of some unsigned int for positive number [sizes]
/* 
    for(size_t i{0}, j{10}; i < j; ++i){
        std::cout << i << ": I Love C++20" << std::endl;
    }
    std::cout << "For Loop Done" << std::endl;
*/  
/* 
    //>> sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl; //8 bytes in gcc
 */
/* 
    //>> Scope of the iterator
    for(size_t i{0},j{10}; i < j; ++i){
        std::cout << i << " : I love C++20" << std::endl;
    }
    // std::cout << "Loop Done!" << j << std::endl; //! compile error: j is not in scope using loop 
 */
/* 
    //>> Iterator declared outside the loop
    size_t i {0}, j{10};
    for (i, j;i < j; ++i){
        std::cout << i << ": I love c++20" << std::endl;
    }
    std::cout << "Loop Done!" << std::endl;
    std::cout << "i : " << i << ", j : " << j << std::endl;
 */
/* 
    //>> Leave out the iterator declaration part
    size_t i {0}, j{10};
    for (;i < j; ++i){
        std::cout << i << ": I love c++20" << std::endl;
    }
    std::cout << "Loop Done!" << std::endl;
    std::cout << "i : " << i << ", j : " << j << std::endl;
 */
    //>> Don't hard code values : BAD!

    const size_t COUNT{100};
    for(size_t i{0}; i < COUNT; ++i ){
        std::cout << i << ": I Love c++20 " << std::endl;
    }

    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}