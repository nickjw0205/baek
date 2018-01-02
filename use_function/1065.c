#include <stdio.h>

int result = 0;
void check(int input);

int main(){
	int input;
	scanf("%d",&input);
	if(input >= 100){
		result += 99;
		check(input);
	}

	else{
		result = input;
	}
	

	printf("%d\n",result);
}

void check(int input){
	int hun, ten, one;
	for(int i = 100;i <= input;i++){
		hun = i / 100;
		ten = (i - hun * 100) / 10;
		one = i % 10;
		// printf("---------------------------\n");
		// /*test*/printf("hun = %d\n", hun);
		// /*test*/printf("ten = %d\n", ten);
		// /*test*/printf("one = %d\n", one);
		if(hun - ten == ten - one){
			result += 1;
		}
	
	}
	
}