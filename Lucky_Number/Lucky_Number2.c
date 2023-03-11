#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

	int lucky;
	int x;
	int min;
	int max;
printf("Please input the minimal number: ");
scanf("%d",&min);
printf("Please input the maximal number: ");
scanf("%d",&max);


srand(time(NULL));
x = min + rand() % (max-min+1);
lucky = x;

printf("Your lucky number is %d!\n ",lucky);

}
