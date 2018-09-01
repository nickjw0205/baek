#include <stdio.h>

int main(){
	int input;
	int clone;
	scanf("%d",&input);
	clone = input;
	for(int i = 0;i < input;i++){
		printf("%d\n",clone);
		clone--;
	}
}