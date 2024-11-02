#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vuln() {
    char buffer[64];
    printf("Enter your input: ");
    fgets(buffer, 128, stdin);  
}

int main() {
    printf("Address of puts@plt: %p\n", puts);
    
    vuln();
    return 0;
}
void interesting_function() {
    asm("pop %rdi; ret");
    asm("pop %rsi; ret");
}

