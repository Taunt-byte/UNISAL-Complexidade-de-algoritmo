class Graph:
  def __init__(self):
    self.vertices = {}

  def add_vertex(self, vertex):
    self.vertices[vertex] = []

  def add_edge(self, vertex1, vertex2):
    self.vertices[vertex1].append(vertex2)
    self.vertices[vertex2].append(vertex1)

  def print_graph(self):
    for vertex, edges in self.vertices.items():
      print(f"{vertex} -> ", end="")
      for edge in edges:
        print(f"{edge} -> ", end="")
      print("NULL")

g = Graph()
g.add_vertex(0)
g.add_vertex(1)
g.add_vertex(2)
g.add_vertex(3)

g.add_edge(0, 1)
g.add_edge(0, 2)
g.add_edge(1, 2)
g.add_edge(2, 0)
g.add_edge(2, 3)
g.add_edge(3, 3)

g.print_graph()

# A saida devera ser:
# 0 -> 1 -> 2 -> NULL
# 1 -> 0 -> 2 -> NULL
# 2 -> 0 -> 1 -> 3 -> NULL
# 3 -> 3 -> NULL

# Isso mostra que o grafo tem quatro vértices (0, 1, 2 e 3) e seis arestas (0-1, 0-2, 1-2, 2-0, 2-3 e 3-3).
