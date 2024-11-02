#include <stdio.h>


void vuln(){

	char buffer[10];
	char input[5];
	fgets(input, 5, stdin);
	sprintf(buffer, "Welcom Mr/Ms, %s",input); // Dangerous if formatted string exceeds buffer


	return;
}


int main(){


	vuln();

	return 0;

}
