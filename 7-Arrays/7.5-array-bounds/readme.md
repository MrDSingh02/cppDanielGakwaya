# Chapter 7: Arrays
## 7.5 Bounds of an Array
||Time (00H : 00Min : 00 Sec)|
|-|-|
 |Lesson Start           | 09H : 46Min : 46 Sec |  
 |Code Start             | 09H : 49Min : 21 Sec |  
 |Next Lesson            | 09H : 53Min : 26 Sec | 
* [main.cpp](./main.cpp)
* [Home](/README.md)
* [pdf](./7.5-array-bounds.pdf)

---

## read beyond bounds : will read garbage or crash your program
```
int number [] {1,2,3,4,5,6,7,8,9,0};

    //>> read beyond bounds : will read garbage or crash your program
    std::cout << "number[12] : " << number[12] << std::endl;
```
Warning
```
main.cpp:22:37: warning: array index 12 is past the end of the array (which contains 10 elements) [-Warray-bounds]
    std::cout << "number[12] : " << number[12] << std::endl;
                                    ^      ~~
main.cpp:19:5: note: array 'number' declared here
    int number [] {1,2,3,4,5,6,7,8,9,0};
    ^
1 warning generated.
```
Result : 
```
7.5 Bounds of an Array 
 == == == == == == == == == == == == == == == == == == == == == == == == == == == == == 
number[12] : 1800664656
 == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
 ```

 ---

 ## 

