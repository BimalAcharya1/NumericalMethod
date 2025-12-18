#include <stdio.h>

int main() {
    int i, j, k, n;
    float a[10][10], ratio;

    printf("Enter number of unknowns: ");
    scanf("%d", &n);

    printf("Enter augmented matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n + 1; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    /* Gauss-Jordan Elimination */
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i != j) {
                ratio = a[j][i] / a[i][i];
                for(k = 1; k <= n + 1; k++) {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }

    /* Display Solution */
    printf("\nSolution:\n");
    for(i = 1; i <= n; i++) {
        printf("x%d = %.3f\n", i, a[i][n + 1] / a[i][i]);
    }

    return 0;
}

