#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdint.h>


void *shellcode_mem;
size_t shellcode_size;

void vuln(){
	uint8_t shellcode[0x1000];
	shellcode_mem = (void *)&shellcode;
	puts("Enter 0x1000");
	shellcode_size = read(0, shellcode_mem, 0x1000);
    	for (int i = 0; i < shellcode_size; i++){
        	if ((i / 10) % 2 == 1){
			((unsigned char *) shellcode_mem)[i] = '\xcc';
		}
	}

	
	((void(*)())shellcode_mem)();
}



int main(){

	vuln();


	return 0;

}
