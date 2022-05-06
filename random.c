//Aluno: André Junges Baratto
//Nº USP: 13731107

#include <stdio.h>      // Usaremos essa biblioteca para ler e escrever dados
#include <stdlib.h>     // As bibliotecas stdlib.h e time.h serão necessárias para ser possível gerar valores aleatórios  
#include <time.h>

#define TAM 10  // Aqui defino o tamanho do vetor como 10 elementos

void main(){    // Uso o void para não precisar colocar o return 0 ao final do código
    int menor=INT_MAX, seg=INT_MAX;  // Aqui defino as variáveis do menor dígito "menor" e segundo menor dígito "seg", e os defino inicialmente como um número máximo
    int vet[TAM];   //aqui defino o vetor de 10 elementos

    srand((unsigned) time(NULL));   //  Isso é necessário para que o comando rand()%20 funcione
        for(int i=0; i<TAM; i++){   // Aqui defino cada elemento do vetor como um número aleatório entre 0 e 20
            vet[i]=rand()%20;       
            printf("%d ", vet[i]);  
        }

        for(int i=0; i<TAM; i++){   // Aqui analiso cada elemento do vetor e, dependendo de seu valor, o defino como menor ou segundo menor número
            if(vet[i]<menor){   // Caso um elemento seja menor que o previamente definido como menor dígito, ele se torna o menor
                seg=menor;      // Com isso o menor se torna o segundo menor
                menor=vet[i];   // E o elemento analisado se torna o menor
            }
            else if(vet[i]<seg&&vet[i]!=menor){ // Caso o elemento analisado não seja o menor, mas seja menor que o segundo (desde que ele não seja igual ao menor): 
                seg=vet[i];     // Ele se torna o segundo menor
            }
        }

        if(seg==INT_MAX){   // Ao final da análise, caso o segundo menor não tenha sido definido ainda:
            printf("\nO menor numero eh: %d; nao ha segundo menor numero", menor);  // Significa que todos os elementos têm o mesmo valor
        }
        else{
            printf("\nO menor numero eh: %d; o segundo menor numero eh: %d", menor, seg);   // Caso contrário
        }
}


