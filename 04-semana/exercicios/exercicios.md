# Exercícios - 04-Semana

### Exercício 1 - Imprimir em ordem invertida os n primeiro naturais

Fazer um programa principal e uma **função recursiva (ou recorrente)** de nome naturais com um único parâmetro n. A função naturais(n) implementa um algoritmo recursivo que imprime os n primeiros naturais em ordem invertida. O programa principal solicita do usuário que digite o natural n e passa-o para naturais(n).

Exemplo: Se usuário digitar 5, devem ser impressos:
5
4
3
2
1
0

**Entrada esperada:** um inteiro n.
**Saida esperada:** impressão de todos os naturais começando em n e terminando em 0 separados por uma quebra de linha.


**Atenção:** É obrigatório que a função naturais(n) seja implementada recursivamente, portanto ela não pode conter nem um comando de repetição (não pode conter while ou for). Essa função pode ser implementadas com apenas três linhas (uma para impressão). **Se não a implementar recursivamente, sua nota será posteriormente anulada**.

---

### Exercício 2 - Imprimir a soma dos n primeiros naturais

Fazer um programa principal e uma função recursiva (ou recorrente) de nome progressao_naturais com um único parâmetro n.
A função progressao_naturais(n) implementa um algoritmo recursivo que computa a soma dos n primeiros naturais.
O programa principal solicita do usuário que digite o natural n e, usando progressao_naturais(n), imprima a soma dos n primeiros naturais.

Exemplo: Se usuário digitar 5, deve ser impresso: 15. Se usuário digitar 6, deve ser impresso: 21.

Note que se o objetivo fosse imprimir as n primeiras somas, para ser eficiente a impressão deveria estar dentro da função progressao_naturais. Por que?

**Atenção:** É obrigatório que o progressao_naturais(n) seja implementada recursivamente, portanto ela não pode conter nem um comando de repetição (não pode conter while ou for). Essa função pode ser implementadas com apenas duas linhas. Se não implementar recursivamente, sua nota será posteriormente anulada.

---

### Exercício 3 - Imprimir a soma dos n primeiros naturais pares
Fazer um programa principal e uma função recursiva (ou recorrente) de nome soma_pares com um único parâmetro n.
A função soma_pares(n) implementa um algoritmo recursivo que computa a soma dos n+1 primeiros naturais pares. O programa principal solicita do usuário que digite o natural n e, usando soma_pares(n), imprima n e a soma dos n+1 primeiros naturais pares.

Exemplo: Se usuário digitar 0, deve ser impresso: 0 0.

Se usuário digitar 1, deve ser impresso: 1 2.

Se usuário digitar 2, deve ser impresso: 2 6.

Se usuário digitar 3, deve ser impresso: 3 12.

Se usuário digitar 4, deve ser impresso: 4 20.

Dica: É possível implementar a função soma_pares(n) em duas linhas

**Atenção:** É obrigatório que o soma_pares(n) seja implementada recursivamente.

**Se não implementar recursivamente, sua nota será posteriormente anulada.**

---

### Exercício 4 - Imprimir todas as somas dos n primeiros naturais pares
Fazer um programa principal e uma função recursiva (ou recorrente) de nome soma_imprime_pares com um único parâmetro n.
A função soma_imprime_pares(n) implementa um algoritmo recursivo que computa a soma dos n+1 primeiros naturais pares.

O programa principal solicita do usuário que digite o natural n e, usando soma_imprime_pares(n), imprima i e a soma dos i+1 primeiros naturais pares, para i variando de 0 até n.

Exemplo: Se usuário digitar 0, deve ser impresso: 0 0. Se usuário digitar 5, deve ser impresso:
- 0 0
- 1 2
- 2 6
- 3 12
- 4 20
- 5 30

**Atenção:** É obrigatório que o soma_imprime_pares(n) seja implementada recursivamente, portanto ela não pode contem nem um comando de repetição (não pode conter while ou for). Essa função pode ser implementadas com apenas seis linhas (em Python a função tem apenas 6 linhas e em C tem 6 linhas mais as linhas de declarações e chaves). Se não implementar recursivamente, sua nota será posteriormente anulada.

---

### Exercício 5 - Imprimir todas as somas dos n primeiros naturais ímpares
Fazer um programa principal e uma função recursiva (ou recorrente) de nome soma_imprime_impares com um único parâmetro n.

A função soma_imprime_impares(n) implementa um algoritmo recursivo que, para i entre 0 e n, computa e imprime i e a soma dos i+1 primeiros naturais ímpares.

O programa principal solicita do usuário que digite o natural n e, usando soma_imprime_impares(n), imprima i e a soma dos i+1 primeiros naturais ímpares, para i variando de 0 até n.

Exemplo: Se usuário digitar 0, deve ser impresso: 0 1. Se usuário digitar 5, deve ser impresso:
- 0 1
- 1 4
- 2 9
- 3 16
- 4 25
- 5 36

**Atenção**: É obrigatório que o soma_imprime_impares(n) seja implementada recursivamente, portanto ela não pode contem nem um comando de repetição (não pode conter while ou for). Essa função pode ser implementadas com apenas seis linhas (em Python a função tem apenas 6 linhas e em C tem 6 linhas mais as linhas de declarações e chaves).

**Se não implementar recursivamente, sua nota será posteriormente anulada.**

---

### Exercício 6 - Verificar se dois números são primos entre si utilizando o algoritmo de MDC de Euclides
Fazer um programa que solicita que o usuário digite dois valores naturais p e q e verifica se eles são primos entre si, ou seja, se o único divisor comum entre ambos é 1. Implementar uma função de nome mdc.

Para isso deve-se computar o maior divisor comum entre p e q, mas isso deve ser feito utilizando um dos algoritmos mais antigos da história da humanidade, o algoritmo de Euclides.

O algoritmo de Euclides computa o MDC através do seguinte lema:

(1) se b>0, então mdc(a,b) = mdc(b, a % b) ;

(2) se b=0, então mdc(a,b) = a.

Exemplo: mdc(5,15) =(1) mdc(15, 5 % 15) = mdc(15, 5) =(1) mdc(5, 0) =(2) 5, Note que, para b>0, se a%b==0 (como em 15%5), detectamos que a resposta está em b, pois vale o lema mdc(a,b) = mdc(b, a % b) = mdc(b, 0).

Seu programa deve imprimir SIM se p e q forem primos entre si e NAO e o MDC(p,q) em caso contrário.

**Entrada esperada:** dois valores naturais estritamente positivos p e q.

**Saída esperada:** Se os valores forem primos entre si "SIM", caso contrário "NAO" e o MDC entre p e q.

**Atenção:** É obrigatório que a função mdc seja implementada recursivamente. Se não a implementar recursivamente, sua nota será posteriormente anulada.

**Atenção:** não imprima textos informativos ao usuário, pois estes atrapalhariam o avaliador automático. Mesmo na resposta, não use textos, apenas imprima as variáveis ou expressões aritméticas requeridas.