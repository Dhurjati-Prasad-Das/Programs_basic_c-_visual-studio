#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
       int Vertices;
       list<int> *adj;
       void DFSUtil(int u,bool visited[]);
       public:
       Graph(int V);
       void addEdge(int u,int v);
       int countTree();
};
Graph::Graph(int V){
    this->Vertices=V;
    this->adj=new list<int> [V];
}
void Graph::addEdge(int u,int v ){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int Graph::countTree(){
    int count=0;
    bool *visited=new bool[Vertices];
    for(int i=0;i<Vertices;i++){
        visited[i]=false;
    }
    for(int i=0;i<Vertices;i++){
        if(!visited[i]){
            count++;
            DFSUtil(i,visited);
        }
    }
    return count;
}
void Graph::DFSUtil(int u,bool visited[]){
          if(visited[u]){
              return;
          }
          visited[u]=true;
          list<int>::iterator i;
          for(i=adj[u].begin();i!=adj[u].end();++i){
              if(!visited[*i]){
                  DFSUtil(*i,visited);
              }
          }
}
int main()
{
    int V = 10;
    //vector<int> adj[V];
    Graph obj(V);
    obj.addEdge( 0, 1);
    obj.addEdge(0, 2);
    obj.addEdge( 3, 4);
    obj.addEdge( 4, 5);
    obj.addEdge(4, 6);
    obj.addEdge( 7, 8);
    
    cout << obj.countTree();
    return 0;
}