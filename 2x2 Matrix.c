#include <stdio.h>

int main()
{
    // Declare a 2x2 matrix
    int arr[2][2];

    // Input values for the matrix elements
    for (int i = 0; i < 2; i++)  
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("Enter value in arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);    
        }
    }

    // Display the entered matrix
    printf("Entered Matrix:\n");
    for (int i = 0; i < 2; i++)  
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
