#include <stdio.h>

int main()
{
    int n, rem, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    while(n > 0)
    {    
        rem = n % 10;
        sum = sum + rem*rem;
        n = n/10;
    }
    printf("\nSum of Square of Digits = %d", sum);
    return 0;
}