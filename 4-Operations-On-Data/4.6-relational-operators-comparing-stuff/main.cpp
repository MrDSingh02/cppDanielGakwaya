// ! 4.6 Relational Operators : Comparing Stuff
// ? |Lesson Start           | 05H : 31Min : 44 Sec |
//*  |Code Start             | 00H : 00Min : 00 Sec |
//*  |Next Lesson            | 05H : 40Min : 56 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.6 Relational Operators : Comparing Stuff "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int num1 {45};
    int num2{60};

    std::cout<<" Number 1 : "<<num1<<std::endl;
    std::cout<<" Number 2 : "<<num2<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Comparing Variables"<<std::endl;

    std::cout<<std::boolalpha; //Make bool show up as true/false instead of 1/0
    //!stress the need for parenthese here
    std::cout<<" Number1 < Number2 : "<<(num1<num2)<<std::endl;
    //! Error
    //! std::cout<<" Number1 < Number2 : "<<num1<num2<<std::endl;
    std::cout<<" Number1 <= Number2 : "<<(num1<=num2)<<std::endl;//t
    std::cout<<" Number1 >  Number2 : "<<(num1>num2)<<std::endl;//f
    std::cout<<" Number1 >= Number2 : "<<(num1>=num2)<<std::endl;//f
    std::cout<<" Number1 == Numebr2 : "<<(num1==num2)<<std::endl;//f
    std::cout<<" Number1 != Number2 : "<<(num1!=num2)<<std::endl;//t

    std::cout<<std::endl;
    std::cout<<"Store comparison Result and Use it later"<<std::endl;

    bool result = (num1 == num2);

    std::cout<<num1 <<" == "<<num2<<" : "<<result<<std::endl;

    std::cout<<"Relational Operator "<<std::endl;

    std::cout<<"  ' <  '  : is less than  : " <<std::endl;
    std::cout<<"  ' <= '  : is less than or eqauls to  : "<<std::endl;//t
    std::cout<<"  ' >  '  : is greater than  : "<<std::endl;//f
    std::cout<<"  ' >= '  : is  greater then or eauals to : "<<std::endl;//f
    std::cout<<"  ' == '  : is  equals to : "<<std::endl;//f
    std::cout<<"  ' != '  : is  not equals to : "<<std::endl;//t
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}