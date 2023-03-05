# CH 02 DRIVING IN

## 2.4 STATEMENTS AND FUNCTIONS

> TIME : 02h : 13m : 13s
> vs   : 02h : 19m : 20s

## What is Statements?

* A Statement is a basic unit of computation in C++ program   
* Every C++ Program Is a Collection of statements organized in a certain way to achieve some goal 
* Statements end with a semicolon in C++ ( `;` )

        >>  int main()
        >>  {
        >>  
        >>      int firstNumber = 12;
        >>      int secondNumber = 9;
        >>  
        >>      int sum = firstNumber + secondNumber;
        >>  
        >>      std::cout <<"The sum of two number is: "<< sum << std::endl;
        >>  
        >>      return 0;
        >>  }
    > In This Program there are five statements
    >1. `int firstNumber = 12;` define 12 as `firstNumber`
    >2. `int secondNumber = 9;` Define 9 as `secondNumber`
    >3. `int sum = firstNumber + secondNumber;` do the sum of two number
    >4. `std::cout <<"The sum of two number is: "<< sum << std::endl;` Print the sum of Two Number
    >5. `return 0;` End the Program and exit with 0
* Statements are executed in order from top to bottom when the program is run
* Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements

---

## Function

|Input we Give To Function| Function Executed|Function Give the OutPut|
|-|-|-|
|Input is `firstNumber` And `secondNumber`|>>>>>>>>>>>>|Output or Result is `Sum` of two Input|

    >>  int addNumbers(int first_number,int second_number){
    >>      int sum = first_number + second_number;
    >>      return sum;
    >>  }
>* `int addNumbers` is name of function or Variable addNumbers hold the function.
>* `int first_number` and `int second_number` is the Input we give to function.
>* `int sum = first_number + second_number;` is task this function do.
>* `return sum;` is the output of this function.

### Basic Structer of Function

    >> (type of value function work) function-NAME(Parameters){
    >>     Work of funtion
    >>     return work;
    >> }

> NOTE : A function Must be defined before It's use

### A function

    >>  int addme(int first, int second){
    >>      int sum = first + second;
    >>      return sum;
    >>  }
    >>  
    >>  int main()
    >>  {
    >>      int fnum = 12;
    >>      int snum = 9;
    >>  
    >>      int sum = fnum + snum;
    >>  
    >>      sum = addme(fnum,snum);
    >>  
    >>      sum = addme(34,8);
    >>  
    >>      std::cout<<"The sum the two Number is: "<<sum<< std::endl;
    >>      std::cout<< "The sum of the two numbers is: "<<addme(23,4)<< std::endl;
    >>  }
