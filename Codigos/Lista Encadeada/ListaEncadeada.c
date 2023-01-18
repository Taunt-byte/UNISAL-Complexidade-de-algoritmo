/*
Lucas Neves da Silva
23/09/2022
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct LinkedList {
  int size;
  struct Node *head;
};

struct LinkedList *init_linked_list(void) {
  struct LinkedList *list = malloc(sizeof(struct LinkedList));
  list->size = 0;
  list->head = NULL;
  return list;
}

void insert_at_front(struct LinkedList *list, int data) {
  struct Node *new_node = malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = list->head;
  list->head = new_node;
  list->size++;
}

void insert_at_end(struct LinkedList *list, int data) {
  struct Node *new_node = malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = NULL;

  if (list->head == NULL) {
    list->head = new_node;
  } else {
    struct Node *curr = list->head;
    while (curr->next != NULL) {
      curr = curr->next;
    }
    curr->next = new_node;
  }
  list->size++;
}

void remove_at_front(struct LinkedList *list) {
  if (list->head == NULL) {
    return;
  }

  struct Node *to_remove = list->head;
  list->head = list->head->next;
  free(to_remove);
  list->size--;
}

void remove_at_end(struct LinkedList *list) {
  if (list->head == NULL) {
    return;
  }

  if (list->head->next == NULL) {
    free(list->head);
    list->head = NULL;
    list->size--;
  } else {
    struct Node *curr = list->head;
    while (curr->next->next != NULL) {
      curr = curr->next;
    }
    free(curr->next);
    curr->next = NULL;
    list->size--;
  }
}

