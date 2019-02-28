#include<stdio.h>
#include<math.h>

//He tenido que usar el comando gcc -o "nombre del archivo compilado" "nombre del archivo" -lm para que no diera error la funcion Pow

float potencia(float base, float exponente);
float potencia(float base, float exponente){
	float resultado;
	resultado = pow(base,exponente);
	return(resultado);

}

int main(int argc, char const *argv[])
{
	float base,exponente, resultado;
	do{
		if (base>0&&exponente>0)
		{
			printf("Necesito que los numeros sean positivos\n\n");
		}
		printf("Dame una base positiva\n");
		scanf("%e",&base);
		printf("Dame un exponente positivo\n");
		scanf("%e",&exponente);

	}while(base<=0&&exponente<=0);

	resultado=potencia(base, exponente);
	printf("El resultado es: %.0f\n",resultado);


	return 0;
}