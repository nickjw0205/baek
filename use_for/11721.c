#include <string.h>
#include <stdio.h>

int main(){
	int len;
	char string[102];

	scanf("%s",string);

	len = strlen(string);
	int i = 0;
	for(i = 1;i < len+1;i++){
		printf("%c",string[i-1]);
		if(i % 10 == 0){
			printf("\n");
		}
	}
}