#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdint.h>


void *shellcode_mem;


void vuln(){
	uint8_t shellcode[0x1000];
	shellcode_mem = (void *)&shellcode;
	puts("Enter 0x1000");
	read(0, shellcode_mem, 0x1000);
	((void(*)())shellcode_mem)();
}



int main(){

	vuln();


	return 0;

}
