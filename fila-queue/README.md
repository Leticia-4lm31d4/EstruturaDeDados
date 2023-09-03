# Fila
Queue

Estrutura de dados linear, que segue a propriedade FIFO, *first in first out*, ou seja, o primeiro elemento que entra é o primeiro a ser removido. Funciona com uma fila humana mesmo.

![Fila](https://cdn.programiz.com/sites/tutorial2program/files/queue.png)

### Operações
- Enfileirar - Inserir elementos
- Desenfileirar - Remover elementos
- Verificar se está cheia
- Verificar se está vazia
- *Peek* - Ler o valor do elemento a ser removido

### Na programação
Queue operations work as follows:

- two pointers `FRONT` and `REAR`
- `FRONT`, guarda o primeiro elemento da fila
- `REAR`, guarda  o último elemento da fila 
- Os valores de ambos são iniciados como `-1`

**Enfileirar**
*Enqueue Operation*

1. Verificar se está cheia, se não:
2. Primeiro elemento `FRONT` vira `0`
3. Adiciona `1` em `REAR`
4. Insere novo elemento na posição que `REAR` aponta, pois quem mais chegar irá para o final da fila.

**Desenfileirar**
*Dequeue Operation*

1. Verificar se fila está cheia, se não:
2. Retornar o valor que `FRONT` aponta
3. Adiciona `1` em `FRONT` // a fila andou
4. Quando o elemento a ser removido é o último, setar os valores de `FRONT` and `REAR` para `-1`

Para saber se está removendo o último elemento verificar se `FRONT > REAR`, pois eles são os índices dos elementos.

