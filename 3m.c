#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matriz[9];
    printf("Ingrese los valores para una matriz 3x3\nAcontinuacion un ejemplo de como deberias ser\n(x1, y1, z1)\n(x2, y2, z2)\n(x3, y3, z3)");
    printf("\nIngrese los valores para (x1, y1, z1); ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &matriz[i]);
    }
     printf("\nIngrese los valores para (x2, y2, z2); ");
    for (int i = 3; i < 6; i++)
    {
        scanf("%d", &matriz[i]);
    }
     printf("\nIngrese los valores para (x3, y3, z3); ");
    for (int i = 6; i < 9; i++)
    {
        scanf("%d", &matriz[i]);
    } 
    int a1 = (matriz[4] * matriz[8]) - (matriz[5] * matriz[7]);
    int a2 = (matriz[3] * matriz[8]) - (matriz[5] * matriz[6]);
    int a3 = (matriz[3] * matriz[7]) - (matriz[4] * matriz[6]);
    int a4 = (matriz[1] * matriz[8]) - (matriz[2] * matriz[7]);
    int a5 = (matriz[0] * matriz[8]) - (matriz[2] * matriz[6]);
    int a6 = (matriz[0] * matriz[7]) - (matriz[1] * matriz[6]);
    int a7 = (matriz[1] * matriz[5]) - (matriz[2] * matriz[4]);
    int a8 = (matriz[0] * matriz[5]) - (matriz[2] * matriz[3]);
    int a9 = (matriz[0] * matriz[4]) - (matriz[1] * matriz[3]);
    printf("La matriz adjunta de su matriz ingresada seria esta\n(%d %d %d)\n(%d %d %d)\n(%d %d %d)", a1, a4, a7, a2, a5, a8, a3, a6, a9);
    return 0;
}
