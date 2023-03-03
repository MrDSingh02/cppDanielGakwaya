// ! 2.3 Error And Warnings 
// ? Time 02h:01m:59s
// *
// Todo
// //

#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" ==================================== Start Here ============================================"
    <<std::endl;

    // Todo:- Compile time Error
    std::cout << "Hello World in C++2@!" << std::endl;

    // todo  Runtime Error
    int value = 7/0;
    std::cout<<"value : "<<value<<std::endl;
    
    std::cout<<" ==================================== Finish Here ==========================================="
    <<std::endl;
    return 0;
}

