#include "graph.hh"
#include "dfs.hh"
#include "bfs.hh"

/*
    1 2 3 4 5 6 7 8 9
  1 - * * * - - - - -
  2 * - * - - - - * -
  3 * * - * - - - - -
  4 * - * - * - - - -
  5 - - - * - * * * -
  6 - - - - * - * - -
  7 - - - - * * - - -
  8 - * - - * - - - *
  9 - - - - - - - * -

"*" : True, meaning that node is connected.
"-" : False, meaning that node is not connected.
*/ 

int main(){

  GraphVec gv(9);

  int edge1[] = {2, 3, 4};
  int edge2[] = {1, 3, 8};
  int edge3[] = {1, 2, 4};
  int edge4[] = {1, 3, 5};
  int edge5[] = {4, 6, 7, 8};
  int edge6[] = {5, 7};
  int edge7[] = {5, 6};
  int edge8[] = {2, 5, 9};
  int edge9[] = {8};

  gv.addEdge(2, edge2, 3);
  gv.addEdge(1, edge1, 3);
  gv.addEdge(3, edge3, 3);
  gv.addEdge(4, edge4, 3);
  gv.addEdge(5, edge5, 4);
  gv.addEdge(6, edge6, 2);
  gv.addEdge(7, edge7, 2);
  gv.addEdge(8, edge8, 3);
  gv.addEdge(9, edge9, 1);

#ifdef GRAPH
  gv.printGraph();
#endif
    
#ifdef DFS
  runDFS(4, gv);
#endif 

#ifdef BFS
  runBFS(4, gv);
#endif
}