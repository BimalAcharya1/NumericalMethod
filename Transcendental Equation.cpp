#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float x[20], y[20], Y[20];
    float sumx = 0, sumY = 0, sumx2 = 0, sumxY = 0;
    float a, b, A;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter the values of x and y:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] y[%d]: ", i, i);
        scanf("%f %f", &x[i], &y[i]);

        Y[i] = log(y[i]);   // ln(y)
        sumx += x[i];
        sumY += Y[i];
        sumx2 += x[i] * x[i];
        sumxY += x[i] * Y[i];
    }

    b = (n * sumxY - sumx * sumY) / (n * sumx2 - sumx * sumx);
    A = (sumY - b * sumx) / n;
    a = exp(A);

    printf("\nFitted Transcendental Equation is:\n");
    printf("y = %.3fe^(%.3fx)\n", a, b);

    return 0;
}

