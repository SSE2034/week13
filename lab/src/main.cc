#include <iostream>

#include "graph.hh"
#include "dfs.hh"
#include "bfs.hh"

int main(){

  int length;
  std::cout << "Insert the length of search: ";
  std::cin >> length;

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

  printf("\n--------- DFS --------- \n");
  runDFS(4, gv, length);

  printf("\n\n--------- BFS --------- \n");
  runBFS(4, gv, length);

}