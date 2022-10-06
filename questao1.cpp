#include <stdio.h>

int main (){
	
	int n, op;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	int i, x, vetor[n];
	
	for (i=0;i<n;i++){ 
		printf("Digite o valor da posicao %d: ",i); 
		scanf("%d", &vetor[i]); } 
		
	printf("\n1.Imprime o vetor A na tela:\n2.Imprime o vetor A na ordem inversa:\n\nDigite sua escolha: ");
	scanf("%d", &op);
	
	if (op==1){
		for (i=0;i<n;i++){
			printf("Vetor %d: %d\n", i, vetor[i]); } }
			
	if (op==2){
		for(i=0;i<n;i++) {
			printf("Vetor %d: %d\n", i, vetor[i]); } }
	return 0; }
