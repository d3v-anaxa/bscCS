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
