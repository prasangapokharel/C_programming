#include <stdio.h>

int main()
{
    // Declare and initialize variables
    int a = 2; // Number of rows
    int b = 3; // Number of columns

    // Declare a 2x3 matrix with the specified dimensions
    int arr[a][b];

    // Input values for the matrix
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter value in arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the matrix
    printf("Entered matrix is:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
