#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void alarm_handler() {
    puts("TIME OUT");
    exit(-1);
}


void initialize() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    signal(SIGALRM, alarm_handler);
    alarm(30);
}


void vuln() {
    char buffer[64];
    puts("Enter your input: ");
    fgets(buffer, 128, stdin);  
}

int main() {
    
    vuln();
    return 0;
}
void interesting_function() {
    asm("pop %rdi; ret");
    asm("pop %rsi; ret");
}

