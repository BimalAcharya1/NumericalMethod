#include <stdio.h>

int main() {
    int n, i, j;
    float x[10], y[10], xp, yp = 0, p;

    // Step 1: Input number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    // Step 2: Input data points
    printf("Enter data points (x and y):\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    // Step 3: Input the value of x to find y
    printf("Enter the value of x for which y is to be found: ");
    scanf("%f", &xp);

    // Step 4: Apply Lagrange interpolation formula
    for (i = 0; i < n; i++) {
        p = 1;
        for (j = 0; j < n; j++) {
            if (j != i)
                p = p * (xp - x[j]) / (x[i] - x[j]);
        }
        yp = yp + p * y[i];
    }

    // Step 5: Display result
    printf("\nInterpolated value at x = %.2f is y = %.4f\n", xp, yp);

    return 0;
}

