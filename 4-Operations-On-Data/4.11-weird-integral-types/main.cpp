
// ! 4.11 Weird Integral types
// ? |Lesson Start           | 06H : 54Min : 25 Sec |
//*  |Code Start             | 06H : 57Min : 03 Sec |
//*  |Next Lesson            | 06H : 59Min : 44 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// || 
/*

*/

#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.11 Weird Integral types "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    short int var1{10}; // 2 bytes
    short int var2{20};

    char var3{40}; // 1bytes
    char var4{50};

    std::cout << "Size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "Size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "Size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "Size of var4 : " << sizeof(var4) << std::endl;

    auto result1 = var1+var2;  // 4 bytes
    auto result2 = var3 + var4;// 4 bytes

    std::cout << "Size of result1 : " << sizeof(result1) << std::endl;
    std::cout << "Size of result2 : " << sizeof(result2) << std::endl;


    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}