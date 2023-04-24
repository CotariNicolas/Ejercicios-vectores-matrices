#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   int x1, y1, z1;
    printf("Ingrese el primer vector (x1, y1, z1): ");
    scanf("%d %d %d", &x1, &y1, &z1);
    int x2, y2, z2;
    printf("Ingrese el segundo vector (x2, y2, z2): ");
    scanf("%d %d %d", &x2, &y2, &z2);
    int x3 = x1 * x2;
    int y3 = y1 * y2;
    int z3 = z1 * z2;
    int escalar = x3 + y3 + z3;
    printf("El producto escalar es %d", escalar);
    return 0;
}
