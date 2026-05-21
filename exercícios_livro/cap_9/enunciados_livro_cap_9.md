# Manipulação de Arquivos em C

## Exercício 1 — Arquivo Texto (Individual, 30 min)
◆ Leia do teclado 5 nomes e 5 notas de alunos
◆ Salve em arquivo texto (alunos.txt) usando fprintf
◆ Reabra o arquivo e calcule a média da turma; exiba no console
◆ Bônus: ordene os registros por nota antes de salvar (Bubble Sort)

## Exercício 2 — CRUD Binário (Duplas, 60 min)
◆ Implemente as funções inserir, listar, atualizar e remover do Exemplo 7.2
◆ Adicione a função buscar(int mat) que retorna 1 se o aluno ativo for encontrado
◆ Exiba o total de registros (ativos + inativos) usando fseek/ftell
◆ Teste com no mínimo 10 registros

## Desafio Extra — Integração Texto + Binário (para casa)
◆ Leia um arquivo CSV de alunos fornecido pelo professor
◆ Converta para o formato binário do Exemplo 7.2
◆ Exporte de volta para um novo CSV com coluna 'Situação' (Aprovado/Reprovado)
◆ Meça e exiba o tamanho dos dois arquivos binários com fseek/ftell