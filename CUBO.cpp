/* Implemente um sistema que utilizando uma função que leia um valor apresente para 
o usuário o valor do CUBO do valor digitado.
*/

#include <stdio.h>



void CUBO(float a){   
	
	
	float resultado;
	resultado = (a * a * a);
	printf("O valor do CUBO de %2.f eh %2.f",a ,resultado);
}


int main()

{   
    
   printf("Digite o valor que deseja descobrir o seu CUBO: \n"); 
   float valor;
   scanf("%f",&valor);
   CUBO(valor);
         
    return 0;
}


    
