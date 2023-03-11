#include <stdio.h>

int main(){
	char *p;
	char *q;
	int i;

	p = "Hello";
	q=p;

	printf("%s\n",p);

	for(i=0;i<6;i++){
		printf("%c = %d at %p\n","Hello"[i],"Hello"[i], &"Hello"[i]);
	}
}
