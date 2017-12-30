#include <stdio.h>

int main(){
	int sum = 0, input;
	scanf("%d",&input);

	for(int i = 1;i < input+1;i++){
		sum += i;
	}

	printf("%d\n",sum);
}