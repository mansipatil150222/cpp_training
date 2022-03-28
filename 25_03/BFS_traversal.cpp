#include<iostream>
#include<list>
using namespace std;
class Graph{
    int numVertices;
    list<int>* adjList;
    bool* visited;
    public:
        Graph(int vertices);
        void addEdge(int src,int dest);
        void BFS(int startVertex);
};
Graph::Graph(int vertices){
    numVertices = vertices;
    adjList = new list<int>[vertices];
}
void Graph::addEdge(int src,int dest){
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}
void Graph::BFS(int startVertex){
    visited = new bool [numVertices];
    for(int i=0;i<numVertices;i++)
        visited[i]=false;
    list<int> queue;
    visited[startVertex]=true;
    queue.push_back(startVertex);
    list<int>::iterator i;
    while(!queue.empty()){
        int currVertex = queue.front();
        cout<<"Visited "<<currVertex<<" ";
        queue.pop_front();
        for(i=adjList[currVertex].begin();i!=adjList[currVertex].end();++i){
            int adjVertex = *i;
            if(!visited[adj])

        }
    }

}