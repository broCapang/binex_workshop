#include <stdio.h>

void vuln(){

	char buf[16];
	int admin = 0;
	printf("Enter your message: ");
	gets(buf);

	if (admin == 0 ){
		printf("Your message has been pass into the admin\n");

	}else{
		printf("Hello Admin");
	}

	return;


}
int main(){
	vuln();
	return 0;

}
