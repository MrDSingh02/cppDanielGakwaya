// Chapter 5: Flow Control
// ! 5.2 if statement
// ? |Lesson Start           | 07H : 03Min : 31 Sec |
//*  |Code Start             | 07H : 07Min : 35 Sec |
//*  |Next Lesson            | 07H : 20Min : 51 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 5.2 if statement "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int number1 {559};
    int number2 {60};

    bool result = (number1 < number2); //Expression yielding the condition
    std::cout << std::boolalpha << "result : " << result << std::endl;
/* 
    std::cout << std::endl;
    std::cout << "Free standing if statement" << std::endl;
    
    //if(result){}
    if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    //if(!result){}
    if(!(result==true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
 */    

/* 
    //>> Using Else
    std::cout << std::endl;
    std::cout << "using the else clause : " << std::endl;

    if(result == true){
        std::cout << number1 << " is less than " << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << std::endl;
    }
 */

/* 
    //>>Use expression as condition directly
    std::cout << std::endl;
    std::cout << "Using expression as condition : " << std::endl;

    if(number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << "Is NOT less than " << number2 << std::endl;
    }
 */


    //>> Nesting if statements
    std::cout << std::endl;
    std::cout << "Nesting if statements" << std::endl;

    bool red = false;
    bool green {true};
    bool yellow {true};
    bool police_stop{true};

    /*
    * if green : go
    * if red , yellow : stop
    * if green and police_stop : stop
    */
   /* 
   if(red){
    std::cout << "Stop" << std::endl;
   }
   if(yellow){
    std::cout << "Slow Down" << std::endl;
   }
   if (green){
    std::cout << "Go" << std::endl;
   } */
   /* 
    std::cout << std::endl;
    std::cout << "Police officer stops(verbose)" << std::endl;
    if(green){
        if(police_stop){
            std::cout << "Stop" << std::endl;
        }
        else{
            std::cout << "Go" << std::endl;
        }
    } */

    std::cout << std::endl;
    std::cout << "Police officer stops(verbose)" << std::endl;
    if(green && !police_stop){
        std::cout << "Go" << std::endl;
    }
    else{
        std::cout << "Stop" << std::endl;
    }
   


    std::cout << " == == == == == == == == == == == == == == == == == == == == == == == == == == == == == " << std::endl;
    return 0;
}