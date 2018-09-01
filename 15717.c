#include <stdio.h>

int main (void){
	int input;
	int age = 1;
	int result = 1;
	for(int i = 0;i < input - 1;i++){
		age *= 2;
	}
	for(int j = 0;j < 9;j++){
		result *= 10;
	}

	result += 7;

	printf("%d\n",age/result);
}