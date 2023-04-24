#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mes;
    printf("Ingrese el mes que desea: ");
    scanf("%d", &mes);
    int dia;
    printf("\nIngrese el dia que desea: ");
    scanf("%d", &dia);
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
    int dias_totales = 0;
    int i = 0;
    
    int dias_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        while ( i < mes-1)
    {
        dias_totales+= dias_mes[i];
        i++;
    } dias_totales += dia;
    printf("\nEl numero ingresado pertenece a %s y el dia %d que usted ingreso,  es el dia %d del calendario", nom_mes[mes-1], dia, dias_totales);
    return 0;
}
