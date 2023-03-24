// Chapter 7: Arrays
// ! 7.2 Declaring and using Arrays
// ? |Lesson Start           | 08H : 48Min : 45 Sec |
//*  |Code Start             | 08H : 59Min : 01 Sec |
//*  |Next Lesson            | 09H : 15Min : 54 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 7.2 Declaring and using Arrays "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    //>> Declare an array of ints
    // int score [10]; // junk Data

    //>> Read Data
    /* std::cout << " Score [0] : " << score[0] << std::endl;
    std::cout << " Score [1] : " << score[1] << std::endl; */

    /* //>> Read with loop
    for(size_t i{0}; i < 10 ; ++i){
        std::cout << "score [" << i << "] : " << score[i] << std::endl;
    } */

    /* //>> Write data into an array
    score[0] = 20;
    score[1] = 21;
    score[2] = 22;
    //>> Print data out
    for(size_t i{0}; i < 10 ; ++i){
        std::cout << "score [" << i << "] : " << score[i] << std::endl;
    } */

    /* //>> Write data into an array with loop
    for(size_t i{0}; i < 10 ; ++i){
        score[i] = i * 10;
    }
    //>> Print data out
    for(size_t i{0}; i < 10 ; ++i){
        std::cout << "score [" << i << "] : " << score[i] << std::endl;
    } */


    //>> Declare and intialize at the same time
    /* 
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i{0}, j{5}; i < j; ++i){
        std::cout << "Salary[" << i << "] : " << salaries[i] << std::endl;
    } */

    /* //? if you don't initialize all the elements, those you leave out are initialized to 0
    int families[5]{12,7,5};

    for(size_t i{0}, j{5}; i<j; ++i){
        std::cout << "families [" << i << "] : " << families[i] << std::endl;
    } */

    /*//>> Omit the size of the array at declaration
    int class_sizes[] {10,12,15,11,18,17};
    // int class_sizes[] ; //! Compile time error not declaring size of array

    //>> will print this with a range based for loop

    for(auto value : class_sizes){
        std::cout << "value : " << value << std::endl;
    } */
    
    /* //>> Read only array
    const int bird[] {10,12,15,11,18,17};
    // bird[2] = 8; //! Error ' expression must be a modifiable lvalue'
 */

    //>> Sum up score array, store result in sum

    int scores[]{2,5,8,2,5,6,9};
    int sum{0};

    for(int element : scores){
        sum += element;
    }
    std::cout << "Scores sum : " << sum << std::endl;


    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}