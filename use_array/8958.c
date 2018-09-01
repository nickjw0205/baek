#include <stdio.h>
#include <string.h>

int main(){
	char str[80];
	char o = 'O';
	char x = 'X';
	int input, len, result = 0;
	int cnt = 1;

	scanf("%d",&input);
	for(int i = 0;i < input;i++){

		scanf("%s",str);
		len = strlen(str);
		for(int j = 0;j < len;j++){
			if(strcmp(str+j,&o) == 0)	{
				result += cnt;
				printf("j = %d\n, cnt = %d",j,cnt);
				cnt += 1;
			}
			else{
				cnt = 1;
			}
		}
		printf("%d\n", result);
		result = 0;
	}



}
