#include <stdio.h>



int main(){

	int cnt, result = 0;

	scanf("%d",&cnt);

	char str[100];

	//입력 받은 수만큼 반복 시작.
	for(int i = 0; i < cnt; i++){

		//연속인 알파뱃 저장 배열
		char alpha[26];

		//str배열 초기화
		for(int i = 0; i < 100; i++){
			str[i] = '\0';
		}

		//배열 원소 확인을 위해
		int j = 0;

		//alpha배열 증가를 위해
		int k = 0;

		//입력 받기
		scanf("%s", str);

		//확인하기
		while(str[j] != '\0'){
			if(j >= 1){

				//연속이라면
				if(str[j] == str[j+1]){
					alpha[k] = str[j];
					k++;
					j = j + 2;
				}

				//1개만 일때
					//이 조건을 만족하려면 1이상이여야 하기에
				if(str[j] != str[j+1] && str[j-1] != str[j]){
					alpha[k] = str[j];
					k++;
					j++;
					
				}
			}

			//0일 경
			else{
				//연속이라면
				if(str[j] == str[j+1]){
					alpha[k] = str[j];
					k++;
					j = j + 2;
				}
			}

		}

	}
	
	return 0;
}