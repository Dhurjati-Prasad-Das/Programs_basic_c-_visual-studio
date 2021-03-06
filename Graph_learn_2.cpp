#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
      public:
      int V;
      list<int> *adj;
      Graph(int V );
      void addEdge(int u,int v);
      void BFS(int s);
};
Graph::Graph(int V){
    this->V=V;
    this->adj=new list<int>[V];
}
void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
}
void Graph::BFS(int s){
    bool *visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    list<int> queue;
    visited[s]=true;
    queue.push_back(s);
    list<int>::iterator iter1;
    while(!queue.empty()){
            s=queue.front();
            cout<<s<<" ";
            queue.pop_front();
            for(iter1=adj[s].begin();iter1!=adj[s].end();++iter1){
                if(!visited[*iter1]){
                    visited[*iter1]=true;
                    queue.push_back(*iter1);
                }
            }
    }


}
int main()
{
    // Create a graph given in the above diagram
    int num;
    cin>>num;
    Graph g(num);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
 
    return 0;
}