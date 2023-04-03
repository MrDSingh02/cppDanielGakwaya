// Chapter 8: Pointers
// ! 8.10 Dynamically allocated array
// ? |Lesson Start           | 11H : 55Min : 46 Sec |
//-  |Code Start             | 12H : 00Min : 20 Sec |
//-  |Next Lesson            | 12H : 11Min : 04 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// /: | clang++ -std=c++20 -o build.clang main.cpp |
/// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.10 Dynamically allocated array "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    const size_t size{10};

    //> Different ways you can declare an array
    //> dynamically and how thay are initialized

    double *p_salaries{ new double[size] }; //- salaries array will Contain garbage values

    int *p_students{ new(std::nothrow) int[size]{} }; //- All values initialized to 0

    double *p_scores{ new(std::nothrow) double[size]{1,2,3,4,5} }; //- Allocating memory space for an 
        //- array of size double vars. First 5 will be initialized with 1,2,3,4,5, and the rest will
        //- be 0's.

    //> nullptr check and use the allocated array
    if(p_scores){
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores." << std::endl;

        //? Print out elements. Can use regular array access notation, or pointer arthmetic 
        for(size_t i{}; i < size; ++i){
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    
    //> Static array VS Dynamic array
    std::cout << "=========================" << std::endl;

    /* int scores[10]{1,2,3,4,5,6,7,8,9,10}; //- Lives on the stack

    std::cout << "score size : " << std::size(scores) << std::endl;
    for( auto s : scores ){
        std::cout << "value : " << s << std::endl;
    } */

    /* int *p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10}; //- Lives on Heap.
    // std::cout << "p_scores1 size : " << std::size(p_scores1) << std::endl;

    for( auto s : p_scores1 ){
        std::cout << "value : " << s << std::endl;
    }

    delete [] p_scores1;
    p_scores1 = nullptr; */


    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}