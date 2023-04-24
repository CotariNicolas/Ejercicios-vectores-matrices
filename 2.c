#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[5];
    printf("Ingrese 5 numeros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Los numeros ingresados en orden opuesto son: ");
    for (int e = 4; e >= 0; e--)
    {
        printf("%d ", nums[e]);
    }
    
        
    return 0;
}
