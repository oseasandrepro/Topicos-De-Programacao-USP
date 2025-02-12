# Fundamentos de estruturas de dados
## Listas lineares (arrays):
Implemente Os Algoritimos vistos em sala e suas variantes,para fazer as seguintes operações em listas lineares:
1) Como inserir elementos de forma ordenada?*
2) Como remover elementos e ainda assim manter a ordem?
3) Como trocar elementos de posição?

*Obs:O tamanho da lista é fixo

1) Inserção de elementos de forma ordenada:
- Se a ordem deve ser mantida e o tamanho da lista é fixa, como fazer para inserir um novo elemento?
- Ao se inserir um novo elemento, como garantir a ordenação geral?
    - Algoritmo:
        1. Achar a posição correta de inserção
        2. “Abrir espaço”
        3. Inserir o elemento desejado
    - Implementação:
        - ````
            #include <stdio.h>
            #include <stdlib.h>

            int acharPosicaoDeInsercao(int chave, int array[], int n);
            void abriEspaco(int indiceDireita, int array[], int n);
            void inserir(int chave,  int indice, int array[], int n);
            void printArray(int array[], int n){
                for(int i=0;i<n; i++){
                    i<(n-1)?printf("%d ", array[i]):printf("%d", array[i]);
                }
                printf("\n");
            }

            int main()
            {
                int vetor[] = {12, 24, 36, 48, 60, 72};
                int chave = 55;
                
                printArray(vetor, 6);
                
                int posicao = acharPosicaoDeInsercao(chave, vetor, 6);
                abriEspaco(posicao, vetor, 6);
                inserir(chave, posicao,vetor, 6);

                printArray(vetor, 6);
                
                return 0;
            }

            int acharPosicaoDeInsercao(int chave, int array[], int n)
            {
                int posicao = 0;
                int achou = 0;
                while( !achou && posicao < n )
                {
                    if( array[posicao] >= chave)
                        achou = 1;
                    else
                        posicao = posicao + 1;
                }
                
                return posicao;
            }

            void abriEspaco(int indiceDireita, int array[], int n)
            {
                int indice = n-1;
                while( indice > indiceDireita)
                {
                    array[indice] = array[indice-1];
                    indice = indice - 1;
                }
            }

            void inserir(int chave, int indice, int array[], int n)
            {
                if( indice>=0 && indice<n)
                    array[indice] = chave;
            }
           ````
    - Implementação(Variação, procurar posicao movendo para a esquerda e inserir). "Mais eficiente".:
        - ````
            #include <stdio.h>
            #include <stdlib.h>

            void inserirManterOrdenacao(int chave, int array[], int n){

                int indiceInsercao = n-1;
                while(indiceInsercao>=0 && array[indiceInsercao]>=chave)
                {
                    array[indiceInsercao] = array[indiceInsercao-1];
                    indiceInsercao -= 1;
                }
                
                if( indiceInsercao < n-1 )
                    array[indiceInsercao+1] = chave;
            }
            void printArray(int array[], int n){
                for(int i=0;i<n; i++){
                    i<(n-1)?printf("%d ", array[i]):printf("%d", array[i]);
                }
                printf("\n");
            }

            int main()
            {
                int vetor[] = {12, 24, 36, 48, 60, 72};
                int chave = 55;
                
                printArray(vetor, 6);
                
                inserirManterOrdenacao(chave, vetor, 6);
                
                printArray(vetor, 6);
                
                return 0;
            }
          ````

