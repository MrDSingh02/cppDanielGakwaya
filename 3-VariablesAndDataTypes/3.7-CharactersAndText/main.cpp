// ! 3.7 Characters And Text
// ? Start Time :           | 04h : 24m : 51s |
//*  Code Time  :           | 04h : 19m : 27s |
//*  Left Time  :           | 26h : 42m : 37s |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 3.7 Characters And Text "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    char c1{'a'};
    char c2{'r'};
    char c3{'r'};
    char c4{'o'};
    char c5{'w'};

    std::cout<<c1<<std::endl;
    std::cout<<c2<<std::endl;
    std::cout<<c3<<std::endl;
    std::cout<<c4<<std::endl;
    std::cout<<c5<<std::endl;

    // One byte in memory : 2^8 = 256 different value ( 0 ~ 255 )
    std::cout<<std::endl;

    char value =65; //ASCII character Code for 'A'
    std::cout<<"Value : "<<value<<std::endl;
    std::cout<<"Value(int) : "<<static_cast<int>(value)<<std::endl;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}