#include <stdio.h>

int main(){

	int input_A, input_B, input_count, break_a = 1;

	scanf("%d", &input_count);

	for(int i = 1;i <= input_count;i++){
		scanf("%d %d", &input_A, &input_B);

		if(input_A % input_B == 0){
			printf("%d\n", input_A);
		}

		else if(input_B % input_A == 0){
			printf("%d\n", input_B);
		}

		else{
			while(1){
				if(input_A > input_B){
					if(input_A % input_B == 0){
						printf("%d\n", input_B);
						break;
					}
					else{
						input_A = input_A % input_B;
					}
				}

				else{
					if(input_B % input_A == 0){
						printf("%d\n", input_A);
						break;
					}
					else{
						input_B = input_B % input_A;
					}
				}	
			}
			
		}

	}

}