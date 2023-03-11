#include <stdio.h>

int sum(int x,int y){
	return x+y;
}

int main(){
	int i = 2,j = 4, k = 6;
	i = sum(10,30);
	printf("10 + 30 = %d\n",i);
	printf("5 + 6 = %d\n",sum(5,6));
	printf("5 + j = %d\n",sum(5,j));
	printf("5 + j + k = %d\n",5+sum(j,k));
	printf("5 + j + k = %d\n",sum(5,(j+k)));
	printf("5 + j + k = %d\n",sum(5,sum(j,k)));
}
