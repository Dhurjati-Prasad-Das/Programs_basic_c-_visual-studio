#include<iostream>
#include<list>
#include<cassert>
using namespace std;
class Graph{
      private:
      int No_of_vertices;
      list<int> *neighbours;
      void path_count(int src,int dest,int& pathcount);
      public:
      Graph(int vertices);
      void addEdge(int src,int dest);
      int count_paths(int src,int dest);
};
Graph::Graph(int vertices){
    this->No_of_vertices=vertices;
    this->neighbours=new list<int> [vertices];
}
void Graph::addEdge(int src,int dest){
     neighbours[src].push_back(dest);
}
int Graph::count_paths(int src,int dest){
    int pathcount=0;
    path_count(src,dest,pathcount);
    return pathcount;
}
void Graph::path_count(int src,int dest,int& pathcount){
    if(src==dest){
        pathcount++;
    }else{list<int>:: iterator i;
        for(i=neighbours[src].begin();i!=neighbours[src].end();++i){
            path_count(*i,dest,pathcount);
        }
    }
}
int main()
{
    // Create a graph given in the above diagram - see link
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    // Validate it...
    assert(3 == g.count_paths(0, 3));
    cout<<g.count_paths(0,3)<<endl;
 
    return 0;
}
