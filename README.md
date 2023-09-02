# Estrutura de dados

### Introdução
Estrutura de dados (Data Structure) é o ramo da computação que estuda os diversos mecanismos de organização de dados para atender aos diferentes requisitos de processamento. As estruturas de dados definem a organização, métodos de acesso e opções de processamento para a informação manipulada pelo programa.

### Tipos de estruturas
Há uma divisão em dois yipos de categorias:
- Estrutura linear;
- Estrutura não linear;

### Lineares
os elementos são organizados em sequência (um após o outro), assim, são organizados em uma ordem particular, o que torna eles mais fácil de se implementar.

Porém, quando a complexidade do progarama aumenta, as estruturas lineares deixam de ser uma boa opção por causa das complexidades operacionais.

**Exemplos de Estruturas de Dados Lineares**
1. **Vetor** - Array
2. **Pilha** - Stack
3. **Fila** - Queue
4. **Lista encadeada** - Linked List

### Não Lineares
Os elementos nnão estão organizados de modo sequencial, mas sim de modo hierárquico, de modo que um elemento estará conectado a um ou mais elementos.

**Exemplo de Estruturas de Dados Não Lineares**
1. **Grafo** - Graph
2. **Árvore** - tree
> A **Heap** is a special Tree-based data structure in which the tree is a complete binary tree.

### Operações
Pode-se realizar algumas operações nas estruturas de dadados, são essas: <br>
- **Traversing** - Acessar os elementos;
- **Insert** - Inserir elementos;
- **Delete** - Deletar / Apagar elementos;
- **Search** - Busca, encontrar a localização de um elemento, seu valor...
- **Sort** - Ordenação;
- **Merge** - Combinar registros de diferentes arquivos em um arquivo só;

### Crescimento de uma Função – Notação Assintótica
Growth of a Function - Asymptotic Notation

Modo como a funçaõ se comporta dependendo do cenário, que pode ser: o **melhor caso**, o **pior caso** e em **média**, que está relacionada a uma entrada aleatória. Utilizado para analizar o funcionamento de algoritimos. Assim, a análise de uma função `f(n)`, em que o resultado é o tempo de execução e o paramêtro é o tamanho da entrada `n`.

**Análise de custo do código**

| Code Structure      | Step | Análise de Custo | 
|---------------------| ---- |------------------|
| `sum = 0;`          | C1   | C1               |
| `for(i=0;i<N; i++)` | C2   | C2 * (N+1)       |
| `for(j=0;j<N; j++)` | C2   | C2 * N * (N+1)   |
| `sum += arr[i][j];` | C3   | C3 * N^2         |

Custo = C1 + C2 * (N+1) + C2 * N * (N+1) + C3 * N^2

Portanto, **Análise assintótica** é comparar dois algoritmos com tempos de execução `f(n)` e `g(n)`, esse tempo mostra o quão rápido cada função cresce.

### Big-O Notation
Nessa notação, implica-se `f(n) <= g(n)` representando de modo:<br>
`f(n) = O(g(n))`. Assim, o Big-O fornece o limite superior de uma função.<br>
Significa que a taxa de crescimento de f(n) não é maior que a de g(n).<br>
Utilizado pra ranquear funções de acordo com suas **taxas de crescimento**.

<img src="https://cdn.programiz.com/sites/tutorial2program/files/big0.png" height="256" alt="Big-O graphic" />

###  Big-Ω - Big Omega Notation
Nessa notação, implica-se `f(n) >= g(n)` representando de modo:<br>
`f(n) = Ω(g(n))`. Assim, o Omega fornece o limite inferior de uma função.

<img src="https://cdn.programiz.com/sites/tutorial2program/files/omega.png" height="256" alt="Big-Omega graphic" />

### Big-Θ - Big Theta Notation
Nessa notação, implica-se `f(n) = g(n)` representando de modo:<br>
`f(n) = Θ(g(n))`. Assim, o Theta limita a função dentro de fatores constantes.

<img src="https://cdn.programiz.com/sites/tutorial2program/files/theta.png" height="256" alt="Big-Theta graphic" />

### Complexade de Tempo e Espaço
Time and Space Complexity

Principais conceitos
- Alocação Dinâmica de Memória
- Recursão
- Análise de Performance

As análise de performance podem ser feitas em **Time Complexity**, que é quanto tempo leva para executar de início a fim um algoritmo, e **Space Complecity**, que é o quanto de memória o algoritmo precisa para executar e compilar.

### Time complexity
Step count

Por exemplo, em `a = a + b;` é 1, porque o número de operações que ocorre é uma só.

| Code Structure      | Step |
|---------------------| ---- |
| `x = a + b;`        |  1   | 
| `for(i=0;i<N; i++)` |  N   |
| `for(i=1;i<N; i++)` |  N + 1  |
| for(i=0;i<N; i++) <br> for(j=0;j<N; j++) <br> x = a + b; |  N^2 * 1|

### Divide and Conquer
Top-Down Technique of solving a large problem by:
1. breaking the problem into smaller sub-problems
2. solving the sub-problems, and
3. combining them to get the desired output.

### Master Theorem
The master theorem is used in calculating the time complexity of recurrence relations (divide and conquer algorithms) in a simple and quick way.

![Master Theorem](/masterTheorem.png)

## Fontes de pesquisa e consulta
[Unicamp Apostila](https://www.dca.fee.unicamp.br/cursos/EA876/apostila/HTML/node1.html)<br>
[Programiz](https://www.programiz.com/dsa)<br>
[Youtube - Anuradha Bhatia](https://youtube.com/playlist?list=PLHQFMjPRZUiLyjUXG-CypQ13xwu4hjN3f&si=okyaupM4Tgb4ycIe)<br>
[Site - Anuradha Bhatia](https://www.anuradhabhatia.com/)<br>
