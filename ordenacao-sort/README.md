# Ordenação
Sort

Algoritmos de ordenação são métodos de manipulação de dados que tem como objetivo **colocar elementos de um estrutura em uma ordem** determinada.

Sua utilização é comum para melhor organização de dados, pois facilita a busca de elementos em um conjunto.

### Algoritmos
Existem diferentes métodos de ordenar elementos, a seguir estão listados os diferentes tipos do mais simples, ao mais complexo.

Os **métodos simples** são adequados para pequenos vetores, são programas pequenos e fáceis de entender. Possuem complexidade C(n) = O(n²), ou seja, requerem O(n²) comparações. 

**Exemplos: Insertion Sort, Selection Sort, Bubble Sort.**

Nos algoritmos de ordenação as medidas de complexidade relevantes são:

- Número de comparações C(n) entre chaves.
- Número de movimentações M(n) dos registros dos vetores.

Onde n é o número de registros.

### Insertion Sort
Percorre um vetor de elementos da esquerda para a direita e à medida que avança vai ordenando os elementos à esquerda, considerado um método de ordenação estável.

> Um método de ordenação é estável se a ordem relativa dos itens iguais não se altera durante a ordenação.

![exemplo isertion](https://miro.medium.com/v2/resize:fit:1012/1*JP-wURjwf4k23U2G3GNQDw.gif)

[codigo-insertion](/ordenacao-sort/InsertionSort.c)

### Selection Sort
Selecionar o menor item e colocar na primeira posição, selecionar o segundo menor item e colocar na segunda posição, segue estes passos até que reste um único elemento.

![exemplo-selection](https://miro.medium.com/v2/resize:fit:828/1*5WXRN62ddiM_Gcf4GDdCZg.gif)

[Codigo-selection](/ordenacao-sort/SelectionSort.c)

No **código disponibilizado**, ele encontra o maior da sequencia e verifica quem é o último. logo, pode-se fazer o selection desses dois modos: encontrando os min ou os max.

### Bubble Sort
Percorre a sequencia comparando os elementos adjacentes realizando a troca deles quando necessário, assim, de dois em dois elementos.

![exemplo-bubble](https://miro.medium.com/v2/resize:fit:640/1*7seGXJi3te9beNfpAvFXEQ.gif)

[codigo-bubble](/ordenacao-sort/BubbleSort.c)

### Merge Sort

### Quick Sort

### Heap Sort
