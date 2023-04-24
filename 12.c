#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   int x1, y1;
    printf("Ingrese el primer vector (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    int x2, y2;
    printf("\nIngrese el segundo vector (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    int k = (x1 * y2) - (x2 * y1);
    if (k == 0)
    {
        printf("Son vectores dependientes");
    } else printf("NO Son vectores dependientes");
    
    return 0;
}