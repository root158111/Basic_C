#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int x;
int lucky;

srand(time(NULL));
x=rand();
lucky = x % 10;
printf("Your Lucky number is %d!\n",lucky);
}

