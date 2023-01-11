#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

/* Estrutura da pilha */
struct Stack {
  int top;
  int items[MAX_SIZE];
};

/* Inicializa a pilha */
void init(struct Stack *stack) {
  stack->top = -1;
}

/* Verifica se a pilha está vazia */
int isEmpty(struct Stack *stack) {
  return stack->top == -1;
}

/* Verifica se a pilha está cheia */
int isFull(struct Stack *stack) {
  return stack->top == MAX_SIZE - 1;
}

/* Insere um elemento na pilha */
void push(struct Stack *stack, int item) {
  if (isFull(stack)) {
    printf("Stack overflow\n");
    return;
  }
  stack->items[++stack->top] = item;
}

/* Remove um elemento da pilha */
int pop(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("Stack underflow\n");
    exit(1);
  }
  return stack->items[stack->top--];
}

/* Exibe o elemento no topo da pilha */
int peek(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("Stack underflow\n");
    exit(1);
  }
  return stack->items[stack->top];
}

int main() {
  struct Stack stack;
  init(&stack);

  push(&stack, 10);
  push(&stack, 20);
  push(&stack, 30);

  printf("%d\n", pop(&stack));
  printf("%d\n", peek(&stack));

  return 0;
}
