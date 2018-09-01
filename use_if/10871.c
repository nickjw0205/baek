#include <stdio.h>

int main(){
	
	int count, num, input, cnt = 0;
	int result[10000];
	
	scanf("%d %d", &count, &num);
	
	for(int i = 0; i < count; i++){
		scanf("%d", &input);
		if(input < num){	
			result[cnt] = input;
			cnt++;
		}
		else{
		}
	}
	
	for(int j = 0; j < cnt; j++){
		printf("%d ", result[j]);
	}
	
}


