#include <stdio.h>
//coment  de prueba 
int main()
{
    float base;
    float altura;
    float area;
    printf("Areas \n ==================\n");
    //Lectura de datos
    printf("Base: ");
    scanf_s("%f",&base);

    printf("Altura");
    scanf_s("%f", &altura);
    //Calculo Area
    area = base * altura;
    printf("El area de %10f por %10f es :%10f ",base,altura,area);

}
