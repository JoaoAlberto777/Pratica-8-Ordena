#include <stdio.h>
#include <locale.h>


	void selection_sort(int Num[], int tam){
		int Maior, aux;
		for(int i = 0; i < tam; i++){
			Maior = i;
			for (int j = (i+1); j < tam; j++){
				if(Num[j] > Num[Maior]){
					Maior = j;
				}
			}
			if (i != Maior){
				aux = Num[i];
				Num[i] = Num[Maior];
				Num[Maior] = aux;
			}
		}
	}
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int tam = 10;
		int ID[tam];
		
		
		for(int i = 0; i < tam; i++){
			printf("Digite idade: ");
			scanf("%d", &ID[i]);
		}
		
		selection_sort(ID, tam);
		
		printf("\nIdades Em Ordem Decrescente: \n");
		for(int i = 0; i < tam; i++){
			printf("%d anos\n", ID[i]);
		}
	
		return 0;
}
