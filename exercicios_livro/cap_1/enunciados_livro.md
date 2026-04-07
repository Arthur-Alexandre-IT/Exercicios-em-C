## Exercício 1: Identificando Erros
O programa a seguir foi elaborado por um aluno. Identifique TODOS os erros e reescreva
a versão correta, que deve compilar e executar sem problemas.
 #include <stdio.h>
 #include <stdlib.h>:
 int Main()
 {
 printf( Existem %d semanas no ano., 52);
 cout << endl;
 system("PAUSE")
 return 0;
 }

## Exercício 2: Saída em Múltiplas Linhas
Escreva um programa que exiba exatamente a seguinte saída utilizando apenas
UMA única chamada à função printf():
 um
    dois
        tres

## Exercício 3: Impressão com Especificadores de Formato
Escreva um programa que imprima as seguintes informações na tela,
usando as variáveis e especificadores corretos para cada tipo:
 a) O número inteiro 2025 em decimal, hexadecimal e octal.
 b) O valor de pi (3.14159265) com 2, 4 e 8 casas decimais.
 c) A letra 'G' e seu código ASCII (inteiro).
 d) A frase: O reajuste foi de 12% (atenção ao símbolo %).

## Exercício 4: Tabela Formatada de Produtos
Escreva um programa em C que imprima a tabela abaixo, com alinhamento correto.
Use tamanhos de campo e os especificadores adequados.
 PRODUTO QTD PRECO UNIT TOTAL
 Caneta 30 2.50 75.00
 Borracha 15 1.20 18.00
 Caderno 10 12.90 129.00
 Regua 8 3.75 30.00
Requisitos:
 • Nome do produto: alinhado à esquerda, campo de 15 caracteres;
 • Quantidade: alinhado à direita, campo de 6 caracteres;
 • Preço e Total: alinhados à direita, campo de 10, com 2 casas decimais;
 • Calcule o Total como uma variável float (qtd × preco).

## Exercício 5: Variáveis e Seus Tipos
Escreva um programa que declare e inicialize uma variável de CADA um dos tipos
a seguir, atribuindo valores que estejam dentro da faixa permitida:
 char, int, short, long, unsigned int, float, double
Para cada variável, imprima:
 [nome da variável] = [valor] — tipo: [tipo] — tamanho: [N] bytes
Use o operador sizeof() para obter o tamanho em bytes de cada tipo.
Exemplo: printf("int ocupa %d bytes.\n", (int)sizeof(int));

## Exercício 6: Nomes de Variáveis Válidos
Classifique cada um dos nomes abaixo como VÁLIDO ou INVÁLIDO para variável em C.
Para os inválidos, explique o motivo (em comentário no código).
 a) 3ab b) _sim c) n_a_o d) 98Fim
 e) int f) A123 g) x**x h) __A
 i) --A j) y_2 k) YYFim l) \meu
 m) *y2 n) float o) velocidade_media
Escreva um arquivo .c com os nomes válidos declarados como variáveis int
e inicializadas com qualquer valor. Os nomes inválidos devem aparecer apenas
como comentários explicativos.

## Exercício 7: Programa Criativo com Moldura
Reescreva o programa de moldura visto no livro (caracteres gráficos ASCII estendido),
mas com as seguintes modificações:
 a) A moldura deve ter pelo menos 4 linhas de altura e 40 colunas de largura;
 b) Dentro da moldura, exiba:
 - Seu nome (ou nome fictício)
 - Sua turma / curso