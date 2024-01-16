#include <stdio.h>

int main()
{
    // 3x3 matrix needs 3 loops;
    int arr[3][3];
    int arr1[3][3];
    int i, j; // Declare i and j outside of the loops

    // Input values for the first matrix (arr)
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter value in arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Input values for the second matrix (arr1)
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter value in arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the sum of corresponding elements of the two matrices
    printf("Sum of matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j] + arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
