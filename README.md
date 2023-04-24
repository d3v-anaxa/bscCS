# Semester-2 CMSA notes and source code

## Lecture notes

### APR 13, 2023 ---------------------------------> PM

**BOOK NAME ->**
   - Discrete Mathematics (by Rosen)
   - Graph theory (by N. Deo)

```
G(V, E) -> Equation of graph
|V| = Set of vertices
|E| = set of edges
```
**RELATION BETWEEN DEGREE OF VERTICES AND COUNT OF EDGES OF A SIMPLE GRAPH**

$$
    \left(\sum_{i = 1}^n d\left(v\right)\right) = 2 \lvert E \rvert
$$

* DEFINE : 
    - Parallel Edge, Self Loop, Konigsberg Bridge Problem, Incidence & Degree, Complete Graph, Pendent Vertex
    - Open walk, Closed walk, Terminal Vertices, Simple path, Circuit, Connected and Disconnected Graph
    - Arbitary traceable graph 

* PROVE : 
    - The number of vertices of odd degree of a graph is always even

**THEOREM : A given connected graph G is an euler graph if and only if all vertices of g are of even degree**

* Simple graph -> Excludes self loop and parallel edge

* Conditions to determine Isomorphic graph :
    - Same number of vertices
    - Same number of edges
    - Equal number of vertices given degree
    - **[NOTE : Position matters for two graphs to identify as isomorphic graphs]**

* Euler graph :
    - *_def_* : A closed graph walk running through every edge of G(graph) exactly once (Euler Line), and the graph that consists of an euler line is called Euler graph.
    - *_condition of Euler line_* : Every vertex has even degree.
    
* Unicursal Graph : 
    - *_def_* : An open graph walk running through every edge of G(graph) exactly once (Unicursal Line), and the graph that consists of an Unicursal line is called Unicursal graph.

**DIARGAM :**

    Sub-graph G 
          |---> WALK G                 
                  |----> CIRCUIT G
                  |----> PATH G        


**SUMARY DIARGAM :**
    
    WALK
      |----> CLOSED WALK
      |         |---------> Euler line ---> Arbitary traceable line
      |         |---------> Circuit ------> Hamiltonian Circuit
      | 
      |----> OPEN WALK
                |---------> Unicursal line
                |---------> Path
                              |-----------> Hamiltonian Path

* PROBLEM : UNION, INTERSECTION, RING-SUM OF GRAPH

### APR 18, 2023 ---------------------------------> PM

**REFERENCE ->**
   - Graph theory (by N. Deo) -> [Pg. No. 40~91 , Ch 7 (partial)]

**DEFINE :**
   - Connected Graphs, Disconnected Graphs & Components
   - Trees, Decision/Sorting Trees
   - Distance and Center(s) in a tree
   - Eccentricity in graph
   - Rooted and Binary Trees   
   - Relation of Nodes and Levels in Binary Tree $l_{max}=\frac{n - 1}{2}$ 
   - Spanning Trees
   - rank $r = n - k \left(Components\right)$
   - nullity $\mu = e - n + k$ 
   - $rank_r + nulitty_\mu = edges_e$
   - Matrix Representation of Graphs [CHAPTER 7]
   - Incidence Matrix, Circuit Matrix, Path Matrix, Adjacency Matrix, 

**THEOREM :**
   - Any connected graph with n vertices and n - 1 edges is a tree.
   - A graph is a tree if and only if it is minimally connected.
   - A graph G with n vertices, n − 1 edges, and no circuits is connected.

**[NOTE : The nullity of a graph is also referred to as its cyclomatic number, or first Betti number.]**


### APR 24, 2023 ---------------------------------> PM


**REFERENCE ->**
   - Graph theory (by N. Deo) -> [Pg. No. 62 (Ch 3/partial/), 68-79 (Ch 4 /partial/), 302 (Ch 11 /partial/)]

**DEFINE :**
   - Cut-set, Chromatic number
   - Edge-Connectivity, Vertex-Connectivity, Seperable Graph
   - Prim's algorithm, Kruskal's algorithm [Pg. No. 62 /para 3 & 4/]
   - BFS (Breadth-First Search), DFS (Depth-First Search) [Pg. No. 302]

**THEOREM :**
   - A tree can have a maximum of 2 chromatic number / vertices
