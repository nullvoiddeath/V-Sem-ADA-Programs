#include<bits/stdc++.h>
using namespace std;
int n, visited[100], adj[100][100];
void BFS(int v)
{
	cout<<v+1<<" ";
	visited[v] = 1;
	queue<int>q;
	q.push(v);
	while(!q.empty())
	{
		int W = q.front();
		q.pop();
		for(int i = 0; i < n; i++)
		{
			if(adj[W][i] && !visited[i])
				{
					q.push(i);
					visited[i] = 1;
					cout<<i + 1<<" ";
				}
		}
	}
}

int main()
{
	cout<<"Enter size: ";
	cin>>n;
	int m;
	cout<<"Enter no of edges: ";
	cin>>m;
	cout<<"Enter Edges: ";
	for(int i=0; i<n; i++)
		visited[i] = 0;	
	for(int i=0; i<m; i++)
	{	int v1, v2;
		cin>>v1>>v2;
		adj[v1 - 1][v2 - 1] = 1;
		adj[v2 - 1][v1 - 1] = 1;
	}	
	int src;
	cout<<"Enter source: ";
	cin>>src;
	cout<<"\nBFS is:";
	BFS(src-1);
	return 0;
}
