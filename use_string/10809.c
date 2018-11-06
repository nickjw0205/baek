#include <stdio.h>
#include <string.h>

int main(){

	int location[26];
	char alpha[26];

	//알파벳 배열 초기화
	for(int i = 0;i < 26;i++){
		alpha[i] = 'a'+i;
		// printf("%c\n", alpha[i]);
	}



	//배열 초기화
	for(int i = 0;i < 26;i++){
		location[i] = -1;
	}

	//널문자가 나오기 전까지 돌리기 위해
	char input[100];
	for(int i = 0;i < 100;i++){
		input[i] = '\0';
	}

	scanf("%s",input);

	//널이 아닐때까지
	int inp_loc = 0;

	for(int loc_loc = 0;loc_loc < 26;loc_loc++){

		while(input[inp_loc] != '\0'){

			if((int)input[inp_loc] == (int)alpha[loc_loc]){
				location[loc_loc] = inp_loc;
				break;
			}

			else{
				inp_loc++;
			}		
		}
		inp_loc = 0;		
	}


	//결과 출력
	for(int i = 0;i < 26;i++){
		printf("%d ", location[i]);
	}

	printf("\n");
	return 0;
}










