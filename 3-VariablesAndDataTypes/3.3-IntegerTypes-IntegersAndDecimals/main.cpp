// ! 3.3 Integers Type : Integer and Decimals
// ? Time :| 3h : 21m : 53s |
// * Code :| 3H : 29M : 34S |
// Todo: | g++ -std=c++20 -o gccBuild main.cpp |
// Todo: | clang++ -std=c++20 -o clangBuild main.cpp |
// // 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 3.3 Integers Type : Integer and Decimals Introduction "
    <<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "
    <<std::endl;
/*
    //todo: Braced initializers
    int elephant_count;

    int lion_count{};// initializes to zero

    int dog_count{10}; // initializes to 10

    int cat_count{15}; // inotializes to 15

    // Can use expression as initializer
    int domestic_animal{dog_count+cat_count};

    //ToDo: Printing Braced initializers
    std::cout << "elephant_count : "<<elephant_count <<std::endl;    
    std::cout << "Lion : " <<lion_count<<std::endl;
    std::cout << "Dog : " <<dog_count<<std::endl;
    std::cout << "Cat : " <<cat_count<<std::endl;
    std::cout << "Domestic Animal : " <<domestic_animal<<std::endl;  
 */
    //! don't use variable that doesn't declared.
    //int lo{doesn't_exist}  

    //ToDo: Functional Initialization
    int apple(5);
    int orage(10);
    int fruits(apple+orage);

    //!int bad_initialization(doesnt_exist3 + doesnt_exist4);

    //! Information Lost. less Safe than braced initialization
    int narrowing_conversion_functional(2.9);

    //ToDo: Printing Functional Initialization
    std::cout <<"Apple Count : "<<apple<< std::endl;
    std::cout <<"Orange Count : "<<orage<< std::endl;
    std::cout <<"Total Fruit Count : "<<fruits<< std::endl;
    std::cout <<"Narrowing Conversion Function : "<< std::endl;

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "
    <<std::endl;
    return 0;
}