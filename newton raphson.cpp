/*Newton raphson
x1=x0-f(x0)/f'(x0)

f(x)=x^2-3x+2
g(x0)=f'(x)=2x-3
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x-3*x+2)
#define g(x) (2*x-3)
#define E 0.001
int main()
{
float x0,x1,f0,g0;
printf("Enter inital guess\n");
scanf("%f",&x0);
lbl2:
f0=f(x0);
g0=g(x0);
x1=x0-(f0/g0);
//test for stopping criteria
if(fabs((x1-x0)/x1)<=E)
{
printf("The root is:%f",x1);
goto lbl1;
}
else
{
x0=x1;
goto lbl2;
}
lbl1:
getch();
}
