#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	void selection_sort(int Num[], int tam){
		int min, aux;
		for(int i = 0; i < tam; i++){
			min = i;
			for (int j = (i+1); j < tam; j++){
				if(Num[j] < Num[min]){
					min = j;
				}
			}
			if (i != min){
				aux = Num[i];
				Num[i] = Num[min];
				Num[min] = aux;
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
		
		printf("\nIdades Em Ordem Crescente: \n");
		for(int i = 0; i < tam; i++){
			printf("%d anos\n", ID[i]);
		}
	
		
		return 0;
		
}
