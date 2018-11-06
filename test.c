#include <stdio.h>

int main(){

	int x = 38, y = 21;
	double result;

	result = x/y;
	printf("%f\n", result);

	result = (double)x/y;

	printf("%f\n",result);
	return 0;
}