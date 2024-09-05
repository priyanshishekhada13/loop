#include <stdio.h>

void main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int i = 0; 

    do {
        printf("%d ", i);
        i += 2; 
    } while (i<=n);

}
