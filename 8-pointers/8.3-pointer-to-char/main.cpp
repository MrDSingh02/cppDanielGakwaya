// Chapter 8: Pointers
// ! 8.3 Pointers To Char
// ? |Lesson Start           | 10H : 14Min : 49 Sec |
//*  |Code Start             | 10H : 21Min : 23 Sec |
//*  |Next Lesson            | 10H : 27Min : 30 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.3 Pointers To Char "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    const char *massge{"helloWorld!"};
    std::cout << "massage : "<< massge << std::endl;
    
    // * massge = 'B'; //! Compile Error
    std::cout << "massage : "<< *massge << std::endl;

    //>> Allow users to modify the string
    char message1[]{"Hello World!"};
    message1[0] = 'B';
    std::cout << "Message1 Out : " << message1 << std::endl;
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}