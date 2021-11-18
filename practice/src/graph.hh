#ifndef __GRAPH_HH__
#define __GRAPH_HH__

#include <stdio.h>
#include <cassert>
#include <vector>

class GraphVec{

public:
    GraphVec(int _N) : N(_N){}
    
public:
    void addEdge(int _node, int* _edges, int _length){
        assert(_node !=0 && _node<=N);
        // TODO: Fill your code here
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
    std::vector<int>& operator[] (const int idx) { return graph[idx]; }

private:
    int N;
    // TODO: Declare the vector container for graph and init it.

};

#endif