#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void win_stage_1();
void win_stage_2();
void win_stage_3();
void win_stage_4();
void win_stage_5();

void vuln() {
    char buffer[64];
    printf("Enter your input: ");
    gets(buffer);
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);  
    printf("Exploit the vuln function to win!\n");
    vuln(); 
    
    return 0;
}


void win_stage_1() {
    int fd = open("./flag", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return;
    }
    char buffer[10];
    lseek(fd, 0, SEEK_SET);
    ssize_t n = read(fd, buffer, 10); 
    if (n > 0) write(1, buffer, n);
    close(fd);
}

void win_stage_2() {
    int fd = open("./flag", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return;
    }
    char buffer[10];
    lseek(fd, 10, SEEK_SET);        
    ssize_t n = read(fd, buffer, 10);
    if (n > 0) write(1, buffer, n);
    close(fd);
}

void win_stage_3() {
    int fd = open("./flag", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return;
    }
    char buffer[10];
    lseek(fd, 20, SEEK_SET);       
    ssize_t n = read(fd, buffer, 10);
    if (n > 0) write(1, buffer, n);
    close(fd);
}

void win_stage_4() {
    int fd = open("./flag", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return;
    }
    char buffer[10];
    lseek(fd, 30, SEEK_SET);        
    ssize_t n = read(fd, buffer, 10);
    if (n > 0) write(1, buffer, n);
    close(fd);
}

void win_stage_5() {
    int fd = open("./flag", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return;
    }
    char buffer[10];
    lseek(fd, 40, SEEK_SET);        
    ssize_t n = read(fd, buffer, 10);
    if (n > 0) write(1, buffer, n);
    close(fd);
}

