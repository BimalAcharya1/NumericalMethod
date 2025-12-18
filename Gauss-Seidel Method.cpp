#include <stdio.h>
#include <math.h>

int main() {
    int i, j, n, max_iter;
    float a[10][10], b[10], x[10];
    float tolerance, error;

    printf("Enter number of unknowns: ");
    scanf("%d", &n);

    printf("Enter coefficients of equations:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter constant terms:\n");
    for(i = 1; i <= n; i++) {
        scanf("%f", &b[i]);
        x[i] = 0;   // Initial guess
    }

    printf("Enter tolerance: ");
    scanf("%f", &tolerance);

    printf("Enter maximum iterations: ");
    scanf("%d", &max_iter);

    /* Gauss-Seidel Iteration */
    for(int k = 1; k <= max_iter; k++) {
        error = 0;

        for(i = 1; i <= n; i++) {
            float sum = 0;
            for(j = 1; j <= n; j++) {
                if(i != j)
                    sum += a[i][j] * x[j];
            }

            float x_old = x[i];
            x[i] = (b[i] - sum) / a[i][i];

            if(fabs(x[i] - x_old) > error)
                error = fabs(x[i] - x_old);
        }

        if(error < tolerance)
            break;
    }

    /* Display Result */
    printf("\nSolution:\n");
    for(i = 1; i <= n; i++) {
        printf("x%d = %.4f\n", i, x[i]);
    }

    return 0;
}

