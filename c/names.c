#include <stdio.h>

int main(){
	char name[30];
	printf("Greetings! What is your name?: ");
	scanf("%s", &name);
	printf("Your name is %s\n", name);
	return 0;
} 
