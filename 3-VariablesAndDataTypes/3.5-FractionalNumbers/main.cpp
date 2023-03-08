//! 3.5 Fractional Numbers
// ? Time :| 03h : 54m : 02s |
// * Code :| 04h : 03m : 44s |
// RemTime | 26h : 50m : 49s |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>
#include<iomanip> //? this is C++ Standard Library we are using for Precision

int main(int argc, char const *argv[])
{
    std::cout<<"3.5 Fractional Numbers"<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    // Declare and initialize the variables 
    float number1{1.12345678901234567890f}; // 4 Bytes
    double number2 {1.12345678901234567890};// 8 Bytes
    long double number3{1.12345678901234567890L};// 8 Bytes

 /*    // Print out the Sizes
    std::cout<< "sizeOf float : "<<sizeof(float)<<std::endl;
    std::cout<< "sizeOf double : "<<sizeof(double)<<std::endl;
    std::cout<< "sizeOf long double : "<<sizeof(long double)<<std::endl;  
 */
    //Precision
 /*    std::cout<<std::setprecision(20); // Control the precision from std::cout
    std::cout<<"number1 is : "<<number1 <<std::endl; // 7 digits
    std::cout<<"number2 is : "<<number2 <<std::endl; // 15'ish digits    
    std::cout<<"number3 is : "<<number3 <<std::endl; // 15+ digits    
 */
 /*    //! Float Problems : the precision is usually to limited
    //! for a lot of application
    float number4{192400012.0f}; //!Error: narrowing conversion   
    std::cout <<"Number 4 : "<<number4<<std::endl;
 */
 /*    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};// Can ommit the lowe 00023
                             // for simplicity if our application allows
    double number8 {0.000000000000003498};
    double number9 {3.498e-11};//multiply with 10 exp(-11)   

    std::cout<<"number 5: "<<number5 <<std::endl;
    std::cout<<"number 6: "<<number6 <<std::endl;
    std::cout<<"number 7: "<<number7 <<std::endl;
    std::cout<<"number8 : "<<number8 <<std::endl;    
    std::cout<<"number9 : "<<number9 <<std::endl;     
  */  

    double number10 {5.6}; // initialized to 5.6
    double number11 {}; // initialized to 0
    double number12 {}; // initialized to 0

    //! Infanity
    double result{number10/number11};

    std::cout<<number10<<"/"<<number11<<" Yields "<<result<<std::endl;
    std::cout<<result<< " + "<<number10<<" yields "<<result+number10<<std::endl;

    //! NaN
    result = number11/number12;

    std::cout<<number11<<" / "<<number12<<" = "<<result<<std::endl;

    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}