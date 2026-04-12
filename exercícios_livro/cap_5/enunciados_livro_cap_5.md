# CAP 5
##  Exercício 1: Função de Apresentação
Escreva um programa com uma função chamada apresenta_aluno() que receba DOIS
parâmetros:
• char nome[] (nome do aluno);
• int matricula (número de matrícula).
A função deve exibir uma ficha formatada, como:
 ==========================================
 Nome: [nome]
 Matricula: [matricula]
 Curso: ADS — UFPR
 ==========================================
Em main(), chame a função pelo menos três vezes com dados diferentes.
Declare o protótipo correto da função antes de main().

## Exercício 2: Conversor de Temperaturas
Crie um programa com as seguintes funções:
• float celsius_para_fahrenheit(float c) — fórmula: F = (C × 9/5) + 32;
• float celsius_para_kelvin(float c) — fórmula: K = C + 273.15;
• void exibe_tabela(float inicio, float fim, float passo) — exibe uma tabela
 de conversão de início até fim, incrementando de passo em passo.
Exemplo de saída para exibe_tabela(0.0, 30.0, 5.0):
 Celsius Fahrenheit Kelvin
 0.00 32.00 273.15
 5.00 41.00 278.15
 ...
Todos os protótipos devem estar declarados antes de main()

## Exercício 3: Operações com Inteiros
Escreva um programa com as quatro funções aritméticas básicas:
• int soma(int a, int b)
• int subtracao(int a, int b)
• int multiplicacao(int a, int b)
• float divisao(int a, int b) — verifique divisão por zero e exiba mensagem de erro
Em main(), solicite dois inteiros ao usuário com scanf() e exiba os resultados
de todas as operações em um menu formatado.
Requisito adicional: crie também uma função void imprime_separador(int n)
que imprime n hifens seguidos de uma quebra de linha, e use-a para separar
visualmente as seções da saída.

## Exercício 4: Variáveis Locais e Globais
Escreva um programa que demonstre CLARAMENTE a diferença entre variáveis locais
e globais. O programa deve:
a) Declarar uma variável global chamada saldo com valor inicial 1000.0;
b) Criar uma função void deposita(float valor) que some o valor ao saldo global;
c) Criar uma função void saca(float valor) que subtraia o valor do saldo global,
 verificando se há saldo suficiente (se não houver, exiba mensagem de erro);
d) Criar uma função void exibe_saldo(void) que imprima o saldo atual;
e) Em main(), realizar pelo menos 2 depósitos e 2 saques, chamando exibe_saldo()
 após cada operação.
Use apenas a variável global saldo — não use parâmetros para passar o saldo.

## Exercício 5: Maior, Menor e Média
Implemente as funções abaixo para trabalhar com vetores de 5 inteiros:
• int maior_vet(int v[], int n) — retorna o maior elemento do vetor;
• int menor_vet(int v[], int n) — retorna o menor elemento do vetor;
• float media_vet(int v[], int n) — retorna a média dos elementos.
Em main():
a) Declare e inicialize um vetor com 5 valores fornecidos pelo usuário via scanf();
b) Chame cada função e exiba os resultados.
Saída esperada:
 Valores: 4 7 2 9 1
 Maior: 9 | Menor: 1 | Media: 4.60

##  Exercício 6: Contador com static
Escreva um programa que demonstre o uso de variável local static:
a) Crie uma função int proximo_id(void) que, a cada chamada, retorne um
 número de identificação sequencial (1, 2, 3, 4, ...) usando uma
 variável local static como contador;
b) Crie uma função void cadastra_produto(char nome[], float preco) que
 chame proximo_id() para obter o ID e exiba:
 ID: [n] | Produto: [nome] | Preco: R$ [preco]
c) Em main(), cadastre pelo menos 4 produtos.
Saída esperada:
 ID: 1 | Produto: Caneta | Preco: R$ 2.50
 ID: 2 | Produto: Caderno | Preco: R$ 12.90
 ...

## Exercício 7: Verificador de Número Primo
Implemente uma função int eh_primo(int n) que retorne 1 se n é primo
e 0 caso contrário.
Em main():
a) Leia um número inteiro positivo do usuário e informe se é primo;
b) Crie também uma função void lista_primos(int limite) que imprima
 todos os primos de 2 até o limite informado, chamando eh_primo()
 para cada número.
Saída esperada (para limite = 20):
 Primos ate 20: 2 3 5 7 11 13 17 19
Dica: um número n > 1 é primo se não for divisível por nenhum
inteiro entre 2 e n-1.

## Exercício 8: Jogo de Adivinhação Modularizado
Reescreva um jogo de adivinhação usando funções separadas para cada
responsabilidade:
• int gera_numero(void) — retorna um número inteiro aleatório entre 1 e 100
 (use rand() % 100 + 1, incluindo <stdlib.h> e <time.h>);
• int lê_tentativa(void) — lê e retorna um inteiro do usuário;
• void da_dica(int tentativa, int secreto) — exibe 'Muito alto!',
 'Muito baixo!' ou 'Acertou!';
• int joga_rodada(int secreto) — gerencia uma rodada completa, retornando
 o número de tentativas usadas.
Em main(), chame joga_rodada() e exiba ao final:
 Voce acertou em [n] tentativa(s)!