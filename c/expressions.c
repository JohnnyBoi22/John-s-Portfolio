#include <stdio.h> //THIS BULLCRAP

int main() {
	int a, b; //INTGERS/CHARS
	char c;

	a = 10; //ASSIGNMENTS
	b = 20;
	
	scanf("%c", &c);

	if(a > b) {
		printf(" a >  b = %i\n", a > b); // OUTPUT
	}	

	if(c >= 65 && c <= 90 ) {
		c = c+ 32;
	}
	printf("lowercase = %c\n", c); // k

	return 0; //RETURN
       } 
	
