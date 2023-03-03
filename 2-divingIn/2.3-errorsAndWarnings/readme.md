
# CH 02 Diving In

## 2.3 Error And Warnings

> Timeline - 2h:01m:59s

### Compile Time Errors

    >>  #include <iostream>
    >>  
    >>  int main(int argc, char **argv)
    >>  
    >>  {
    >>      std::cout << "Hello World in C++2@!" << std::endl
    >>      return 0;
    >>  }
Reason Of Error :- `std::cout << "Hello World in C++2@!" << std::endl` there is no semicolon `;` at end of line.
Your cpp file can't be compile

    >> g++ -std=c++20 -o gccfile main.cpp
    >> main.cpp:14:54: error: expected ';' after expression
    >>     std::cout << "Hello World in C++2@!" << std::endl
    >>                                                      ^
    >>                                                      ;
    >> 1 error generated.

### Runtime Errors

    >> // todo  Runtime Error
    >>     int value = 7/0;
    >>     std::cout<<"value : "<<value<<std::endl;
In Runtime Error You don't get what you desire.     
> It Gives Warning

    >> g++ -std=c++20 -o gccfile main.cpp
    >> main.cpp:18:18: warning: division by zero is undefined [-Wdivision-by-zero]
    >>     int value = 7/0;
    >>                  ^~
    >> 1 warning generated.
> Result

    >> ./gccfile
    >> ==================================== Start Here ============================================
    >> Hello World in C++2@!
    >> value : 1
    >> ==================================== Finish Here ===========================================

### Warnings
