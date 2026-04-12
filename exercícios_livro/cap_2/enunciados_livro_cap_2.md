# CAP 2
## Exercício 01 — Identificação de Operadores
Classifique cada operador abaixo como: aritmético, relacional, lógico, atribuição ou ternário.
a) + b) && c) % d) < e) != f) += g) ?: h) == i) || j) /

## Exercício 02 — Avaliação de Expressões
Dado: int a=1, b=2, c=3, d=4; calcule o valor de cada variável após a execução de cada
instrução.
a) a += b + c;
b) b *= c − d + 2;
c) d %= a + a + a;
d) d −= c −= b −= a;
e) a += b += c += 7;

## Exercício 03 — Expressões Relacionais e Lógicas
Dado: int i=1, j=2, k=3, n=2; float x=3.3, y=4.4;
Indique o valor (0 ou 1) de cada expressão:
a) i < j + 3 
b) 2*i − 7 <= j − 8 
c) −x + y >= 2.0*y
d) x == y 
e) x != y 
f) i + j + k == −2 * −k
g) !(n−j) 
h) !n−j 
i) i&&j&&k
j) i||j−3&&0 
k) i<j&&2>=k 
l) i==2||j==4||k==5

## Exercício 04 — Conversão de Temperatura Bidirecional
Escreva um programa que leia uma temperatura em Celsius e mostre:
a) A temperatura equivalente em Fahrenheit: F = C × 9/5 + 32
b) A temperatura equivalente em Kelvin: K = C + 273.15
Use variáveis float e exiba os resultados com 2 casas decimais

## Exercício 05 — Patos e Coelhos no Cercado
Em um cercado há patos e coelhos. Sabe-se que: patos têm 2 pés e coelhos têm 4.
Escreva um programa que leia o total de cabeças (C) e o total de pés (P),
e determine quantos patos (D) e quantos coelhos (R) há no cercado.
Fórmulas: R = (P − 2×C) / 2 D = C − R
Exiba os resultados inteiros.

## Exercício 06 — Salário Líquido do Encanador
Uma empresa contrata um encanador a R$ 20,00 por dia. São descontados 8% de
imposto de renda sobre o salário bruto.
Escreva um programa que leia o número de dias trabalhados e mostre:
• O salário bruto • O valor do imposto descontado • O salário líquido
Use operadores aritméticos e exiba os valores com 2 casas decimais.

## Exercício 07 — Ano Bissexto com Operador Ternário
Um ano é bissexto se for divisível por 4, mas não por 100; ou se for divisível por 400.
Escreva uma expressão lógica que resulte 1 se o ano for bissexto e 0 caso contrário.
Em seguida, escreva um programa que leia o ano e imprima "Ano Bissexto" ou
"Ano Nao Bissexto" usando o operador condicional (?:).

## Exercício 08 — Volume do Cilindro
Escreva um programa que leia o raio e a altura de um cilindro circular e
calcule seu volume. Use const double Pi = 3.141592; para a constante Pi.
Fórmula: Vol = Pi × raio² × altura
Exiba o resultado com 4 casas decimais

## Exercício 09 (Desafio) — Letras Maiúsculas e Minúsculas
Use a função getch() para ler um caractere do teclado (sem esperar ENTER).
Se for uma letra minúscula (a–z), imprima-a em maiúscula.
Caso contrário, imprima o próprio caractere.
Dica: letras minúsculas em ASCII: 97–122; maiúsculas: 65–90.
A diferença entre maiúscula e minúscula do mesmo caractere é sempre 32.
Use o operador condicional ternário e o cast (char).