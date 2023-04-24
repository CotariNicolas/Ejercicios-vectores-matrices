#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[10];
    printf("Ingrese 10 numeros: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    int mayor_num = 0;
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] > mayor_num)
        {
            mayor_num = nums[i];
        }
        
    }
    

    printf("El mayor numeros es %d", mayor_num);
    return 0;
}
