#include <stdio.h>
#include <string.h>

#define MAX(x,y) ((x)>(y)?(x):(y))


int main(){

	printf("%d\n",MAX(8,6));
#undef MAX
	printf("%d\n",MAX(3,5));
}
