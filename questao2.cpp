#include <stdio.h>
int main (){
	
	int ll, cc;
	
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d", &ll);
	
	printf("Digite o numero de colunas da matriz: ");
	scanf("%d", &cc);
	
	int l, c, op, matEnd[ll][cc];
	
	printf("\n");
	
	for (l=0;l<ll;l++){
		for(c=0;c<cc;c++){
			printf("Digite o valor da posicao [%d][%d]:", l, c);
			scanf("%d", &matEnd[l][c]); } }
			
	if (ll==cc) {
		
		printf("\nA matriz matEnd eh quadrada \n"); }
		
			else {
				printf("\nA matriz matEnd nao eh quadrada\n"); }
			
	printf("\n");
		
	printf("Impressao da matriz matEnd: \n\n");
			
	for (l=0;l<ll;l++){
		
		for(c=0;c<cc;c++){
			
			printf("%d  ", matEnd[l][c]); }
			printf("\n"); } 
	
	return 0; }
