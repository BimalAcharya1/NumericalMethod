#include <stdio.h>

int main() {
    float x0, y0, x1, y1, x, y;

    // Step 1: Input known data points
    printf("Enter x0 and y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    // Step 2: Input the x value where y is to be found
    printf("Enter the value of x where you want to find y: ");
    scanf("%f", &x);

    // Step 3: Apply linear interpolation formula
    y = y0 + ((y1 - y0) / (x1 - x0)) * (x - x0);

    // Step 4: Display the result
    printf("The interpolated value of y at x = %.2f is: %.2f\n", x, y);

    return 0;
}

