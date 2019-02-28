#include<stdio.h>

void salida(float menor, float mayor);
void salida(float menor, float mayor){


	printf("Los numero pares desde el %.0f hasta el %.0f son: ",mayor,menor );
	for (int i = mayor; i >= menor ; i=i-2)
	{
		printf("%.0d, ",i );
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int mayor,menor,comprobador_par;

	do{

	printf("Introduce dos numeros, si el primero es menor que el segundo mostrare los numeros pares entre esos valores de mayor a menor\n");
	printf("Introduce el primer numero (el menor)\n");
	scanf("%d",&menor);
	printf("\nIntroduce el segundo numero (el mayor)\n");
	scanf("%d",&mayor);

	if (menor<mayor)
	{
		comprobador_par=mayor%2;

		switch(comprobador_par){

			case 0:
				salida(menor, mayor);
			break;

			default:
				mayor--;
				salida(menor, mayor);
			break;

		}
	}

	else{
		printf("Por favor, lee antentamente otra vez que datos tiene que introducir\n");
	}


	}while(menor>mayor);


	return 0;
}