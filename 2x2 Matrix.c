#include <stdio.h>

int main()
{
    // matrix 2x2 3x3
    int arr[2][2];

    for (int i = 0; i < 2; i++)  
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("Enter value in a[%d][%d] ", i,j);
            scanf("%d", &arr[i][j]);    
        }
    }

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