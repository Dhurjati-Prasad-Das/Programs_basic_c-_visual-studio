#include<vector>
#include<iostream>
using namespace std;
int Nodes=5;
void addEdge(vector<int> k[],int source,int destination);
void printEdge(vector<int> k[],int total);
void printEdge(vector<int> k[],int total){
    for(int i=0;i<total;i++){
        vector<int>::iterator x;
        for(x=k[i].begin();x!=k[i].end();++x){
             cout<<*x<<"\t";
        }
        cout<<endl;
    }
}
void addEdge(vector<int> k[],int source,int destination){
    k[source].push_back(destination);
}
int main(){
    vector<int> adj[5];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printEdge(adj,Nodes);
}