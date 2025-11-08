/*Fixed point iteration*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x+x-2)
#define g(x) (2-x*x)
#define E 0.001
int main(){
	float x1, x0;
	printf("Enter guess value: ");
	scanf("%f",&x0);
	lbl:
	x1 = g(x0);
	if(fabs((x1-x0)/x1)<=E){
		printf("The root value is %f",x1);
		exit(1);
	}else{
		x0 = x1;
		goto lbl;
	}
	return 0;	
}
