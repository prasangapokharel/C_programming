

#include<stdio.h>

int result(int n);

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("%d\n", result(n));

    return 0;
}

int result(int n) {
    if (n == 0 || n == 1) // Base case: 0! and 1! are both 1
        return 1;
    else
        return n * result(n - 1);
}
