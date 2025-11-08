#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x-x-2)
#define E 0.001
int main()
{
float x1,x2,x0,f0,f1,f2;
lbl:
printf("enter two initial guess values\n");
scanf("%f %f",&x1,&x2);
f1=f(x1);
f2=f(x2);
if(f1*f2>=0)
{
printf("incorrect guess value plz choose next one\n");
goto lbl;
}
else
{
lbl1:
x0=(x1+x2)/2;
f0=f(x0);
if(f0==0)
{
printf("The root is:%f",x0);
goto lbl2;
}
else if(f0*f1<0)
{
x2=x0;
}
else
{
x1=x0;
}
if(fabs((x2-x1)/x2)<=E)
{
printf("the root is:%f",x0);
}
else
{
	goto lbl1;
}
}
lbl2:
getch();
}
