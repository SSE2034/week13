#ifndef __DFS_HH__
#define __DFS_HH__

#include <stack>

#include "graph.hh"


void runDFS(int _start, GraphVec& _gv, int _length){

    bool* is_visited = new bool[_gv.size()];
    std::fill(is_visited, is_visited+_gv.size(), false);

    std::stack<int> dfs_stack;

    // 1. Start node
    dfs_stack.push(_start);
    is_visited[_start] = true;
    
    // FIXME: limit the number of visited nodes
    while(!dfs_stack.empty()){

        int cur_node = dfs_stack.top();
        printf("%d ", cur_node);
        dfs_stack.pop();
        for(int i=0; i<_gv[cur_node].size(); i++){
            int next_node = _gv[cur_node][i];
            
            if(is_visited[next_node]==false){
                dfs_stack.push(next_node);
                is_visited[next_node]=true;
            }
        }
    }
}

#endif