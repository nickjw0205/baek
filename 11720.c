#include <stdio.h>

int main(){
	int sum = 0, input;

	scanf("%d",&input);

	int num[1][input];

	scanf("%d",num[0]);

	for(int i = 0;i < input;i++){
		sum += num[0][i];
	}

	printf("%d\n",sum);
}