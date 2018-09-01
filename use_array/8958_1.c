#include <stdio.h>
#include <string.h>

int main(){
	char str[80];
	char o = 'O';
	char x = 'X';
	int input, len, result = 0;
	int cnt = 1;
	int plus = 2;

	scanf("%d",&input);
	for(int i = 0;i < input;i++){

		scanf("%s",str);
		len = strlen(str);
		for(int j = 0;j < len; j++){

			if(str[j] == 'O'){
				if(str[j-1] == 'O'){
					result += plus;
					plus += 1;
				}
				else{
					plus = 2;
					result += 1;
				}
			}

		}
		printf("%d\n", result);
		result = 0;

	}
}