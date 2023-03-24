// Chapter 7: Arrays
// ! 7.4 Array of Character
// ? |Lesson Start           | 09H : 26Min : 41 Sec |
//*  |Code Start             | 09H : 31Min : 49 Sec |
//*  |Next Lesson            | 09H : 46Min : 46 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 7.4 Array of Character "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    //>> Declare array
    char message[5] {'h','e','l','l','o'};

    /* //|| Print out array through looping
    std::cout << "message: ";
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;

    //>> Change character in our array
    message[1] = 'a';
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl; */

    //>> will probably print garbage after your char array
    /* std::cout << "message : " << message << std::endl; 
    //! message : hello0�Th�=m 'missing null terminator */

    //? if a character array is null terminated, it's called as C-String

    char message1[] {'h','e','l','l','o','\0'};
    std::cout << "Message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    char message2[6] {'h','e','l','l','o'};
    std::cout << "Message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    char message3[] {'h','e','l','l','o'};  // this is not a C-String, as there is not null character
    std::cout << "Message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;


    //>> String literal
    char message4 [] {"hello world! how are you doing"};
    std::cout << "Message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;


    //
    int number [] {1,2,3,4,5};
    std::cout << "number : " << number << std::endl;
    std::cout << "sizeof(number) : " << sizeof(number) << std::endl;


    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}