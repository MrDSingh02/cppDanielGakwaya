// Chapter 8: Pointers
// ! 8.7 When New Fails
// ? |Lesson Start           | 11H : 24Min : 16 Sec |
//*  |Code Start             | 11H : 28Min : 35 Sec |
//*  |Next Lesson            | 11H : 38Min : 04 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 8.7 When New Fails "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    //! Error
    // int *data = new int[10000000000000000];

    //! Error
    /* for(size_t i{0}; i < 100000000; ++i){
        int * data = new int[10000000];
    } */

    //> Exception  

    /* for(size_t i{0}; i < 100000000; ++i){
        try{
            int * data = new int[10000000];
        }catch(std::exception& ex){
            std::cout << "Something went wrong " << ex.what() << std::endl;
        }
    } */

    //> " std::nothrow "
    for(size_t i{0}; i < 100; ++i){
        int *data = new(std::nothrow) int[1000000000];

        if(data != nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation Failed" << std::endl;
        }
    }
    
    

    std::cout << "Program ending well " << std::endl;

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}