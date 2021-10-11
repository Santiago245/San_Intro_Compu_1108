#include <stdio.h>

int main()
{

	int Dato1;
	int Dato2;
	int Resultado;
	printf("\n-----------SUMA DE DATOS--------\n");
	printf_s("Ingresa un dato entero: ");
	scanf_s("%i", &Dato1);
	printf("ingresa un segundo dato: ");
	scanf_s("%i", &Dato2);
	Resultado = Dato1 + Dato2;
	printf("El resultado de la suma de %i mas %i es %i:", Dato1, Dato2, Resultado);
	return 0;
}
