#include <stdio.h>

void function2() {
    int z = 20;
    int a = 2;
    int b = 4;
    return;
}

void function1() {
    int x = 5;
    int y = 10;
    function2(x, y);
    return;
}

int main() {
    int number = 42;
    printf("Number: %d\n", number);
    function1();
    return 0;
}

