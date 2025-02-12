# Exercício 1

Reescreva a função abaixo em linguagem C.
```
Func (A,n)
    para j <-- 2 até n faça
        ch <-- A[j]
        i <-- j - 1
        enquanto i >= 1 A[i] > ch faça
            A[i + 1] <-- A[i]
            i <-- i - 1
        A[i + 1] <-- ch
```
- Entrada esperada: Um inteiro n que será a dimensão do vetor, n inteiros que serão os valores inclusos no vetor.
- Saída esperada: Impressão do vetor A  após a execução da função Func.

- Atenção:Impressão de vetor deve ser feita separando os elementos por espaço simples

- Ex: vetor v = [10, 2, 3, 5] a impressão deve ser "10 2 3 5"

não imprima textos informativos ao usuário, pois estes atrapalhariam o avaliador automático. Apenas imprima as variáveis ou expressões aritméticas requeridas.

Para começar seu programa é necessário clica na aba "Editar" e digitar o nome de seu arquivo (obrigatoriamente utilizar extensão adequada à linguagem - em C precisa de extensão c)