#include <stdio.h>


int main(){
	int i,j,k=0;
	for(i=0;i<=3;i++){
		for(j=0;j<i;j++){
			k+=(i+j);
#if defined (DEBUG)
			printf("i=%d j=%d k=%d\n",i,j,k);
#endif
		}
	}
	printf("k=%d\n",k);
}
