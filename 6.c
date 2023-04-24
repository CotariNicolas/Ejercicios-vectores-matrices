#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[10];
    printf("Ingrese 10 numeros: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("El orden opuesto al que ingreso los numeros son: ");
    for (int n = 9; n >= 0; n--)
    {
        printf("%d ", nums[n]);
    }
    
    
    return 0;
}
