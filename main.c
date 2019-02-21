#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact;
    scanf("%d", &fact);
    int total=fact;
    for (int i=fact-1; i>0; i--) {
        total=total * i;
    }
    printf("%d! = %d \n", fact, total);
    return 0;
}
