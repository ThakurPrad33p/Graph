#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edge;
    cout<<"Vertex: ";
    cin>>vertex;
    cout<<"Edge: ";
    cin>>edge;

    vector<vector<bool>>adjMat(vertex, vector<bool>(vertex,0));

    int u,v;
    for(int i=0; i<edge; i++){  
        cout<<"Edge is: ";
        cin>>u>>v;      
        adjMat[u][v] =1;
        adjMat[v][u] =1;
    }

    for(int i=0;i<vertex;i++){
        for(int j=0; j<vertex;j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
}