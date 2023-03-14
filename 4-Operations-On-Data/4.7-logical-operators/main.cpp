// ! 4.7 Logical Operators
// ? |Lesson Start           | 05H : 40Min : 56 Sec |
//*  |Code Start             | 05H : 47Min : 46 Sec |
//*  |Next Lesson            | 05H : 56Min : 09 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.7 Logical Operators "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    bool a{true};
    bool b{false};
    bool c{true};

    std::cout<<std::boolalpha;
    std::cout<<" a : "<<a<<std::endl;
    std::cout<<" b : "<<b<<std::endl;
    std::cout<<" c : "<<c<<std::endl;

    // AND : Evaluates to true when all operand are true.
    //       A sigle false operand will drag 
    //       the entire expression to evalute false.

    std::cout<<std::endl;
    std::cout<<"Basic AND(&&) Operations"<<std::endl;

    std::cout<<"a && b : "<<(a&&b)<<std::endl;//false
    std::cout<<"a && c : "<<(a&&c)<<std::endl;//true
    std::cout<<"a && b && c : "<<(a&&b&&c)<<std::endl;//false


    //OR : Evalutes to true when at least one operand true.
    //     A single true operand will push 
    //     the entire expression to evaluating true.
    std::cout<<std::endl;
    std::cout<<"Basic OR(||) operations"<<std::endl;
    std::cout<<" a || b : "<<(a||b)<<std::endl;//true
    std::cout<<" a || c : "<<(a||c)<<std::endl;//true
    std::cout<<" a || b || c : "<<(a||b||c)<<std::endl;//true


    //NOT : Negates whateve operand you put it with
    std::cout<<std::endl;
    std::cout<<"Basic NOT(!) Operations"<<std::endl;

    std::cout<<"!a : "<<!a<<std::endl;//fales
    std::cout<<"!b : "<<!b<<std::endl;//true
    std::cout<<"!c : "<<!c<<std::endl;//false


    //Combinations of all these Operators
    std::cout<<std::endl;
    std::cout<<"Combining Logical operators"<<std::endl;
    //ToDo:-       !(a && b) || c
    std::cout<<"!(a && b) || c : "<<(!(a&&b)||c)<<std::endl;//true


    //ToDo: Combining logical operators with relational operators

    int d{45};
    int e{20};
    int f{11};

    std::cout<<std::endl;
    std::cout<<"Relational and logic operations on integers"<<std::endl;
    std::cout<<"d : "<<d<<std::endl;
    std::cout<<"e : "<<e<<std::endl;
    std::cout<<"f : "<<f<<std::endl;

    std::cout<<std::endl;

    std::cout<<"(d > e) && (d > f) : "<<((d>e)&&(d>f))<<std::endl;//true
    std::cout<<"(d == e) || (e <= f) : "<<((d==e)||(e<=f))<<std::endl;//false
    std::cout<<"(d < e) || (d > f) : "<<((d<e)||(d>f))<<std::endl;//true
    std::cout<<"(f > e) || (d < f) : "<<((f>e)||(d<f))<<std::endl;//false
    std::cout<<"(d > f) && (f <= d) : "<<((d>f)&&(f<=d))<<std::endl;//true
    std::cout<<"(d > e) && (d <= f) : "<<((d > e) && (d <= f))<<std::endl;//false
    std::cout<<"(!a) && (d == e) : "<<((!a) && (d == e))<<std::endl;//false
    std::cout<<"(!a) && (d == e) : "<<((!a) && (d == e))<<std::endl;//false


    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}