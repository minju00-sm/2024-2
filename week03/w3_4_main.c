#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a, b;
	float result;
	
	printf("enter two integers: ");
	scanf("%d, %d", &a, &b);
	
	result = (float)a / (float)b;
	printf("%.6f / %.6f = %.6f\n", (float)a, (float)b, result);
	
	
	return 0;
}
