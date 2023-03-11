#include <stdio.h>

int main(){
	int num;
	do{
		printf("Please input a number between 1 to 5\n");
		scanf(" %d",&num);
	}while( (num > 5) || (num < 1) );
}
