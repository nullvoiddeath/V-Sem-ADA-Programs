#include<bits/stdc++.h>
using namespace std;
int visited[100], adj[100][100], n;

void DFSearch(int v)
{	cout<<v+1<<" ";
	visited[v]  = 1;
	for(int i = 0; i < n; i++)
	{
		if(adj[v][i] == 1 and visited[i] == 0)
			DFSearch(i);
	}
	cout<<"\n";
	
}

int main()
{
	cout<<"Enter the number of elements: ";
	cin>>n;
	for(int i = 0; i < n; i++)
		visited[i] = 0;
	cout<<"Enter the adjacent matrix: ";
	for(int i = 0; i < n ; i++)
		for(int j = 0; j < n ; j++)
			cin>>adj[i][j];
	cout<<endl;
	for(int i = 0; i < n; i++)
		if(visited[i] == 0)
			DFSearch(i);
	return 0;
	
}

