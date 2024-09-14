#include <stdio.h>

void main(){
	int indice = 12;
	int soma = 0, k = 1;
	
	for (k; k < indice; k++){
		soma = soma + k;
	}
	printf("%d", soma);
}
