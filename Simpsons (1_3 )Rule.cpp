#include <stdio.h>
#include <math.h>

// Define the function
float f(float x)
{
    return x * x;   // Example function f(x) = x^2
}

int main()
{
    int i, n;
    float a, b, h, sum = 0, integral;

    printf("Enter lower limit a: ");
    scanf("%f", &a);

    printf("Enter upper limit b: ");
    scanf("%f", &b);

    printf("Enter number of sub-intervals n (even): ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Number of sub-intervals must be even.\n");
        return 0;
    }

    h = (b - a) / n;

    sum = f(a) + f(b);

    for (i = 1; i < n; i++) {
        if (i % 2 == 0)
            sum += 2 * f(a + i * h);
        else
            sum += 4 * f(a + i * h);
    }

    integral = (h / 3) * sum;

    printf("\nValue of integral using Simpson's 1/3 Rule = %.4f\n", integral);

    return 0;
}

