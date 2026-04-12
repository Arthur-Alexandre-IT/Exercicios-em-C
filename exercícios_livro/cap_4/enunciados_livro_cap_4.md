# CAP 4
## Exercício 01 — Verdadeiro ou Falso
Indique se são verdadeiras ou falsas as afirmações abaixo. Justifique cada resposta.
6. NULL é outro nome para o delimitador de strings '\0'.
7. O operador & permite obter o endereço de uma variável. Permite também obter o
endereço de um ponteiro.
8. O endereço de uma variável que ocupe mais que um byte de memória é o seu menor
endereço.
9. Se x é um inteiro e ptr um ponteiro para inteiros e ambos contêm no seu interior o
número 100, então x+1 e ptr+1 apresentarão o número 101.
10. O operador Asterisco (Apontado por) permite saber qual o valor de um ponteiro.
11. Pode-se alterar o endereço inicial de um vetor atribuindo um valor ao nome do vetor.
12. Se v for um vetor, então v == &v[0].
13. É sempre possível saber dentro de uma função qual o número de elementos que um
vetor contém

## Exercício 02 — Tabela de Expressões
Dado o seguinte trecho de código:
char s[] = "Maria";
char *ptr = s;
Complete a tabela colocando as expressões que resultam no valor indicado na coluna Valor,
usando duas formas: uma com s e outra com ptr (considere s no endereço 1000 e ptr no endereço
5000).
Usando s Usando ptr Valor
'r'
1000 (endereço de s[0])
1001 (endereço de s[1])
5000 (endereço de ptr)

## Exercício 03 — Troca por Referência
Escreva uma função void troca(float *pa, float *pb) que troca os valores de duas variáveis float
usando ponteiros. No main(), leia dois floats do teclado, chame a função e exiba os valores
trocados.

## Exercício 04 — Comprimento de String com Ponteiros
Implemente a função:
int meu_strlen(char *s)

que calcula o comprimento de uma string usando apenas aritmética de ponteiros (sem usar
índices colchetes nem a função strlen da biblioteca). Escreva um programa que leia uma string e
exiba seu comprimento

## Exercício 05 — Soma de Vetor
Escreva uma função int soma_vetor(int *v, int n) que receba um vetor de inteiros e seu tamanho e
retorne a soma de todos os elementos, percorrendo o vetor com incremento de ponteiro (sem
usar índices com colchetes). Teste com um vetor de 5 elementos lidos do teclado.

## Exercício 06 — Inversão de Vetor
Escreva uma função void inverte(int *v, int n) que inverta os elementos de um vetor de inteiros no
próprio vetor (in-place), usando ponteiros. Use dois ponteiros, um apontando para o início e outro
para o fim, avançando e recuando respectivamente até se cruzarem.

## Exercício 07 — [Exercício de Exame]
Suponha a seguinte declaração:
int v[5] = {10, 20, 30, 40, 50};
int *pv;
int **ppv;
• a) Qual o conjunto de instruções para relacionar as três variáveis entre si?
• b) Represente em um esquema de memória o estado após as instruções do item (a),
supondo que todos os tipos ocupam 1 byte. Dê endereços apropriados a todas as
variáveis envolvidas.
• c) Quais os parâmetros que se deve colocar em cada printf de tal forma que se obtenha
a saída indicada, sendo o 1º parâmetro com base em v, o 2º em pv e o 3º em ppv?
printf("%d %d %d\n", , , ); -> 10 10 10
printf("%d %d %d\n", , , ); -> 20 20 20
printf("%d %d %d\n", , , ); -> 30 40 50
• d) Qual a saída da instrução: printf("\n%d %d %d", &v[0], &pv, &ppv)

## Exercício 08 — [Desafio] char *First_Vogal(char *s)
Implemente a função:
char *First_Vogal(char *s)
que retorna o endereço da primeira vogal na string s. Caso não exista nenhuma vogal, retorna
NULL. Escreva um programa que leia uma string e exiba os caracteres a partir da primeira vogal encontrada.

## Exercício 09 — [Desafio] char *strins(char *dest, char *orig)
Implemente a função:
char *strins(char *dest, char *orig)
que insere a string orig no início da string dest, retornando dest. Exemplo:
char s[100] = "Autonoma";
strins(s, "Universidade");
printf("%s", s); -> UniversidadeAutonoma