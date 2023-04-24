#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   int x1, y1, z1;
    printf("Ingrese el primer vector (x1, y1, z1): ");
    scanf("%d %d %d", &x1, &y1, &z1);
    int x2, y2, z2;
    printf("\nIngrese el segundo vector (x2, y2, z2): ");
    scanf("%d %d %d", &x2, &y2, &z2);
    int i= (y1 * z2) - (z1 * y2);
    int j = ((x1 * z2) - (z1 * x2))* -1;
    int k = (x1 * y2) - (y1 * x2);
    printf("El producto vectorial de los vectres es %d i ; %d j ; %d k", i, j, k);
    return 0;
}