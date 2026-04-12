# CAP 3
## Exercício 1 — Erros de Compilação e Lógica
Identifique e corrija os erros nos trechos de código abaixo, explicando em comentários o
que estava errado:
1.1 int v[10], i;
 for (i = 1; i <= 10; i++)
 v[i] = 0;
1.2 int v[10], i;
 for (i = 0; i < 10; i++)
 v[i] = 0;
 v[i] = 101;
1.3 #define MAX 30;
 int v[MAX];
 for (i = 0; i < 10; i++)
 v[i] = 0;
Para cada trecho corrija o código e explique o erro encontrado em um comentário

## Exercício 2 — Estatísticas de um Vetor
Escreva um programa que:
 a) Leia N números reais do teclado (use #define N 10);
 b) Calcule e exiba: média, maior valor, menor valor e a soma total;
 c) Exiba apenas os valores ACIMA da média, com seus respectivos índices;
 d) Exiba os valores em ordem INVERSA (sem usar outro vetor).
Entrada esperada: 10 valores reais.
Saída: média, maior, menor, soma; valores acima da média; vetor invertido

## Exercício 3 — Função para Vetores
Implemente as seguintes funções e crie um programa main() que as demonstre:
 float media(float v[], int n)
 Retorna a média dos n primeiros elementos do vetor v.
 float maximo(float v[], int n)
 Retorna o maior valor entre os n primeiros elementos.
 void inverter(int v[], int n)
 Inverte os elementos do vetor in-place (sem vetor auxiliar).
Teste cada função com ao menos dois vetores de tamanhos diferentes.

## Exercício 4 — Matriz — Transposta
Implemente um programa que:
 a) Leia uma matriz inteira A de dimensão N×N (use #define N 4);
 b) Calcule a transposta de A e armazene em outra matriz B;
 (A transposta troca linhas por colunas: B[i][j] = A[j][i])
 c) Exiba as matrizes A e B lado a lado, formatadas com %4d.
Bônus: verifique se A é simétrica (A == transposta de A).

## Exercício 5 — Manipulação de Strings — Funções
Implemente as seguintes funções (sem usar as funções prontas da string.h):
 int meu_strlen(char s[])
 Retorna o número de caracteres da string s (sem contar '\0').
 void meu_strcpy(char dest[], char orig[])
 Copia a string orig para dest, incluindo o delimitador '\0'.
 void meu_strcat(char dest[], char orig[])
 Concatena orig ao final de dest.
 int meu_strcmp(char s1[], char s2[])
 Compara s1 e s2: retorna 0 se iguais, <0 se s1<s2, >0 se s1>s2.
Crie um main() que teste cada função e compare com o resultado das funções originais.

## Exercício 6 — Cadastro Simples com Strings e Vetores
Escreva um programa que gerencie um mini-cadastro de 5 alunos com:
 — Nome (string de até 50 caracteres)
 — Nota (float)
O programa deve:
 a) Ler os dados dos 5 alunos (nome e nota);
 b) Exibir o nome do aluno com maior nota;
 c) Exibir todos os alunos aprovados (nota >= 6.0) em ordem de cadastro;
 d) Exibir todos os alunos em ordem ALFABÉTICA pelo nome.
Dica para ordenação: use strcmp() para comparar nomes e troque os pares fora de ordem.
(Use dois vetores separados: char nomes[5][51] e float notas[5])

## Exercício 7 — Palíndromo e Análise de String
Escreva um programa que leia uma palavra ou frase e:
 a) Informe se é um palíndromo (lê-se igual de frente para trás);
 Exemplos de palíndromos: 'ovo', 'arara', 'racecar'
 b) Conte quantas vogais, consoantes, dígitos e espaços existem;
 c) Exiba a string com cada letra substituída pela letra seguinte no
 alfabeto ASCII (ex.: 'a' → 'b', 'z' → 'a').
Implemente a verificação de palíndromo como uma função separada:
 int palindromo(char s[]) — retorna 1 se for palíndromo, 0 caso contrário.