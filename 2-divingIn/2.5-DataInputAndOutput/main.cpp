// ! 2.5 Data Input And Output
// ? Time : | 2h : 31m : 35s |
// * code : | 2h : 37m : 57s |
// Todo   : | g++ -std=c++20 -o gbuild main.cpp |
// //

#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" ==================================== Start Here ============================================"
    <<std::endl;

    //todo: printing data
    /* std::cout<<"Hello C++ 20"<<std::endl;

    int age{21};
    std::cout<< "age: "<<age<<std::endl;

    std::cerr<<"Error message output : Something went wrong"<<std::endl;
    std::clog<<"Log Message : something happened"<<std::endl;
 */
    //todo: Reading data
    /* int age1;
    std::string name;

    std::cout<<"Please type your name and age : "<<std::endl;

    std::cin>>name;
    std::cin>>age1;

    std::cout <<"Hello "<<name<<" You Are "<<age1<<" Year old!"<<std::endl; */

    //todo: Chaining data
    int age2;
    std::string name;

    std::cout<<"Please type your name and age : "<<std::endl;

    
    std::cin>>name>>age2;

    std::cout <<"Hello "<<name<<" You Are "<<age2<<" Year old!"<<std::endl;


    //todo: Reading data with spaces
/*     int age3;
    std::string fname;

    std::cout << "Please enter your full name: "<<std::endl;

    std::getline(std::cin,fname);

    std::cin>>age3;

    std::cout <<"Your Full name is "<<fname<<"And your age is : "<<age2<<std::endl;
 */    
    
    
    std::cout<<" ==================================== Finish Here ==========================================="
    <<std::endl;
    return 0;
}