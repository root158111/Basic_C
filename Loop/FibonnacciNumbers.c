#include <stdio.h>

int main(){
	int i = 0, last1 = 1, last2 = 1,current;
	printf("%d %d\n",last1, last2);
	for(i=3;i<=20;i++){
		current = last1 + last2;
		printf("%d\n",current);
		last1 = last2;
		last2 = current;
	}
}
