#include <stdio.h>
#include <stdlib.h>
 
// Aqui ser?o codificadas as fun?oes para verificar saldo, deposito e saque
void ConsultaSaldo(float saldo){
	printf("O saldo de sua conta conrrente e R$ %.2f.\n\n",saldo);
	
}

float depositar(float sald_atual){
float valorDep,novoSaldo;
printf("informe o valor que deseja depositar \n");
scanf("%f",&valorDep);
if (valorDep>0){
	printf("Deposito realizado com sucesso!\n\n");
    novoSaldo = sald_atual + valorDep;
}else{
	printf("Valor invalido para deposito!\n\n");
	novoSaldo=sald_atual;
}
return novoSaldo;
}


float sacar(float sald_atual){
float valorSaque,novoSaldo;

printf("informe o valor que deseja sacar \n");
scanf("%f",&valorSaque);
novoSaldo = sald_atual - valorSaque;
if (novoSaldo>=0){
	printf("Saque realizado com sucesso!\n\n");

}else{
	printf("Saldo insuficiente para o valor de saque!\n");
	printf("Verifique o saldo disponivel\n\n");
	novoSaldo=sald_atual;

}
return novoSaldo;

}
// Fun??o principal com o Menu de op??es
int main(void) {
	
	int op, op2;
	float saldo;
	saldo = 00;
	op2=1;
	while(op2==1){
	printf("Informe o numero da opcao desejada:\n");
	printf("1-Saldo da conta corrente: \n");
	printf("2-Deposito: \n");
	printf("3-Saque: \n");
	printf("0-para sair\n");
    scanf("%d",&op);
	
  switch(op)
{
    case 1:
            ConsultaSaldo(saldo);
            
            break;
    
    case 2:
           saldo=depositar(saldo);
            
            break;
    
    case 3:
            saldo=sacar(saldo);
            break;
    
    default:
    	if (op!=0){
    		printf("Opcao invalida \n\n");
		}
            
            }
  if(op==0){
    op2=0;
    printf("Obrigado por utilizar nossos servicos!!");
  }
  
}
  }
 
