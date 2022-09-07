#include <stdio.h>

int main(void)
{
    int digit, i, ans;
    // To print the multiplication table of a number entered by the user.
    printf("Enter any number: ");
    scanf("%d", &digit);

    // This runs the iteration of the digit
    for (i = 1; i <= 12; i++)
    {
        ans = digit * i;
        printf("%d\n", ans);
    }
    return (0);
}

