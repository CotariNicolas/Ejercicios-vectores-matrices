#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[10];
    printf("Ingrese 10 numeros: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }
    int mediana;
    if (10 % 2 == 0) {
      mediana = (nums[10/2] + nums[10/2-1]) / 2;
    } else mediana = (nums[10/2]);
    printf("\nLa media es: %d\n", mediana);
    printf("Los numeros superiores a la media son; ");
    for (int i = 0; i < 10; i++)
    {
      if (nums[i] > mediana)
      {
        printf("%d ", nums[i]);
      }
      
    }
    
    
    return 0;
}
