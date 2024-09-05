#include <stdio.h>

void main() 
{
    int n , f=1 ;


    printf("Enter a n: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
	{
        f = f * n; 
        n--;
    }

    printf("factorial is %d \n", f);

}

