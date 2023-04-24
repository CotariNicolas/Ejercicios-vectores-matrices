#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   int x1, y1;
    printf("Ingrese el primer vector (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    int x2, y2;
    printf("Ingrese el segundo vector (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    int x3 = x1 - x2; 
    int y3 = y1 - y2;
    if (x3 < 0)
    {
        x3 = x3 * -1;
    } if (y3 < 0) {
        y3 = y3 * -1;
    }
    
    printf("La diferencia entre esos vectores son %d ; %d", x3, y3);
    return 0;
}
