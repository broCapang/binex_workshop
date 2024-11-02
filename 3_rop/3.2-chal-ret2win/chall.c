#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char hurm[16] = "/bin/cat ./flag\0";
void win(int auth, char* string){ 

    if (auth != 1337){
    	printf("Nice try hacker");
	exit(0);
    }
    system(string);


}

void vuln() {
    char buffer[64];
    printf("Enter some data: ");
    gets(buffer);  // Vulnerable function
}

void interesting_function() {
    asm("pop %rdi; ret");
    asm("pop %rsi; ret");
}

int main(){
    vuln();
    return 0;
}

