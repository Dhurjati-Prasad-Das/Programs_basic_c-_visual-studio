#include<iostream>
#include<list>
using namespace std;
enum Color{White,Gray,Black};
class Graph{
    private:
    int V;
    list<int> *adj;
    bool DFSUtil(int s,int colors[]);
    public:
    Graph(int);
    void addEdge(int u,int v);
    bool isCyclic();
};
Graph::Graph(int v){
    this->V=v;
    this->adj=new list<int> [V];
}
void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
}
bool Graph::isCyclic(){
    int *colors=new int[V];
    for(int i=0;i<V;i++){
       colors[i]=White;
    }
    for(int i=0;i<V;i++){
        if(colors[i]==White){
            if(DFSUtil(i,colors)==true){
                return true;
            }
        }
    }
    return false;   
}
bool Graph::DFSUtil(int u,int colors[]){
    colors[u]=Gray;
    list<int>::iterator i;
    for(i=adj[u].begin();i!=adj[u].end();++i){
        int v=*i;
        if(colors[v]==Gray){
            return true;
        }
        if((colors[v]==White) && DFSUtil(v,colors)){
            return true;
        }
    }
    colors[u]=Black;
    return false;
}
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
  
    if (g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
  
    return 0;
}
