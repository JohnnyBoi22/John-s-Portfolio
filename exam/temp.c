#include <stdio.h>

int main() {
	float f,c;
	printf("ENTER A FARENHEIT VALUE: ", f);
	scanf("%f",&f);
	c = (5.0/9.0) * (f -32);
	printf("In celcius that is %.1f\n", c);
	return 0;
}

