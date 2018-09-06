#include <stdio.h>
#include <string.h>

char ascending_str[] = "1 2 3 4 5 6 7 8";
char descending_str[] = "8 7 6 5 4 3 2 1";

void ascending(char str){
	int result = 0;
	for(int i = 0;i < 10;i++){
		if(str[i] == ascending_str[i]){
			result = 1;
		}

		else{
			return 0;
		}
	}

	return result;
	
}

void descending(char str){
	int result = 0;
	for(int i = 0;i < 10;i++){
		if(str[i] == ascending_str[i]){
			result = 1;
		}

		else{
			return 0;
		}
	}

	return result;
}


int main(){
	char* str[12];
	scanf("%s",str);
	if(ascending){
		printf("ascending\n");
	}

	else if(descending){
		printf("descending\n");
	}

	else{
		printf("mixed")
	}
}
