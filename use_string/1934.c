#include <stdio.h>

int main(){

	int bigger, smaller, cnt, result = 0, tmp;
	int input_1, input_2;

	scanf("%d", &cnt);

	for(int i = 0; i < cnt; i++){
		scanf("%d %d", &input_1, &input_2);
		
		bigger = input_1 > input_2 ? input_1 : input_2;	
		smaller = input_1 < input_2 ? input_1 : input_2;	

		while(result == 0){

			if(bigger % smaller == 0){
				result = smaller;
			}
			else{
				bigger %= smaller;
			}
			tmp = bigger;
			bigger = smaller;
			smaller = tmp;
		}
		smaller = input_1 < input_2 ? input_1 : input_2;
		bigger = input_1 > input_2 ? input_1 : input_2;	

		printf("%d\n", smaller * bigger/result);
		result = 0;
	}
	

	return 0;
}