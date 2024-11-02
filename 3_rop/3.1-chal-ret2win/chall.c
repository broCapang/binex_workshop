#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>


void initialize()
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

}


void win(){
    FILE *file = fopen("/flag", "r");
    if (file == NULL) {
        perror("Error opening /flag");
        return;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

}


void vuln()
{
    char password[16];
    puts("Enter password: ");
    gets(password);

    int i = strcmp(password,"S3Cur3_P4SS_123");
    if (i==0){
	    puts("Welcome Admin!");
	    return 0;
    }else{
	    puts("Nice try");
	    exit(0);
    }
}
int main()
{
    initialize();

    vuln();
    return 0;
}



