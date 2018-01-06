#include <stdio.h>
#include <math.h>

int main(){
	int one, two, three, four, five, six, seven, eight, nine, ten;
	int input1, input2, input3, multi = 0, len = 0, cnt = 0;
	scanf("%d %d %d", &input1, &input2, &input3);

	multi = input1 * input2 * input3;
	// /*test*/printf("multii = %d\n",multi);
	int multi_clone = multi;

	char num[12];

	int number[9];

	for(int i = 0;i < 9;i++){
		number[i] = i+1;
	}

	for(int i = 0;i < 10;i++){
		if((multi_clone / (pow(10,i))) > 1){
			len += 1;
		}
	}
	
	// /*test*/printf("len = %d\n",len);

	multi_clone = multi;
	num[0] = multi_clone % 10;

	for(int j = 1;j < len; j++){
		num[j] = (multi_clone / ((int)pow(10,j)) % 10);
		// /*test*/printf("num[%d] = %d\n", j, num[j]);
		multi_clone = multi;
	}

	for(int i = 0;i < 9;i++){
	// /*test*/printf("number[%d] = %d\n",i,number[i]);
		for(int j = 0;j < len; j++){
			// /*test*/printf("num[%d] = %d\n",j,num[j]);
			if(number[i] == num[j]){
				cnt += 1;
			}
		}
		number[i] = cnt;
		cnt = 0;
	}

	cnt = 0;	

	for(int i = 0;i < len;i++){
		// /*test*/printf("num[%d] = %d\n",i,num[i]);
		if(num[i] == 0){
			cnt++;
		}	
	}
	printf("%d\n",cnt);
	for(int r = 0; r < 9; r++){
		printf("%d\n",number[r]);
	}
	printf("\n");
}