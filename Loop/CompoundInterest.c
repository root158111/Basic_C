#include <stdio.h>

int main(){
	int i = 0;
	float m = 1000.0;
	for(i=0;i<12;i++){
		m = m * 1.03;
	}
	printf("%f",m);

}
