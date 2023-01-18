/*
Lucas Neves da Silva
24/09/2022
*/

#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int data;
    struct Stack* next;
};

struct Stack* newNode(int data) {
    struct Stack* stackNode = (struct Stack*) malloc(sizeof(struct Stack));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(struct Stack* root) {
    return !root;
}

void push(struct Stack** root, int data) {
    struct Stack* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}

int pop(struct Stack** root) {
    if (isEmpty(*root))
        return INT_MIN;
    struct Stack* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(struct Stack* root) {
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main() {
    struct Stack* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    printf("%d popped from stack\n", pop(&root));

    printf("Top element is %d\n", peek(root));

    return 0;
}


/*
Como funciona: 

Neste exemplo, a pilha é implementada como uma estrutura de dados de nó simples, com um inteiro (data) e um ponteiro para o próximo nó (next). 

O nó raiz da pilha é um ponteiro para a estrutura Stack e é inicializado como NULL. 

As operações de pilha são implementadas como funções, incluindo push, pop e peek.

*/