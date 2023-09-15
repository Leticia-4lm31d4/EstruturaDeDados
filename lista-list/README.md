# Lista encadeada
linked list 

Estrutura de dados linear que coresponde a diversos nós conectados, em que cada nó guarda o o dado e o endereço do próximo nó. Para o primeiro nó da-se o nome `head` e o último aponta para `null`. Existem diversos tipos de listas encadeadas.

![exemplo-linked-list](https://cdn.programiz.com/sites/tutorial2program/files/linked-list-concept.png)

### Programação
Estrutura do nó
```
struct node
{
  int data;
  struct node *next;
};
```

Criando a lista
```
/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data=3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = NULL;

/* Save address of first node in head */
head = one;
```