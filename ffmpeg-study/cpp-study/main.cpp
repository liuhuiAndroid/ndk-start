#include <iostream>

#include "stdio.h"
using namespace std;
// C 面向过程方式
void trace(char *s) {
    printf("%s\n", s);
}

// C++ 面向对象方式
class Trace {
public :
    void print(char *s) {
        printf("%s", s);
    }
};

int main() {
    trace("hello trace");
    std::cout << "Hello, World!" << std::endl;

    Trace t;
    t.print("hi 2");

    // 尽量使用 const 定义变量，#define 不会出现在编译期
    // 在编译时出错，很难排错
    #define PI 3.14
    // 在编译时出错，可以排错
    const double PI2 = 3.14;

    int A = 10;
    int B = 20;
    cout << A + B << endl;
    std::cout << A + B << std::endl;
    return 0;
}
