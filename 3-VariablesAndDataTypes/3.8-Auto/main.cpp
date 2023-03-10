// ! 3.8 Auto
// ?|Lesson Start           | 04H : 32Min : 09 Sec | 
//* |Code Start             | 04H : 34Min : 29 Sec | 
//* |Next Lesson            | 04H : 38Min : 07 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 3.8 Auto "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    auto var1 {12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    // int Modifiers suffix
    auto var6{123u};//unsigned
    auto var7{123ul}; //unsigned long
    auto var8{123ll}; // long long

    //ToDo: Printing

    std::cout<<" Var1 Occupies : "<<sizeof(var1)<<" bytes"<<std::endl;
    std::cout<<" Var2 Occupies : "<<sizeof(var2)<<" bytes"<<std::endl;
    std::cout<<" Var3 Occupies : "<<sizeof(var3)<<" bytes"<<std::endl;
    std::cout<<" Var4 Occupies : "<<sizeof(var4)<<" bytes"<<std::endl;
    std::cout<<" Var5 Occupies : "<<sizeof(var5)<<" bytes"<<std::endl;
    std::cout<<" Var6 Occupies : "<<sizeof(var6)<<" bytes"<<std::endl;
    std::cout<<" Var7 Occupies : "<<sizeof(var7)<<" bytes"<<std::endl;
    std::cout<<" Var8 Occupies : "<<sizeof(var8)<<" bytes"<<std::endl;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}