// Chapter 5: Flow Control
// ! 5.3 Else if
// ? |Lesson Start           | 07H : 20Min : 51 Sec |
//*  |Code Start             | 07H : 23Min : 54 Sec |
//*  |Next Lesson            | 00H : 00Min : 00 Sec |
// >>: | g++ -std=c++20 -o build.gcc main.cpp |
// ||: | clang++ -std=c++20 -o build.clang main.cpp |
// del 
/*

*/
#include<iostream>

//Tools
    const int pen{10};
    const int marker{20};
    const int eraser{30};
    const int rectangle{40};
    const int circle{50};
    const int ellipse{60};

int main(int argc, char const *argv[])
{
    std::cout<<" 5.3 Else if "<<std::endl;
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;

    int tool{circle};

    if(tool == pen){
        std::cout << "Active tool is pen" << std::endl;
        //Do the actual painting
    }
    else if (tool == marker){
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool == eraser){
        std::cout << "Active tool is eraser" << std::endl;
    }
    else if (tool == rectangle){
        std::cout << "Active tool is rectangle" << std::endl;
    }
    else if (tool == circle){
        std::cout << "Active tool is circle" << std::endl;
    }
    else if (tool == ellipse){
        std::cout << "Active tool is ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;



    
    std::cout<<" == == == == == == == == == == == == == == == == == == == == == == == == == == == == == "<<std::endl;
    return 0;
}