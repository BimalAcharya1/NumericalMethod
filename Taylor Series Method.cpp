#include <stdio.h>
#include <math.h>

int main() {
    float x0, y0, h, xn;
    float dy1, dy2, dy3, dy4;
    int n, i;

    printf("Enter initial x and y: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter step size h: ");
    scanf("%f", &h);

    printf("Enter value of x for which y is required: ");
    scanf("%f", &xn);

    n = (xn - x0) / h;

    for(i = 0; i < n; i++) {
        dy1 = x0 + y0;              // y'
        dy2 = 1 + dy1;              // y''
        dy3 = dy2;                  // y'''
        dy4 = dy3;                  // y''''

        y0 = y0 + h*dy1
                + (h*h/2)*dy2
                + (h*h*h/6)*dy3
                + (h*h*h*h/24)*dy4;

        x0 = x0 + h;
    }

    printf("\nValue of y at x = %.2f is %.5f\n", x0, y0);

    return 0;
}

