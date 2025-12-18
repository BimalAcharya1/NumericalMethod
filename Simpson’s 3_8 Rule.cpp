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

    printf("Enter number of sub-intervals n (multiple of 3): ");
    scanf("%d", &n);

    if (n % 3 != 0) {
        printf("Number of sub-intervals must be a multiple of 3.\n");
        return 0;
    }

    h = (b - a) / n;

    sum = f(a) + f(b);

    for (i = 1; i < n; i++) {
        if (i % 3 == 0)
            sum += 2 * f(a + i * h);
        else
            sum += 3 * f(a + i * h);
    }

    integral = (3 * h / 8) * sum;

    printf("\nValue of integral using Simpson's 3/8 Rule = %.4f\n", integral);

    return 0;
}
