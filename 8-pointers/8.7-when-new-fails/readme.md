# Chapter 8: Pointers
## 8.7 When New Fails
||Time (00H : 00Min : 00 Sec)|
|-|-|
 |Lesson Start           | 11H : 24Min : 16 Sec |  
 |Code Start             | 11H : 28Min : 35 Sec |  
 |Next Lesson            | 11H : 38Min : 04 Sec | 
* [main.cpp](./main.cpp)
* [Home](/README.md)
* [pdf](./8.7-when-new-fails.pdf)

---

```
int *data = new int[10000000000000000];

for(size_t i{0}; i < 100000000; ++i){
    int * data = new int[10000000];
} 
```
Error Message:-
```
8.7 When New Fails 
 == == == == == == == == == == == == == == == == == == == == == == == == == == == == == 
libc++abi: terminating with uncaught exception of type std::bad_alloc: std::bad_alloc
zsh: abort      ./gcc
```