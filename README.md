# Complexidade de algoritmo
 
# Sobre

Codigos que eu fiz durante o curso.

# O que é complexidade de algoritmo

A complexidade de um algoritmo é uma medida da eficiência do algoritmo em relação ao seu tempo de execução e ao seu uso de memória. 

Ela é geralmente expressa em termos do tamanho da entrada do algoritmo, que pode ser o número de elementos em um array ou o número de vértices e arestas em um grafo, por exemplo.

Existem várias maneiras de medir a complexidade de um algoritmo, mas a mais comum é a notação O, que é usada para expressar a complexidade assintótica de um algoritmo. 

A complexidade assintótica é a medida da quantidade de tempo ou espaço que o algoritmo consome à medida que a entrada aumenta, tendendo ao infinito.

Por exemplo, se um algoritmo tem complexidade O(n), isso significa que o tempo de execução do algoritmo aumenta proporcionalmente ao tamanho da entrada (n). Se o algoritmo tem complexidade O(n^2), isso significa que o tempo de execução aumenta de maneira quadrática com o tamanho da entrada. 

Algoritmos com complexidade O(log n) são geralmente considerados muito eficientes, pois o tempo de execução aumenta de maneira logarítmica com o tamanho da entrada.

A complexidade de um algoritmo é importante porque quanto menor a complexidade, mais rápido o algoritmo será capaz de processar grandes conjuntos de dados. Por isso, ao escolher qual algoritmo usar para resolver um problema, é importante levar em consideração a complexidade do algoritmo e escolher aquele que tem a menor complexidade possível para o problema em questão.

# Como calcular a complexidade de algoritmo

Para calcular a complexidade de um algoritmo, é necessário identificar qual operação ou conjunto de operações tem o maior impacto no tempo de execução do algoritmo à medida que a entrada aumenta.

Para fazer isso, é comum usar a notação O para expressar a complexidade assintótica do algoritmo. 

A complexidade assintótica é a medida da quantidade de tempo ou espaço que o algoritmo consome à medida que a entrada aumenta, tendendo ao infinito.

Por exemplo, se um algoritmo tem um loop que percorre todos os elementos de um array, a complexidade desse algoritmo é O(n), onde n é o tamanho do array. 

Isso porque o tempo de execução do algoritmo aumenta proporcionalmente ao tamanho do array.

Se o algoritmo tem um loop dentro de outro loop, percorrendo todas as combinações possíveis entre os elementos dos dois arrays, a complexidade é O(n^2), pois o tempo de execução aumenta de maneira quadrática com o tamanho dos arrays.

Ao calcular a complexidade de um algoritmo, é importante levar em consideração apenas as operações que têm o maior impacto no tempo de execução. 

Por exemplo, se um algoritmo tem um loop de O(n) e outro de O(log n), a complexidade final do algoritmo é O(n), pois o loop de O(n) tem um impacto maior do que o loop de O(log n) à medida que n aumenta.

Para mais informações sobre como calcular a complexidade de um algoritmo, recomendo a leitura de materiais sobre análise de algoritmos ou consultar a documentação de bibliotecas e frameworks de programação, que geralmente incluem informações sobre a complexidade de seus métodos e funções.

# Grafos

## O que é

Um grafo é uma estrutura de dados que consiste em uma coleção de vértices (também chamados de nós) e arestas que conectam esses vértices. 

Ele é amplamente utilizado em diversas áreas, como ciência da computação, matemática e física, para representar relacionamentos entre diferentes elementos.

## Complexidade de Grafo

A complexidade de um grafo depende da sua estrutura e das operações que são realizadas nele. 

Algumas operações comuns em grafos e suas respectivas complexidades são:

    Adicionar um vértice: geralmente é O(1), pois basta adicionar o vértice ao grafo.

    Adicionar uma aresta: geralmente é O(1), pois basta adicionar a aresta ao grafo.

    Busca em largura (BFS): geralmente é O(V + E), onde V é o número de vértices e E é o número de arestas.

    Busca em profundidade (DFS): geralmente é O(V + E), onde V é o número de vértices e E é o número de arestas.

    Cálculo do menor caminho entre dois vértices: pode ser O(V^2) ou O(E log V) dependendo do algoritmo utilizado.

Observe que a complexidade pode variar dependendo da implementação do grafo e da forma como as operações são realizadas. 

Por exemplo, se o grafo for armazenado em uma matriz de adjacência ao invés de uma lista de adjacência, a complexidade de algumas operações pode ser diferente.

## Em Python

Em Python, existem diversas maneiras de implementar um grafo. 

Uma forma simples é criar uma classe Graph, que irá armazenar os vértices e as arestas em dicionários. 

Cada vértice pode ser representado como uma chave no dicionário, enquanto as arestas são armazenadas como uma lista de vértices adjacentes.

## Em linguagem C

Assim como em Python, existem diversas maneiras de implementar um grafo em C. 

Uma forma comum é criar uma estrutura de dados que represente os vértices do grafo e uma lista de adjacência para armazenar as arestas.

Essa estrutura armazena o dado do vértice e um ponteiro para o próximo vértice na lista de adjacência. 

A lista de adjacência pode ser implementada como um array de ponteiros para vértices.

Para adicionar uma aresta entre dois vértices, basta adicionar o vértice destino na lista de adjacência do vértice de origem.

Assim como em Python, é possível implementar diversas outras operações em um grafo em C, como busca em largura ou profundidade, cálculo do menor caminho entre dois vértices, etc. 