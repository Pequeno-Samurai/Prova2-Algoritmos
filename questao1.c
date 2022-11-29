#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int N, op;
	printf("Digite o tamanho do vetor A: ");
	scanf("%d", &N);
	
	int A[N];
	
	for (int i=0;i<N;i++){
		printf("Digite o valor da posição %d: ", i);
		scanf("%d", &A[i]);
	}
	printf("1.Imprime o vetor A na tela\n2.Imprime o vetor A na ordem inversa\nDigite sua escolha: ");
	scanf("%d", &op);
	
	switch (op){
		case 1:
			for(int i =0;i<N;i++){
				printf("Vetor A posição %d = %d\n", i, A[i]);
			}
			break;
	
	case 2:
			for(int i=N-1;i>=0;i--){
				printf("Vetor A posição %d = %d\n", i, A[i]);
			}
			break;
	}
	return 0;
}
