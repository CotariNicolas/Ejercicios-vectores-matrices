#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[3][3];
    int n = 1;
    printf("Ingrese los valores de la matriz;\n");
    for (int i = 0; i < 3; i++)
    {
        printf("(x%d, y%d, z%d): ", n, n+1, n+2);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i*3+j]);
        }
        n += 3;
    } 
    int i = matriz[0][0] * ((matriz[1][1] * matriz[2][2]) - (matriz[2][1] * matriz[1][2]));
    int j = (matriz[0][1] * -1) * ((matriz[1][0] * matriz[2][2]) - (matriz[2][0] * matriz[1][2]));
    int k = matriz[0][2] * ((matriz[1][0] * matriz[2][1]) - (matriz[0][2] * matriz[1][1]));
    int determinante = i + j + k;
    printf("La determianate es %d", determinante);
    
    
    return 0;
}
