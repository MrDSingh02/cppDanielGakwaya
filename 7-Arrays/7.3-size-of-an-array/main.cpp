// Chapter 7: Arrays
// ! 7.3 Size of An Array
// ? |Lesson Start           | 09H : 15Min : 54 Sec |
//*  |Code Start             | 09H : 18Min : 47 Sec |
//*  |Next Lesson            | 09H : 26Min : 41 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |

/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 7.3 Size of An Array "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int score[] {1,2,3,4,5,6,7,8,9,10,11,12};
/* 
    // int count {std::size(score)};// std::size(C++17)

    //>> Before C++20
    std::cout << "sizeof(score) : " << sizeof(score) << std::endl;
    std::cout << "sizeof(score[0]) : " << sizeof(score[0]) << std::endl;

    int count {sizeof(score)/sizeof(score[0])};

    for(size_t i{0}; i < count ; ++i){
        std::cout << "score[" << i << "] : " << score[i] << std::endl;
    } */

    //>> Range Based for loop
    for(auto i : score){
        std::cout << "Value : " << i << std::endl;
    }
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}