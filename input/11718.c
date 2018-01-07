#include <stdio.h>

int main(){
	char str[100][102] = {};
	int cnt = 1;

	while(scanf("%s",str[cnt]) != EOF){
	
		cnt++;
	}

	for(int i = 0;i < cnt;i++){
		printf("%s\n",str[i]);
	}
}