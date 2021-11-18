#ifndef __BFS_HH__
#define __BFS_HH__

#include <queue>

#include "graph.hh"


void runBFS(int _start, GraphVec& _gv, int _length){

    bool* is_visited = new bool[_gv.size()];
    std::fill(is_visited, is_visited+_gv.size(), false);

    std::queue<int> bfs_queue;

    // Start node
    bfs_queue.push(_start);
    is_visited[_start] = true;
    
    // FIXME: limit the number of visited nodes
    while(!bfs_queue.empty()){

        int cur_node = bfs_queue.front();
        printf("%d ", cur_node);
        bfs_queue.pop();
        for(int i=0; i<_gv[cur_node].size(); i++){
            int next_node = _gv[cur_node][i];

            if(is_visited[next_node]==false){
                bfs_queue.push(next_node);
                is_visited[next_node]=true;
            }
        }
    }
}

#endif