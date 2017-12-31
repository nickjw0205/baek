#include <stdio.h>

int main(){
	int casenum, score;
	float sum, average, people, cnt = 0;

	scanf("%d",&casenum);
	float percentage[casenum];

	for(int i = 0;i < casenum;i++){
		sum = 0;
		scanf("%f",&people);


		int score_array[(int)people];

		while(cnt != people){

			scanf("%d",&score_array[(int)cnt]);
			
			sum += score_array[(int)cnt];
			cnt++;
		}

		average = sum/people;
		printf("average = %f\n",average);
		cnt = 0;

		for(int j = 0;j < people;j++){
			if(score_array[j] > average){
				cnt++;
			}
		}
		
		percentage[i] = (cnt/people) * 100;
		
		cnt = 0;
		printf("-------------\n");
	}
	for(int r = 0;r < casenum;r++){
		printf("%0.3f%%\n", percentage[r]);
	}
}