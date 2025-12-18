#include <stdio.h>

// Differential equation dy/dx = f(x, y)
float f(float x, float y) {
    return x + y;
}

int main() {
    float x0, y0, h, xn;
    float yp, y1;
    int i, n;

    printf("Enter initial value of x and y: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter step size h: ");
    scanf("%f", &h);

    printf("Enter final value of x: ");
    scanf("%f", &xn);

    n = (xn - x0) / h;

    printf("\nStep\t x\t y\n");
    for (i = 0; i < n; i++) {
        yp = y0 + h * f(x0, y0);                 // Predictor
        y1 = y0 + (h / 2) * (f(x0, y0) + f(x0 + h, yp)); // Corrector

        x0 = x0 + h;
        y0 = y1;

        printf("%d\t %.2f\t %.5f\n", i + 1, x0, y0);
    }

    printf("\nApproximate value of y at x = %.2f is %.5f\n", x0, y0);

    return 0;
}

