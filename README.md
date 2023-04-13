# Semester-2 CMSA notes and source code

## Lecture notes

### APR 13, 2023 ---------------------------------> PM

Discrete Mathematics vy Rosen 
G(V, E) -> Equation of graph
V = Set of vertices
E = set of edges

DEFINE : Parallel Edge, Self Loop, Konigsberg Bridge Problem, Incidence & Degree, Complete Graph, Pendent Vertex

Simple graph -> Excludes self loop and parallel edge

PROVE : The number of vertices of odd degree of a graph is always even
$$
    n∑i=1di=2|E|
$$

Conditions to determine Isomorphic graph :
- Same number of vertices
- Same number of edges
- Equal number of vertices given degree
(position matters for two graphs to identify as isomorphic graph)

DEFINE : Open walk, Closed walk, Terminal Vertices, Simple path

DEFINE : Circuit, CONNECTED & DISCONNECTED GRAPH

DIARGAM : 
    
    Sub-graph G 
          |---> WALK G                 
                  |----> CIRCUIT G
                  |----> PATH G        

Euler graph : a closed graph walk running through every edge of G(graph) exactly once (Euler Line), and the graph that consists of an euler line is called Euler graph
Condition of Euler line : degree of every vertex is even

THEOREM : A given connected graph G is an euler graph if and only if all vertices of g are of even degree

Unicursal Graph : A open graph walk running through every edge of G(graph) exactly once (Unicursal Line), and the graph that consists of an Unicursal line is called Unicursal graph

DEFINE : Arbitary traceable graph 

PROBLEM : UNION, INTERSECTION, RING-SUM OF GRAPH

SUMARY DIARGAM :
    
    WALK
      |----> CLOSED WALK
      |         |---------> Euler line ---> Arbitary traceable line
      |         |---------> Circuit ------> Hamiltonian Circuit
      | 
      |----> OPEN WALK
                |---------> Unicursal line
                |---------> Path
                              |-----------> Hamiltonian Path
