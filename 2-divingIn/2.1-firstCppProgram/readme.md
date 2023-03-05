# CH 02 DIVING IN

## 2.1 First Cpp Program

* [main.cpp](./main.cpp)
* [Home](/README.md)

> Timeline 

* Basic Cpp file  
> `#include <iostream>` it means add input/output library    
> ` int main(){};` First function of program or first program to run

    >> #include <iostream>         
    >> int main(int argc, char const *argv[]){         
    >>     int a{2};           
    >>     std::cout<<"Hello World!"<<a<<std::endl;            
    >>     return 0;           
    >> }
> ` std::cout ` Give the Output ` << >> ` show the flow of data ` std::endl ` end the line.    
> ` return 0 ` End the Programm and Return 0.
> ` ; ` At End of Every line without it you can have error.
Compile Code in Terminal    
    
    >> g++ -std=c++20 -o outputfileName SourceFile.cpp     
    >> clang++ -std=c++20 -o output Sourcefile.cpp
Run Code in Terminal    
    
    >> ./output