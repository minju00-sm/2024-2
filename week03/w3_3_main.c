#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char c;
	char d;
	
	printf("enter a character: ");
	scanf("%c", &c);
	
	d = c + 1;
	
	printf("the next character of %c is %c\n", c, d);
	
	return 0;
}
