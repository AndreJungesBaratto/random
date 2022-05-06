//Aluno: André Junges Baratto
//Nº USP: 13731107

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void main(){
    int menor=INT_MAX, seg=20;
    int vet[TAM];

    srand((unsigned) time(NULL));
        for(int i=0; i<TAM; i++){
            vet[i]=rand()%20;
            printf("%d ", vet[i]);
        }

        for(int i=0; i<TAM; i++){
            if(vet[i]<menor){
                seg=menor;
                menor=vet[i];
            }
            else if(vet[i]<seg&&vet[i]!=menor){
                seg=vet[i];
            }
        }

        if(seg==INT_MAX){
            printf("\nO menor numero eh: %d; nao ha segundo menor numero", menor);
        }
        else{
            printf("\nO menor numero eh: %d; o segundo menor numero eh: %d", menor, seg);
        }
}


