#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <cmath>
float resta(float a, float b){ 
	return a-b;
}
float div(float x, float y){
	return x/y;
}
float exponente(float base, float expo){
	float resultado = 1;
	float deno = 1;
	
	if(expo > 0){
		for (int k=0; k < expo; k++){
			resultado *= base;
		}
	}else{
		float absol = abs(expo);
		for (int l =0; l < absol; l++){
			deno *= base;
		}
		resultado = 1 /deno;
	}
	return resultado;
}
main(){
	float suma = 0;
	float multi=1;
	float a,b;
	float division = 0;
	float numero = 0;
	float x,y;
	float raiz;
	float base,expo;
	int opcion;
	int cantidad;
	

	printf("Calculadora\n");
	try{
		do{
			printf("\nOpciones  1. Sumar 2. Restar 3. Division  4. Multiplicacion 5. Exponente  6. Raiz cuadrada  7. Salir");
			scanf("%d",&opcion);
			switch(opcion){
				case 1:			
					printf("\nSumar");
					printf("\n¿Cuantos numeros?");
					scanf("%i",&cantidad);
					for (int i =0;  i < cantidad; i++){
						printf("\nDigite numero: ");
						scanf("%f",&numero);
						suma += numero;
					}
					printf("%f",suma);
					suma = 0;	
				break;
				case 2:			
					printf("\nRestar");
					printf("\nPrimer numero");
					scanf("%f",&a);	
					
					printf("\nSegundo numero");
					scanf("%f",&b);
					printf("%f",resta(a,b));	
				break;
				case 3:			
					printf("\nDivision");
					printf("\nNumerador: ");
					scanf("%f",&x);	
					
					printf("\nDenominador: ");
					scanf("%f",&y);
					if(y !=0){
						printf("%f",div(x,y));
					}else{
						printf("Tiende a infinito");
					}
						
				break;
				case 4:			
					printf("Multiplicacion");
					printf("\n¿Cuantos numeros?");
					scanf("%i",&cantidad);
					for (int j =0;  j < cantidad; j++){
						printf("\nDigite numero: ");
						scanf("%f",&numero);
						multi *= numero;
					}
					printf("%f",multi);	
					multi = 1;
				break;
				case 5:			
					printf("\nExponente");
					printf("\nNumero base:");
					scanf("%f",&base);	
					
					printf("\nExponente: ");
					scanf("%f",&expo);
					
					printf("%f",exponente(base,expo));	
				break;
				case 6:			
					printf("Raiz cuadrada");
					printf("\nNumero: ");
					scanf("%f",&numero);
					raiz = sqrt(numero);
					printf("%f",raiz);
				break;
				case 7:			
					printf("Hasta la proxima :D");				
				break;
					
				default:
						throw(0);
				}
		}while(opcion !=7);
	}catch(int e){
		printf("Error!");
	}
}
