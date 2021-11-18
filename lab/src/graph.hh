#ifndef __GRAPH_HH__
#define __GRAPH_HH__

#include <stdio.h>
#include <cassert>
#include <vector>

class GraphVec{

public:
    GraphVec(int _N) : N(_N), graph(new std::vector<int>[_N+1]){}
    
public:
    void addEdge(int _node, int* _edges, int _length){
        assert(_node !=0 && _node<=N);
        for(int i=0; i<_length; i++){
            graph[_node].push_back(_edges[i]);
        }
    }

    void printGraph(){
        for(int i=1; i<=N; i++){
            printf("Node %d: ", i);
            for(auto it=graph[i].begin(); it!=graph[i].end(); it++){
                printf("%d ", (*it));
            }
            printf("\n");
        }
    }

    int size() { return N; }
    std::vector<int>& operator[] (const int rhs) { return graph[rhs]; }

private:
    int N;
    std::vector<int>* graph;

};

#endif