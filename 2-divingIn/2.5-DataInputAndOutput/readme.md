# CH 2 Diving In

## 2.5 Data Input And OutPut

Time :| 2h : 31m : 35s |
Code :| 2h : 37m : 57s |
* [main.cpp](./main.cpp)
* [Home](/README.md)

---

## Data Streams

    >> int main()
    >> {
    >>     //Compiler syntax error: missing semicolon
    >>     std::cout << "Hello world in c++20"<< std::endl;
    >> 
    >>     int a{4};
    >>     int b{3};
    >> 
    >>     //Runtime Error
    >>     int c = 10 / (a-b);
    >>     std::cout << "The value of c is : "<< std::endl;
    >> 
    >>     //Warnings 
    >>     20/0; //this throws a warning on gcc10.
    >>     return 0;
    >> }
>In This Program : 
>>* `std::cout` give the Output of Program OR Print the output
>>* Arrows like ` << ` and ` >> `. Show the flow of Data from program.

|STREAM|PURPOSE|
|---------------|-------------|
| `std::cout` | Printing Data to the Console(Terminal)|
| `std::cin` | Reading data form the terminal|
|`std::cerr`|Printing Error to the console|
|`std::clog`|Printing log messages to the console|

---

## Printing Data

    >> // std::cout : Printing stuff to the console
    >> std::cout << "Hello world!" << std::endl;
    >> 
    >> std::cout << "The number is : "<<12 << std::endl;
    >> 
    >> int age{21};
    >> std::cout << "The age is : "<< age << std::endl;
    >> 
    >> // Error
    >> std::cerr << "std::cerr output : Something went wrong" << std::endl;
    >> 
    >> // Log Message
    >> std::clog << "std::clog output : this ia log message" << std::endl;

---

## Reading Data

    >> int age;
    >> std::string name;
    >> 
    >> std::cout << "Please type in your last name : "<< std::endl;
    >> std::cin >> name;
    >> 
    >> std::cout <<"Pleas type in your age : "<< std::endl;
    >> std::cin >>age;
    >> 
    >> std:: cout <<"Hello" << name << "! You are "<< age << " years old" << std::endl;

 > Note :
 >`std::cin >> name;` here data flow is moving from  `std::cin` to variable `name`.

 ### Chaining `std::cin`

    >> int age;
    >> std::string name;
    >> 
    >> std::cout << "Please type in your last name and age , separated by spaces : " << std::endl;
    >> 
    >> std::cin >>name >> age; //Input name and age
    >> 
    >> std:: cout <<"helo"<< name << "! you are " << age << "Year old." << std::endl;

### Reading Data with Spaces

    >> int age;
    >> std::string fname;
    >> 
    >> std::cout << "Please type in your full name : " << std::endl;
    >> std::getline(std::cin,fname);
    >> 
    >> std::cout << "Your Name Is : "<< fname << std::endl;

