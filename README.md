# Fun-oCubo
Cálculo do cubo de um valor.
Utilizar o sistema operacional Windows 7 ou superior;
Instalar o Dev C++;

Ao iniciar o Código será definido uma função chamada CUBO, onde nela será definido os parâmetros para a realização do cálculo do valor que o usuário
desejar saber o seu cubo;

      void CUBO(float a){   
	
	
	float resultado;
	 resultado = (a * a * a);
	
          }

Após realizar a parametrização o usuário precisará entrar com o valor desejado:

      printf("Digite o valor que deseja descobrir o seu CUBO: \n"); 
       float valor;
      	scanf("%f",&valor);
  
Finalizando por assim o scrip, printado na tela do cmd o resultado da função do "CUBO" do valor digitado pelo usuário:

         printf("O valor do CUBO de %2.f eh %2.f",a ,resultado);
