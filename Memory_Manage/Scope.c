#include <Stdio.h>

int g;
void foo(int a, int b){
	int x=1 , y=2 ,z;
	z = a+b;
	printf("x=%d y=%d z=%d g=%d \n",x,y,z,g);
}

int  main(){
	int x=3, y=5;
	g=x+y;
	printf("x=%d y=%d g=%d\n",x,y,g);

	{
		int z;
		z=x+y;
		printf("x=%d y=%d z=%d g=%d \n",x,y,z,g);

	}
	foo(6, 9);

}
