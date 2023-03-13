# Chapter 04 Operations On Data

## 4.6 Relational Operators : Comparing Stuff

||Time (00H : 00Min : 00 Sec)|
|-|-|
 |Lesson Start           | 05H : 31Min : 44 Sec |  
 |Code Start             | 05H : 33Min : 31 Sec |  
 |Next Lesson            | 05H : 40Min : 56 Sec | 
* [main.cpp](./main.cpp)
* [Home](/README.md)

---

## Error

1. Not Using Parenthese
```
    //!stress the need for parenthese here
    // std::cout<<" Number1 < Number2 : "<<(num1<num2)<<std::endl;
    std::cout<<" Number1 < Number2 : "<<num1<num2<<std::endl;
```
Outtput :- 
```
main.cpp:30:52: error: reference to overloaded function could not be resolved; did you mean to call it?
    std::cout<<" Number1 < Number2 : "<<num1<num2<<std::endl;
                                                   ^~~~~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/ostream:992:1: note: possible target for call
endl(basic_ostream<_CharT, _Traits>& __os)
^
main.cpp:30:45: warning: overloaded operator << has higher precedence than comparison operator [-Woverloaded-shift-op-parentheses]
    std::cout<<" Number1 < Number2 : "<<num1<num2<<std::endl;
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
main.cpp:30:39: note: place parentheses around the '<<' expression to silence this warning
    std::cout<<" Number1 < Number2 : "<<num1<num2<<std::endl;
                                      ^
    (                                       )
main.cpp:30:45: note: place parentheses around comparison expression to evaluate it first
    std::cout<<" Number1 < Number2 : "<<num1<num2<<std::endl;
                                            ^
                                        (                   )
1 warning and 1 error generated.
```