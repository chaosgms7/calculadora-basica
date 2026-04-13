#include<stdio.h>
int main(){

	float numero1, numero2, resultado;
	char operacao;
	
	printf("Digite o numero que voce quer operar: ");
	scanf("%f",&numero1);
	printf("Escolha a operacao entre +, -, *, /: ");
	scanf(" %c",&operacao);
	printf("Digite outro numero: ");
	scanf("%f",&numero2);
	
	if (operacao == '+'){
		resultado = numero1 + numero2;
}	else if (operacao == '-'){
		resultado = numero1 - numero2;
}	else if (operacao == '*'){
		resultado = numero1 * numero2;
}	else if (operacao == '/'){
		resultado = numero1 / numero2;
		
}		
	printf("O resultado da operacao eh %.2f",resultado);

	return 0;
}
