// ! 4.8 Output Formating
// ? |Lesson Start           | 05H : 56Min : 09 Sec |
//*  |Code Start             | 06H : 10Min : 34 Sec |
//*  |Next Lesson            | 06H : 33Min : 27 Sec |
// Todo: | g++ -std=c++20 -o build.gcc main.cpp |
// Todo: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>
#include<iomanip>

int main(int argc, char const *argv[])
{
    std::cout<<" 4.8 Output Formating "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    //ToDo: std::endl - Places a new line character on the output stream.
    //  This is identical to placing ' \n ' on the output stream.

    std::cout<<"hello";
    std::cout<<"world";

    std::cout<<std::endl;

    std::cout<<"-----------"<<std::endl;

    std::cout<<"hello"<<std::endl;
    std::cout<<"world"<<std::endl;

    std::cout<<std::endl;

    std::cout<<"Hello\n";
    std::cout<<"world\n";

    //*============================================================
    std::cout<<std::endl;

    //Todo:- ' std::flush ' - Flushes the output buffer to its final destination.
    std::cout<<"This is a nice message....."<<std::endl<<std::flush;
    //After this 'std::flush', we're sure that at this line, the message has been sent
    //to the stream. This may be important in some applications.


    //*=============================================================
    std::cout<<std::endl;

    //ToDo: 'std::setw()' : Adjusts the field with for the item about to be printed.
    //The 'setw()' manipulator only affects the next value to be printed.

    std::cout<<"Unformatted table : "<<std::endl;
    std::cout<<"Daniel"<<" "<<"Gray"<<" 25"<<std::endl;
    std::cout<<"Stanley"<<" "<<"Woods"<<" 33"<<std::endl;
    std::cout<<"Jordan"<<" "<<"Parker"<<" 45"<<std::endl;
    std::cout<<"Joe"<<" "<<"Ball"<<" 21"<<std::endl;
    std::cout<<"Josh"<<" "<<"Carr"<<" 27"<<std::endl;
    std::cout<<"Izaiah"<<" "<<"Robinson"<<" 29"<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Formated table : "<<std::endl;

    std::cout<<std::setw(10)<<"Firstname"<<std::setw(10)<<"Lastname"<<std::setw(10)<<"Age"<<std::endl;
    std::cout<<std::setw(10)<<"Daniel"   <<std::setw(10)<<"Gray"    <<std::setw(10)<<" 25"<<std::endl;
    std::cout<<std::setw(10)<<"Stanley"  <<std::setw(10)<<"Woods"   <<std::setw(10)<<" 33"<<std::endl;
    std::cout<<std::setw(10)<<"Jordan"   <<std::setw(10)<<"Parker"  <<std::setw(10)<<" 45"<<std::endl;
    std::cout<<std::setw(10)<<"Joe"      <<std::setw(10)<<"Ball"    <<std::setw(10)<<" 21"<<std::endl;
    std::cout<<std::setw(10)<<"Josh"     <<std::setw(10)<<"Carr"    <<std::setw(10)<<" 27"<<std::endl;
    std::cout<<std::setw(10)<<"Izaiah"   <<std::setw(10)<<"Robinson"<<std::setw(10)<<" 29"<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Formated table with variables : "<<std::endl;

    int col_width{14};

    std::cout<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout<<std::setw(col_width)<<"Daniel"   <<std::setw(col_width)<<"Gray"    <<std::setw(col_width)<<" 25"<<std::endl;
    std::cout<<std::setw(col_width)<<"Stanley"  <<std::setw(col_width)<<"Woods"   <<std::setw(col_width)<<" 33"<<std::endl;
    std::cout<<std::setw(col_width)<<"Jordan"   <<std::setw(col_width)<<"Parker"  <<std::setw(col_width)<<" 45"<<std::endl;
    std::cout<<std::setw(col_width)<<"Joe"      <<std::setw(col_width)<<"Ball"    <<std::setw(col_width)<<" 21"<<std::endl;
    std::cout<<std::setw(col_width)<<"Josh"     <<std::setw(col_width)<<"Carr"    <<std::setw(col_width)<<" 27"<<std::endl;
    std::cout<<std::setw(col_width)<<"Izaiah"   <<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<" 29"<<std::endl;


    std::cout<<std::endl;

    //ToDo: Justify - Values can be justified in their feilds. there are three manipulators
    //  for adjusting the justification : left , right , and internal

    //rigth justified
    std::cout<<" Right Justified table(default) : "<<std::endl;

    col_width =20;

    std::cout<<std::right;
    std::cout<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout<<std::setw(col_width)<<"Daniel"   <<std::setw(col_width)<<"Gray"    <<std::setw(col_width)<<" 25"<<std::endl;
    std::cout<<std::setw(col_width)<<"Stanley"  <<std::setw(col_width)<<"Woods"   <<std::setw(col_width)<<" 33"<<std::endl;
    std::cout<<std::setw(col_width)<<"Jordan"   <<std::setw(col_width)<<"Parker"  <<std::setw(col_width)<<" 45"<<std::endl;
    std::cout<<std::setw(col_width)<<"Joe"      <<std::setw(col_width)<<"Ball"    <<std::setw(col_width)<<" 21"<<std::endl;
    std::cout<<std::setw(col_width)<<"Josh"     <<std::setw(col_width)<<"Carr"    <<std::setw(col_width)<<" 27"<<std::endl;
    std::cout<<std::setw(col_width)<<"Izaiah"   <<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<" 29"<<std::endl;

    //Left Justified
    std::cout<<std::left;
    std::cout<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout<<std::setw(col_width)<<"Daniel"   <<std::setw(col_width)<<"Gray"    <<std::setw(col_width)<<" 25"<<std::endl;
    std::cout<<std::setw(col_width)<<"Stanley"  <<std::setw(col_width)<<"Woods"   <<std::setw(col_width)<<" 33"<<std::endl;
    std::cout<<std::setw(col_width)<<"Jordan"   <<std::setw(col_width)<<"Parker"  <<std::setw(col_width)<<" 45"<<std::endl;
    std::cout<<std::setw(col_width)<<"Joe"      <<std::setw(col_width)<<"Ball"    <<std::setw(col_width)<<" 21"<<std::endl;
    std::cout<<std::setw(col_width)<<"Josh"     <<std::setw(col_width)<<"Carr"    <<std::setw(col_width)<<" 27"<<std::endl;
    std::cout<<std::setw(col_width)<<"Izaiah"   <<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<" 29"<<std::endl;

    //Internal Justified : sign is left justified , data is right justified
    std::cout<<std::endl;
    std::cout<<"Internal Justified : "<<std::endl;
    std::cout<<std::right;
    std::cout<<std::setw(10)<<-123.45<< std::endl;
    std::cout<<std::internal;
    std::cout<<std::setw(10)<<-123.45<<std::endl;


    //========================================================================================
    std::cout<<std::endl;

    //setfill

    std::cout<<std::endl;
    std::cout<<"Table with fill characters : "<<std::endl;

    col_width =20;

    std::cout<<std::left;
    std::cout<<std::setfill('_');
    std::cout<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout<<std::setw(col_width)<<"Daniel"   <<std::setw(col_width)<<"Gray"    <<std::setw(col_width)<<" 25"<<std::endl;
    std::cout<<std::setw(col_width)<<"Stanley"  <<std::setw(col_width)<<"Woods"   <<std::setw(col_width)<<" 33"<<std::endl;
    std::cout<<std::setw(col_width)<<"Jordan"   <<std::setw(col_width)<<"Parker"  <<std::setw(col_width)<<" 45"<<std::endl;
    std::cout<<std::setw(col_width)<<"Joe"      <<std::setw(col_width)<<"Ball"    <<std::setw(col_width)<<" 21"<<std::endl;
    std::cout<<std::setw(col_width)<<"Josh"     <<std::setw(col_width)<<"Carr"    <<std::setw(col_width)<<" 27"<<std::endl;
    std::cout<<std::setw(col_width)<<"Izaiah"   <<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<" 29"<<std::endl;


    //======================================================================================
    std::cout<<std::endl;

    //boolalpha and noboolalpha : control bool output format : 1/0 or true/false

    bool con{true};
    bool ocon{false};

    std::cout << "Condition : " << con << std::endl;
    std::cout << "Other Condition : " << ocon << std::endl;

    std::cout<<std::endl;
    std::cout<<std::boolalpha;
    std::cout << "Condition : " << con << std::endl;
    std::cout << "Other Condition : " << ocon << std::endl;

    std::cout<<std::endl;
    std::cout<<std::noboolalpha;
    std::cout << "Condition : " << con << std::endl;
    std::cout << "Other Condition : " << ocon << std::endl;


    //============================================================

    //showpos and noshowpos : show or hide the + sign for postive number

    int pos_num{34};
    int neg_num{-45};

    std::cout<<" Positive Number : " << pos_num << std::endl;
    std::cout<<" Negative Number : " << neg_num << std::endl;

    std::cout<<std::endl;
    std::cout<<std::showpos;
    std::cout<<" Positive Number : " << pos_num << std::endl;
    std::cout<<" Negative Number : " << neg_num << std::endl;

    std::cout<<std::endl;
    std::cout<<std::noshowpos;
    std::cout<<" Positive Number : " << pos_num << std::endl;
    std::cout<<" Negative Number : " << neg_num << std::endl;

    //=================================================================
    std::cout<<std::endl;

    //diferent number systems : std::dec , std::hex, std::oct

    int pos_int{717171};
    int neg_int{-47347};
    double double_var{498.32};

    std::cout<<std::endl;
    std::cout<<"Default base format : "<<std::endl;
    std::cout<<"pos_int : "<<pos_int<<std::endl;
    std::cout<<"neg_int : "<<neg_int<<std::endl;
    std::cout<<"double_var : "<<double_var<<std::endl;


    std::cout<<std::endl;
    std::cout <<"pos_int in different bases : "<<std::endl;
    std::cout <<"pos_int (dec) : " << std::dec <<pos_int<<std::endl;
    std::cout <<"pos_int (hex) : " << std::hex <<pos_int<<std::endl;
    std::cout <<"pos_int (oct) : " << std::oct <<pos_int<<std::endl;

    std::cout <<std::endl;
    std::cout <<"neg_int in different bases : "<<std::endl;
    std::cout <<"neg_int (dec) : " << std::dec <<neg_int<<std::endl;
    std::cout <<"neg_int (hex) : " << std::hex <<neg_int<<std::endl;
    std::cout <<"neg_int (oct) : " << std::oct <<neg_int<<std::endl;

    std::cout<<std::endl;
    std::cout <<"double_var in different bases : "<<std::endl;
    std::cout <<"double_var (dec) : " << std::dec <<double_var<<std::endl;
    std::cout <<"double_var (hex) : " << std::hex <<double_var<<std::endl;
    std::cout <<"double_var (oct) : " << std::oct <<double_var<<std::endl;

    //====================================================================
    std::cout<<std::endl;

    //uppercase and nouppercase

    pos_int = 717171;

    std::cout<<std::endl;
    std::cout <<"pos_int (nouppercase : default) : "<<std::endl;
    std::cout <<"pos_int (dec) : " << std::dec <<pos_int<<std::endl;
    std::cout <<"pos_int (hex) : " << std::hex <<pos_int<<std::endl;
    std::cout <<"pos_int (oct) : " << std::oct <<pos_int<<std::endl;

    std::cout<<std::endl;
    std::cout <<"pos_int (uppercase : default) : "<<std::endl;
    std::cout<<std::uppercase;
    std::cout <<"pos_int (dec) : " << std::dec <<pos_int<<std::endl;
    std::cout <<"pos_int (hex) : " << std::hex <<pos_int<<std::endl;
    std::cout <<"pos_int (oct) : " << std::oct <<pos_int<<std::endl;


    //=========================================================================
    std::cout<<std::endl;

    //fixed and scientific : for floating point values

    double a{3.12138836423456789012345678901567800033};
    double b{2006.0};
    double c{1.34e-10};

    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) : "<<std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) : "<<std::endl;
    std::cout<<std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific) : "<<std::endl;
    std::cout<<std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : "<<std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);//hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    //=================================================================================
    std::cout<<std::endl;

    //setprecision() : the number of digits printed out for a floating point. Default precision 6.

    a = 3.1234567890987654321234567890987654321;

    std::cout<<std::endl;
    std::cout << "a (default precision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;

    //! If the Precision is bigger than supported by the type, you'll just print garbage.


    //==================================================================
    std::cout<<std::endl;

    //showpoint and noshowpoint : show trailing zeros if necessary
    // force output of the decimal point

    double  d{34.1};
    double  e{101.99};
    double  f{12.0};
    int     g{45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;//12
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;//12.00000000000000000
    std::cout << "g : " << g << std::endl;

    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}