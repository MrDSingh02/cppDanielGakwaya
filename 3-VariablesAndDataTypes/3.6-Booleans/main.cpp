// ! 3.6 Booleans
// ? Start Time :           | 04h : 16m : 40s |
//*  Code Time  :           | 04h : 19m : 27s |
//*  Left Time  :           | 26h : 42m : 37s |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// // 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 3.6 Booleans "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    bool red_light{false};
    bool green_light{true};

    if (red_light == true){
        std::cout<<"Stop!"<<std::endl;
    }else{
        std::cout<<"Go Through!"<<std::endl;
    }

    if(green_light == true){
        std::cout<<"The Light is green!"<<std::endl;

    }else{
        std::cout<<"The light is not green!"<<std::endl;
    }

    //sizeof()
    std::cout<<"sizeof(bool) : "<<sizeof(bool)<<std::endl;

    //Printing out a bool
    // 1 -->>  true
    // 0 -->>  false
    std::cout<<std::endl;
    std::cout<<"red_light : "<<red_light<<std::endl;
    std::cout<<"green light : "<<green_light<<std::endl;

    std::cout<<std::boolalpha;
    std::cout<<"red_light : "<<red_light<<std::endl;
    std::cout<<"green light : "<<green_light<<std::endl;

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}