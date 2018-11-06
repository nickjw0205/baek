#include <stdio.h>

int main(){
	int input_num;
	scanf("%d", &input_num);
	int recur_num;

	for(int i = 0; i < input_num; i++){

		char input_char[20];
		for(int j = 0; j < 20; j++){
			input_char[j] = '\0';
		}		

		scanf("%d %s", &recur_num, input_char);
		
		int k = 0;
		while(input_char[k] != '\0'){
			for(int r = 1; r <= recur_num; r++){
				printf("%c", input_char[k])	;
			}
			k++;
		}
		printf("\n");
	}
	
}