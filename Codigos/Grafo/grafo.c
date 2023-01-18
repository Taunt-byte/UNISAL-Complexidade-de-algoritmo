/*
Lucas Neves da Silva
23/09/2022
*/

#include <stdio.h>
#include <stdlib.h>

struct Vertex {
  int data;
  struct Vertex *next;
};

struct Graph {
  int num_vertices;
  struct Vertex **vertices;
};

struct Graph *init_graph(int num_vertices) {
  struct Graph *g = malloc(sizeof(struct Graph));
  g->num_vertices = num_vertices;
  g->vertices = malloc(num_vertices * sizeof(struct Vertex *));

  for (int i = 0; i < num_vertices; i++) {
    g->vertices[i] = NULL;
  }

  return g;
}

void add_edge(struct Graph *g, int src, int dest) {
  struct Vertex *new_vertex = malloc(sizeof(struct Vertex));
  new_vertex->data = dest;
  new_vertex->next = g->vertices[src];
  g->vertices[src] = new_vertex;
}

void print_graph(struct Graph *g) {
  for (int i = 0; i < g->num_vertices; i++) {
    struct Vertex *v = g->vertices[i];
    printf("%d -> ", i);
    while (v != NULL) {
      printf("%d -> ", v->data);
      v = v->next;
    }
    printf("NULL\n");
  }
}

int main(void) {
  struct Graph *g = init_graph(4);
  add_edge(g, 0, 1);
  add_edge(g, 0, 2);
  add_edge(g, 1, 2);
  add_edge(g, 2, 0);
  add_edge(g, 2, 3);
  add_edge(g, 3, 3);

  print_graph(g);

  return 0;
}

// A saida devera ser:

/*
0 -> 2 -> 1 -> NULL
1 -> 2 -> NULL
2 -> 0 -> 3 -> NULL
3 -> 3 -> NULL
*/

//Isso mostra que o grafo tem quatro vértices (0, 1, 2 e 3) e seis arestas (0-1, 0-2, 1-2, 2-0, 2-3 e 3-3).