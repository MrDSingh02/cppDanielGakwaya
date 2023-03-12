// ! 4.4 Prefix And Postfix - Increment And Decrement
// ? |Lesson Start           | 05H : 12Min : 07 Sec |
//*  |Code Start             | 05H : 16Min : 54 Sec |
//*  |Next Lesson            | 00H : 00Min : 00 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.4 Prefix And Postfix - Increment And Decrement "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int value{5};

    //Increment by one
    value= value + 1;//6
    std::cout<<"The Value is : "<<value<<std::endl;

    value = 5 ; // Reset value to 5

    //Decrement by one
    value = value - 1;//4
    std::cout<<"The value is : "<<value<<std::endl;

    //==================================================
    std::cout<<"======== Postfix Increment and decrement =========="<<std::endl;

    value = 5;//Reset value to 5

    std::cout<<"The Value is (Incrementing) : "<<value++ <<std::endl;//5
    std::cout<<"The Value is : "<<value<<std::endl;//6

    std::cout<<std::endl;

    //* Decrement with postfix
    value = 5;//Reset value to 5

    std::cout<<"The Value is (decrementing) : "<<value-- <<std::endl;//5
    std::cout<<"The Value is : "<<value<<std::endl;//4

    std::cout<<std::endl;
    //==================================================
    std::cout<<"======== Prefix Increment and decrement =========="<<std::endl;

    value = 5;//reset the value to 5

    ++value;
    std::cout<<"The value is (prefix++) : "<<value<<std::endl;

    value=5;//Reset the value to 5
    std::cout<<"The Value is (Prefix++ in Place) : "<<++value<<std::endl;//5
    std::cout<<"The Value is : "<<value<<std::endl;//6

    std::cout<<std::endl;
    value = 5;    //Reset the value to 5

    --value;
    std::cout<<"The value is (Prefix--) : "<<value<<std::endl;//4

    value = 5; //Reset the value to 5
    std::cout<<"The value is (prefix-- in place) : "<<--value<<std::endl;//4
    std::cout<<"The value is : "<<value<<std::endl;//4


    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}