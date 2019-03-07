#include <stdio.h>
#include <stdlib.h>

int factorial(int f) {
    if (f == 1) {
        return 1;
    }
    return (f * factorial((f-1)));
}

int main()
{
    // a comment
    // Add another comment
    int fact=5;
    printf("%d! = %d \n", fact, factorial(fact));
    return 0;
}
