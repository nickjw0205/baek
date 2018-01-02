#include <stdio.h>

int main(){
	int num, num_clone, ten, one, cnt = 0, result = 0;

	scanf("%d",&num);
	num_clone = num;
	if(num_clone < 10){
			num_clone =  num_clone*10 + num_clone;
			result++;
	}
	else{
		ten = num_clone / 10;
		one = num_clone % 10;
		num_clone = ((ten + one) % 10) + one*10;
		result++;	
	}
	// /*test*/ printf("-------------------------------\n");
	// /*test*/ printf("ten = %d\n", ten);
	// /*test*/ printf("one = %d\n", one);
	// /*test*/ printf("num_clone = %d\n", num_clone);
	// /*test*/ printf("result = %d\n", result);
	while(num_clone != num && result != 500){

		if(num_clone < 10){
			num_clone =  num_clone*10 + num_clone;
			result++;
		}
		else{
			ten = num_clone / 10;
			one = num_clone % 10;
			num_clone = ((ten + one) % 10) + one*10;
			result++;	
		}
		
		// /*test*/ printf("-------------------------------\n");
		// /*test*/ printf("ten = %d\n", ten);
		// /*test*/ printf("one = %d\n", one);
		// /*test*/ printf("num_clone = %d\n", num_clone);
		// /*test*/ printf("result = %d\n", result);
	}
	printf("%d\n", result);
}
