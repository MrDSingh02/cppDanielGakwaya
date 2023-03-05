// ! 2.4 Statements And Function
// ? Time   : 02h : 13m : 13s
// * VScode : 02h : 19m : 20s
// Todo: g++ -std=c++20 -o gccfile main.cpp
// //

#include<iostream>

//* addme Defined
int addme(int fpar ,int spar){
    int sum = fpar + spar;
    return sum;
}

int main(int argc, char const *argv[])
{
    std::cout<<" ==================================== Start Here ============================================"
    <<std::endl;

    int first_number{3};
    int secon_number{7};

    std::cout<<"First Number : "<<first_number<<std::endl;// 3
    std::cout <<"Second Number : "<<secon_number<<std::endl;// 7

    int sum = first_number +secon_number;

    std::cout<<"Sum : "<<sum<<std::endl;// 10

    // TODO: calling addme Function
    sum = addme(25,7);
    std::cout<<"Sum By addme Function: "<<sum<<std::endl; // 32

    sum = addme(52,27);
    std::cout<<"Sum By addme Function: "<<sum<<std::endl; // 79

    std::cout<<"ADD 30 + 77 : "<<addme(30,77)<<std::endl; // 107

    
    std::cout<<" ==================================== Finish Here ==========================================="
    <<std::endl;
    return 0;
}