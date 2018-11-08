#include <stdio.h>

int main(){

	int cnt, result = 0, status = 1;

	scanf("%d",&cnt);

	char str[100];

	for(int i = 0; i < cnt; i++){

		int repeat = 0;

		//str배열 초기화
		for(int i = 0; i < 100; i++){
			str[i] = '\0';
		}

		//입력 받기
		scanf("%s", str);

		//str배열 증가를 위해
		int j = 0;

		//중복 확인
		while(str[j+1] != '\0'){
			int k = j + 1;
			// printf("while문 안에 들어왔습니다.\n");

			while(status != 0 && str[k] != '\0'){

				// printf("%c 와 %c를 비교합니다.\n",str[j], str[k]);

				if(str[j] == str[k]){
					repeat++;
					// printf("%c와 %c가 같습니다.\n", str[j], str[k]);
					if(k - j != repeat){
						status = 0;
					}
				}
				k++;
			}
			repeat = 0;
			j++;
		}

		if(status != 0){
			result++;
		}
		status = 1;

	}

	printf("%d\n", result);
}