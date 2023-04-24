#include <stdio.h>

int main()
{
    int matriz[4];
     printf("Ingrese los numeros de una matriz 2x2\n");
    int n = 1;
    int m = 0;
    for (int i = 0; i < 2; i++)
    {   
        printf("(x%d,y%d);", n, n);
        scanf("%d %d\n", &matriz[m], matriz[m+1]);
        m = 2;
        n++;
    }

    printf("La matriz ingresada es la siguiente:\n");
    printf("%d \t %d\n", matriz[0], matriz[1]); 
    printf("%d \t %d", matriz[2], matriz[3]);
    printf("\nLa matriz  transpuesta es;\n");
    printf("%d \t %d\n", matriz[0], matriz[2]); 
    printf("%d \t %d", matriz[1], matriz[3]);
    
    
    return 0;
}
