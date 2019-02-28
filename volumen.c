#include <stdio.h>
#include <math.h>
#define pi 3.141592

float volumen_cono(float altura, float radio);
float volumen_ortoedro(float lado1, float lado2, float altura);


int main(int argc, char const *argv[])
{

	int selector;
	float resultado,l1,l2,a,r;
	do{

		printf("¿De qué figura quieres calcular el volumen? \n  [1]Cono\n  [2]Otroedro\n  [3]Salir\n\n");
		scanf("%d",&selector);

		switch(selector){

			case 1:
				printf("Introduce el radio de la base del cono\n");
				scanf("%e",&a);
				printf("Introduce la altura del cono\n");
				scanf("%e",&r);
				resultado=volumen_cono(a,r);
				printf("%f\n",resultado);
			break;

			case 2:
				printf("Introduce el largo de un lado\n");
				scanf("%e",&l1);
				printf("Introduce el largo del otro lado\n");
				scanf("%e",&l2);
				printf("Introduce la altura\n");
				scanf("%e",&a);
				printf("1\n");
				resultado=volumen_ortoedro(l1,l2,a);
				printf("2\n");
				printf("El resultado es: %f\n",resultado);
			break;

			case 3:
				printf("Saliendo....\n");
			break;

			default:
				printf("Porfavor, seleccione una de las opciones dadas\n\n");
		}


	}while(selector!=3);

	return 0;
}

float volumen_cono(float altura, float radio){

	float resultado = pow(pi,2)*radio*altura/3;
	
	return (resultado);

}

float volumen_ortoedro(float lado1, float lado2, float altura){

	float resultado = (lado1*lado2*altura);

	return (resultado);
}