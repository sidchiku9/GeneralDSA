#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int v = 4;
    vector<int> adjList[v];
    addEdge(adjList, 0 , 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 3);
    return 0;
}