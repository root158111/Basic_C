#include <stdio.h>

int main(){
	int a,b;
	do{
		printf("Please input two integers: \n");
		scanf(" %d %d",&a,&b);
	}while( (a%b)!=0 );
}
