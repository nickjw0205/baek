#include <stdio.h>

int main(){
	int input, clone, clone1 = 0, clone2;

	scanf("%d",&input);

	for(int i = input;i > 0;i--){

		clone = input;
		clone2 = clone1;
		while(clone2 > 0){
			printf(" ");
			clone2--;
		}

		while(clone > 0){
			printf("*");
			clone--;
		}
		printf("\n");
		input--;
		clone1++;
	}
}