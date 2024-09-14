#include <stdio.h>

int fibonacci(int n){
	int anterior = 0, atual = 1, proximo = 0;
	
	while (atual <= n) {
        if (atual == n) {
            return 1;  
        }
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    return 0; 
}

void main(){
	int n;
	
	printf("Informe o numero que deseja verificar na sequencia de fibonacci: \n");
	scanf("%d",&n);
	
	int pertence = fibonacci(n);
	if(pertence){
		printf("O numero %d pertence a sequencia de fibonacci",n);
	}else{
		printf("O numero %d nao pertence a sequencia de fibonacci",n);
	}
}
