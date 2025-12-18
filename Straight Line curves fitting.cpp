#include <stdio.h>

int main()
{
    int i, n;
    float x[20], y[20];
    float sumx = 0, sumy = 0, sumx2 = 0, sumxy = 0;
    float a, b;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter the values of x and y:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] y[%d]: ", i, i);
        scanf("%f %f", &x[i], &y[i]);

        sumx += x[i];
        sumy += y[i];
        sumx2 += x[i] * x[i];
        sumxy += x[i] * y[i];
    }

    b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    a = (sumy - b * sumx) / n;

    printf("\nEquation of straight line is: y = %.2f + %.2fx\n", a, b);

    return 0;
}

