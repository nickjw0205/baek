#include <stdio.h>

int main(){

	char str[1000000];

	//배열초기화
	for(int i = 0;i < 1000000; i++){
		str[i] = '\0';
	}

	//알파벳 개수 저장 배열
	int alpha_num[26];

	//input받기
	scanf("%s", str);

	// //input_test출력
	// int i = 0;
	// while(str[i] != '\0'){
	// 	printf("%c",str[i]);
	// 	i++;
	// }

	//for_while_loop && str[j]
	int j = 0;

	//start while loop
	while(str[j] != '\0'){

		//알파벳 비교하기
		for(int i = 0;i < 26;i++){
			if(str[j] == 'a'+i || str[j] == 'A'+i){
				alpha_num[i]++;

				// //test출력
				// printf("%c가 +1 되었습니다.\n",'A' + i);
				// printf("%c = %d\n",'A' + i, alpha_num[i] );
				break;
			}
		}

		j++;
	}

	// //결과값_test출력
	// for(int i = 0;i < 26; i++){
	// 	printf("%c = %d\n", i+'A', alpha_num[i]);
	// }

	//max값 구하기
	int max = 0;
	int max_location = 0;

	//max값 구하기
	for(int i = 0;i < 26; i++){
		if(max < alpha_num[i]){
			max_location = i;
			max = alpha_num[i];
		}
	}

	//max값이 중복되는지 확인 후 출력을 위해. 1이되면 중복되는것.
	int check = 0;

	//max값 중복 검사
	for(int i = 0; i< 26; i++){
		if(max_location != i){
			if(max == alpha_num[i]){
				check = 1;
				break;
			}
		}
	}
	
	// //check_test출력
	// printf("check = %d\n", check);

	//결과값 출력
	if(check == 1){
		printf("?\n");
	}
	else{
		printf("%c\n",max_location + 'A');	
	}

	return 0;
}









