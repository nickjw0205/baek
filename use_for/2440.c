#include <stdio.h>

int main(){
	int input, clone;
	scanf("%d",&input);
	for(int i = input;i > 0;i--){
		clone = input;
		while(clone > 0){
			printf("*");
			clone--;
		}
		printf("\n");
		input--;
	}
}