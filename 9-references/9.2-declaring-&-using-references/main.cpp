// Chapter 9: References
// ! 9.2 Declaring and Using References
// ? |Lesson Start           | 12H : 11Min : 59 Sec |
//-  |Code Start             | 12H : 14Min : 59 Sec |
//-  |Next Lesson            | 12H : 22Min : 29 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// /: | clang++ -std=c++20 -o build.clang main.cpp |
/// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 9.2 Declaring and Using References "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int int_data{33};
    double double_data{44};

    //> References
    int& ref_int_data{int_data};
    double& ref_double_data{double_data};

    /// Print Stuff Out
    std::cout << "int_data : " << int_data << std::endl; 
    std::cout << "&int_data : " << &int_data << std::endl; 
    std::cout << "double_data : " << double_data << std::endl; 
    std::cout << "&double_data : " << &double_data << std::endl; 

    std::cout << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

    std::cout << "------------------------------------------------------------" << std::endl;
    
    //? Modify data from Original Variable
    int_data = 111;
    double_data = 76.3;

    /// Print Stuff Out
    std::cout << "int_data : " << int_data << std::endl; 
    std::cout << "&int_data : " << &int_data << std::endl; 
    std::cout << "double_data : " << double_data << std::endl; 
    std::cout << "&double_data : " << &double_data << std::endl; 

    std::cout << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;

    //? Modify data from reference
    ref_int_data = 98;
    ref_double_data = 87.2;

    /// Print Stuff Out
    std::cout << "int_data : " << int_data << std::endl; 
    std::cout << "&int_data : " << &int_data << std::endl; 
    std::cout << "double_data : " << double_data << std::endl; 
    std::cout << "&double_data : " << &double_data << std::endl; 

    std::cout << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;


    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}