#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mes;
    printf("Ingrese el mes que desea: ");
    scanf("%d", &mes);
    char *nom_mes[12] = {
        "Enero",
        "Febero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre"
    }; 
    int dias_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("\nEl numero ingresado pertenece a %s y tiene %d dias", nom_mes[mes-1], dias_mes[mes-1]);
    return 0;
}
