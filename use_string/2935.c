#include <stdio.h>

int main(){
	char input1[100], input2[100], op;
	int result = 0, input1_cnt = -1, input2_cnt = -1;

	for(int i = 0; i < 100; i++){
		input1[i] = '\0';
		input2[i] = '\0';
	}

	for(int i = 0; i < 3; i++){
		if(i == 0){
			scanf("%s\n",input1);
		}
		else if(i == 1){
			scanf("%c\n", &op);
		}
		else{
			scanf("%s", input2);
		}
	}

	int j = 0;
	while(input1[j] != '\0'){
		input1_cnt += 1;
		j++;
	}

	j = 0;
	while(input2[j] != '\0'){
		input2_cnt += 1;
		j++;
	}

	if(op == '*'){
		result = input1_cnt + input2_cnt;
		printf("1");
		while(result != 0){
			printf("0");
			result -= 1;
		}
	}
	else{
		if(input1_cnt == input2_cnt){
			printf("2");
			result = input1_cnt;
			while(result != 0){
				printf("0");
				result -= 1;
			}
		}
		else{
			if(input1_cnt > input2_cnt){
				printf("1");
				while(input1_cnt != 0){
					if(input1_cnt - input2_cnt == 1){
						printf("1");						
					}
					else{
						printf("0");
					}
					input1_cnt -= 1;
				}
			}
			else{
				printf("1");
				while(input2_cnt != 0){
					if(input2_cnt - input1_cnt == 1){
						printf("1");						
					}
					else{
						printf("0");
					}
					input2_cnt -= 1;
				}
			}
		}
	}
	


	printf("\n");


}