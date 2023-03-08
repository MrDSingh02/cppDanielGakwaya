//! 3.4 Integer Modifiers
// ? Time :| 3h : 40m : 45s |
// * Code :| 3h : 44m : 46s |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// // 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<"3.4 Integer Modifiers"<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "
    <<std::endl;
    
    signed int value1{10};
    signed int value2{-300};

    std::cout<<"VAlue 1 : "<<value1<<std::endl;
    std::cout<<"VAlue 2 : "<<value2<<std::endl;
    std::cout<<"sizeof(value1) : "<<sizeof(value1)<<std::endl;
    std::cout<<"sizeof(value2) : "<<sizeof(value2)<<std::endl;
    
    unsigned int value3{4};
    //unsigned int value4{-5};//! It gives an Error

    //ToDo: short and long
    short short_var{-32768}; // 2bytes
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    int int_var{55}; // 4 Bytes
    signed signed_var{66};
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    long long_var{88}; // 4 OR 8 Bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    long long long_long{888}; // 8 Bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    // ToDo:Printing
    std::cout<<" short_var : "<< short_var<<std::endl;
    std::cout<<" short_int : "<<short_int <<std::endl;
    std::cout<<" signed_short : "<< signed_short<<std::endl;
    std::cout<<" signed_short_int : "<< signed_short_int<<std::endl;
    std::cout<<" unsigned_short_int : "<<unsigned_short_int <<std::endl;

    std::cout<<"-----------------"<<std::endl;

    std::cout<<"int_var : "<<int_var<<std::endl;
    std::cout<<"signed_var : "<<signed_var<<std::endl;
    std::cout<<"signed_int : "<<signed_int<<std::endl;
    std::cout<<"unsigned_int : "<<unsigned_int<<std::endl;   

    std::cout<<"-----------------"<<std::endl;

    std::cout<<"long_var : "<<long_var <<std::endl;
    std::cout<<"long_int : "<<long_int <<std::endl;
    std::cout<<"signed_long : "<<signed_long <<std::endl;
    std::cout<<"signed_long_int : "<<signed_long_int <<std::endl;    
    std::cout<<"unsigned_long_int : "<<unsigned_long_int <<std::endl; 

    std::cout<<"-----------------"<<std::endl;

    std::cout<< "long_long : "<<long_long <<std::endl;
    std::cout<< "long_long_int : "<<long_long_int <<std::endl;
    std::cout<< "signed_long_long_int : "<<signed_long_long_int <<std::endl;
    std::cout<< "signed_long_long : "<<signed_long_long <<std::endl;    
    std::cout<< "unsigned_long_long_int : "<<unsigned_long_long_int <<std::endl;        
    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "
    <<std::endl;
    return 0;
}