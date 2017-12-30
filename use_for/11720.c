#include <stdio.h>

int main(){
	int sum = 0, input;

	scanf("%d",&input);

	char num[input+1];

	scanf("%s",num);

	for(int i = 0;i < input;i++){
		sum += num[i];
	}

	printf("%d\n",sum-48*input);
}