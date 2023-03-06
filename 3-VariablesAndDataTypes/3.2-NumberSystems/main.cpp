// ! 3.2 Number Systems
// ? Time :| 3h : 05m : 06s |
// * Code :| 3h : 17m : 32s |
// Todo: | g++ -std=c++20 -o gccBuild main.cpp |
// Todo: | clang++ -std=c++20 -o clangBuild main.cpp |
// // 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<"---------------- 3.2 Number Systems ---------------------------"
    <<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "
    <<std::endl;

    int num1 = 15; //Decimal
    int num2 = 017; // octal
    int num3 = 0x0F; //hexdecimal
    int num4 = 0b00001111; //binary
     
     std::cout<<" Num 1 : "<<num1<<std::endl;
     std::cout<<"Num 2: "<<num2<<std::endl;
     std::cout<<"num 03 : "<<num3<<std::endl;
     std::cout <<"Num 04 : "<<num4<< std::endl;

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "
    <<std::endl;
    return 0;
}