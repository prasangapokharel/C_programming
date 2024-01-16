#include <stdio.h>
int main()
{
    // 3x3 matrix need 3loop;

    int arr[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("Enter a value[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
