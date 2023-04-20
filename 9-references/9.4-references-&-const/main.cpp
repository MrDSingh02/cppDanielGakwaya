// Chapter 9: References
// ! 9.4 References and Const
// ? |Lesson Start           | 12H : 37Min : 26 Sec |
//-  |Code Start             | 12H : 40Min : 03 Sec |
//-  |Next Lesson            | 12H : 44Min : 26 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// /: | clang++ -std=c++20 -o build.clang main.cpp |
/// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 9.4 References and Const "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    //> Non const reference
    std::cout << std::endl;
    std::cout << "Non const reference : " << std::endl;
    int age {27};
    const int& ref_age {age};

/*
    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    //> Can Modify original variable through reference

    std::cout << std::endl;
    std::cout << "Modify original variable through reference : " << std::endl;

    ref_age++; /// Modify through reference

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;
*/

    //> Simulating reference behaviour with pointers
    const int* const p_age {&age};

    // *p_age = 45;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}