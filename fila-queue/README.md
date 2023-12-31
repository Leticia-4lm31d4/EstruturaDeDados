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

### Tipos
A fila tem algumas limitações, como seu tamanho que reduz com as remoções e a inserção limitada, por isso existem alguns tipos de fila:

#### Circular

 O último elemento aponta para o primeiro, traz vantagens no quesito de utilização da memória.

 Applications of Circular Queue
- CPU scheduling
- Memory management
- Traffic Management

#### de Prioridade

 Cada elemento é relacionado a um valor de prioridade , assim seu "peso". <br>
 Se os elementos tiverem o mesmo valor de prioridade, a ordem importa.<br>
 Portanto, os elementos são removidos considerando as prioridades.

### Deque (Double Ended Queue)

Os elementos podem ser removidos do inicio ou do final da fila.

**Tipos**
- Restrito a Input
    - Pode inserir em apenas um dos lados, mas pode remover de ambos;
- Restrito a output
    - Pode remover apenas de um dos lados, mas inserir por ambos;

**Programando**
- Tem um tamanho `n`, para controle de `vazia` e `cheia`;
- Tem ponteiros para o ínicio = -1 e fim = 0;

**Operações**

Inserir na Frente
``` 
    1. Check the position of front
    2. If front < 1, reinitialize front = n-1 (Shift front to the end)
    3. Else, decrease front by 1
    4. Add the new key into array[front] => Insert the element at Front
```
Inserir no Final
```
    1. Verifica se o vetor ta cheio
    2. Se cheio, reinicializa rear = 0
    3. Else, rear++ (Increase the rear)
    4. Add the new key into array[rear] => Insert the element at rear
```
Remover da frente
```
    1. Verificar se deque ta vazio
    2. If the deque is empty (front = -1), deletion cannot be performed (underflow condition).
    3. If the deque has only one element (front = rear), set front = -1 and rear = -1.
    4. Else if front is at the end (front = n - 1), set go to the front front = 0.
    5. Else, front = front + 1
```
Remover do Final
```
    1. Verificar se deque ta vazio
    2. If the deque is empty (front = -1), deletion cannot be performed (underflow condition).
    3. If the deque has only one element (front = rear), set front = -1 and rear = -1.
    4. If rear is at the front (i.e. rear = 0), set go to the front rear = n - 1
    5. Else, rear = rear - 1
```
Verificar se Vazio
```
Se front = -1,  deque ta vazio
```
Verificar se Cheio
```
Se front = 0 AND rear = n-1
OR front = rear + 1 
=> Deque vazio
```

### Aplicações da Fila
- Escalonamento da CPU e Disco;
- Quando dados são transferidos de modo assíncrono entre dois processos, a fila é usada para sincronizaçãa. Exemplos: IO Buffers, pipes, file IO...
- Tratamento de interrupções em sistemas de tempo real.
- Os sistemas telefônicos do Call Center usam Filas para manter as pessoas ligando para eles em ordem.