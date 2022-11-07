#include <stdio.h>

int main() {
	char name[30];
	printf("Enter the name of your character: ");
	scanf("%s", &name);
	printf("Greetings! Your name is %s\n", name);
	return 0;
}
