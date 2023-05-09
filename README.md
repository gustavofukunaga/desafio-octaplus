## Vetores: Busca, Inserção e Remoção

Desafio: Escreva um programa que contenha as seguintes 3 funções:

- search(v, x): Caso o elemento x esteja no vetor v, retorna o índice correspondente à primeira ocorrência do elemento x no vetor v. Caso contrário, retorna -1.
- insert(v, x, k): Insere o elemento x na posição de índice k do vetor v. Caso k for superior ou igual ao comprimento do vetor v, preencher as posições até o índice k com o valor 0.
- remove(v, x): Remove a primeira ocorrência do valor x no vetor v. Retorna -1, caso não haja nenhuma ocorrência.

Escreva uma função principal para executar as seguintes instruções:

- v = [0, -1, -2, -2, -4, -5]
- rs = search(v, -2)
- imprime rs
- rs = search(v, 2)
- imprime rs
- insert(v, 2, 3)
- imprime v
- insert(v, 10, 10)
- imprime v
- rr = remove(v, -2)
- imprime rr
- imprime v 
