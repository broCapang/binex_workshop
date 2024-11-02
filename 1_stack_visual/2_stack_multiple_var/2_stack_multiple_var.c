#include <stdio.h>

void show_stack_contents() {
    int num = 42;                // Decimal integer
    char *str = "Hello, Stack!"; // Pointer to string
    int *ptr = &num;             // Pointer to an integer

    printf("Number: %d\n", num);
    printf("String: %s\n", str);
    printf("Pointer to num: %p\n", (void*)ptr);

}

int main() {
    show_stack_contents();
    return 0;
}

