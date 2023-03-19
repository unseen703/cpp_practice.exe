#include <stdio.h>

int main()
{
    int i, n, j = 0;

    scanf(" %d ", &n);

    for (i = 2; i < (n/2); i++)
    {
        if ((n % i) == 0)
        {
            j++;
        }
    }

    if (j != 0)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is   prime", n);
    }

    return 0;
}