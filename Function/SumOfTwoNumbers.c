#include <stdio.h>

int sum(int x, int y){
	int result = 0;
	result = x+y;
	return result;
}

int main(){
	int a,b,c;
	printf("Please input 2 numbers!_ _\b\b\b");
	scanf(" %d %d",&a,&b);
	c = sum(a,b);
	printf("The sum of %d and %d is %d.\n",a,b,c);
}
