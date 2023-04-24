#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nums[4];
    printf("Ingrese 4 numeros\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &nums[i]);
    }
    int mediana;
    if (4 % 2 == 0) {
      mediana = (nums[4/2] + nums[4/2-1]) / 2;
    } else mediana = (nums[4/2]);
    printf("\nLa media es: %d", mediana);
    printf("\nLos numeros ingresados son: "); 

    for (int i = 0; i < 4; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
