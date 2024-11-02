#include <stdio.h>


void vuln(){

	char buffer[10];
	fgets(buffer, 20, stdin);
	return;
}


int main(){

	vuln();

	return 0;
}
