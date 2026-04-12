# Cap1

## Exercício 1 em Aula
Escreva um programa em C que exiba exatamente a seguinte saída:
 *** Bem-vindo ao ADS ***
 Disciplina: Linguagens de Programacao
 Turma 2026 - 1o semestre
Requisitos: use pelo menos uma tabulação (\t) e uma nova linha (\n) nos printf().
Compile e execute antes de mostrar ao professor.

## Exercício 2 em Aula
Escreva um programa em C que declare e inicialize as seguintes variáveis:
 • int: ano de nascimento de um aluno da turma
 • float: média semestral (com duas casas decimais)
 • char: inicial do primeiro nome
 • int: número de disciplinas cursadas
Imprima todas as variáveis em uma saída organizada, como:
 Aluno: [inicial] Ano de nascimento: [ano]
 Disciplinas: [n] Media: [media]
Compile, execute e troque os valores com o colega da dupla

# Cap 2

## Exercício 2 em Aula
Escreva um programa em C que exiba exatamente a seguinte saída:
 *** Bem-vindo ao ADS ***
 Disciplina: Linguagens de Programacao
 Turma 2026 - 1o semestre
Requisitos: use pelo menos uma tabulação (\t) e uma nova linha (\n) nos printf().
Compile e execute antes de mostrar ao professor.

## Exercício 3 em Aula
Escreva um programa em C que declare e inicialize as seguintes variáveis:
 • int: ano de nascimento de um aluno da turma
 • float: média semestral (com duas casas decimais)
 • char: inicial do primeiro nome
 • int: número de disciplinas cursadas
Imprima todas as variáveis em uma saída organizada, como:
 Aluno: [inicial] Ano de nascimento: [ano]
 Disciplinas: [n] Media: [media]
Compile, execute e troque os valores com o colega da dupla

# Cap 3

## Exercício 4 em Aula
Escreva um programa que leia as notas de 5 alunos (valores de 0.0 a 10.0),
armazene em um vetor e exiba:
 a) A média da turma;
 b) Quantos alunos ficaram acima da média;
 c) As notas em ordem reversa (do último ao primeiro elemento digitado).
Dica: use #define NALUNOS 5 para facilitar futuras alterações.

## Exercício 5 em Aula
Escreva um programa que preencha e exiba a tabela de multiplicação
de 1 a 5, armazenando os resultados em uma matriz v[5][5].
Onde v[i][j] = (i+1) * (j+1).
Saída esperada (parcial):
 1 2 3 4 5
 2 4 6 8 10
 3 6 9 12 15 ...
Use #define N 5 e dois laços for encadeados

## Exercício 6 em Aula
Escreva um programa que leia uma frase com gets() e informe:
 a) O comprimento da frase (strlen);
 b) Se a frase começa com letra maiúscula (frase[0] >= 'A' && frase[0] <= 'Z');
 c) Quantas vogais (a,e,i,o,u — maiúsculas ou minúsculas) a frase contém.
Dica: use um laço for com strlen() como limite e compare cada caractere.

# Cap 4

## Exercício 7 em Aula
1. Declare duas variáveis float: p = 3.14 e q = 2.71.
2. Declare um ponteiro float *fp e faça-o apontar para p.
3. Imprima: valor de p, endereço de p, valor de fp, endereço de fp e *fp.
4. Altere *fp = 9.99 e imprima novamente o valor de p.
 Qual conclusão você tira sobre modificar a variável via ponteiro?

## Exercício 8 em Aula
1. Escreva uma função void triplica(int *p) que multiplica por 3 o valor
 da variável apontada pelo ponteiro p.
2. No main(), declare int n = 5 e chame triplica(&n).
3. Imprima n antes e depois da chamada.
4. O que aconteceria se a função recebesse int p (sem asterisco)?

## Exercício 9 em Aula
Dado int v[5] = {10,20,30,40,50}; e int *ptr = v;
1. Sem usar colchetes (v[i]), imprima cada elemento usando *(ptr + i).
2. Em seguida, escreva um loop com ptr++ para somar todos os elementos
 e imprima a soma. Use outra variável para não perder o inicio do vetor.

# Cap 5

## Exercício 10 em Aula
Crie um programa no Dev-C++ com UMA função chamada apresenta() que exiba:
 Nome: [seu nome]
 Curso: ADS — UFPR
 Semestre: [semestre atual]
Requisitos:
• Declare o protótipo antes de main();
• Chame apresenta() pelo menos duas vezes em main();
• Use apenas variáveis locais dentro de apresenta();
• Compile e execute antes de mostrar ao professor.

## Exercício 11 em Aula
Escreva um programa com três funções:
• float maior_valor(float a, float b) — retorna o maior entre dois floats;
• float menor_valor(float a, float b) — retorna o menor entre dois floats;
• float diferenca(float a, float b) — retorna o valor absoluto da diferença.
Em main(), leia dois valores do usuário com scanf() e exiba:
 Maior: [valor]
 Menor: [valor]
 Diferenca: [valor]
Compile, execute e compare o resultado com o colega.