#include <stdio.h>


void function2(){
	char a[16];
        strcpy(a, "bbbbbbbbbbbbbbbb");
}

void function1(){
	function2();
	char a[16];
        strcpy(a, "aaaaaaaaaaaaaaaa");
	return;
}	

int main(){

	function1();
	
	return 0;


}
