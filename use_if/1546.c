#include <stdio.h>

int main(){
	int input, max = 0, cnt = 0;
	float average, score;
	float sum = 0;
	scanf("%d",&input);

	float score_array[input];

	for(int i =0;i < input;i++){
		scanf("%f",&score);

		score_array[i] = score;

		if(score > max){
			max = score;
		}
	}

	for(int j = 0; j < input; j++){
		sum += score_array[j]/max*100;
	}

	average = sum/input;
		
	printf("%0.2f\n",average);
}