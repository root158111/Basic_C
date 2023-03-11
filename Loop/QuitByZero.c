#include <stdio.h>

int main(){

	int n,sum=0;
	while(1){
		printf("Please input a number(0 for stop)\n");
		scanf(" %d",&n);
		if(n==0){
			break;
		}
		else{
			sum+=n;
		}
	}
	printf("sum=%d",sum);
}
