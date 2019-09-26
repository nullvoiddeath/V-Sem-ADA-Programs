#include<bits/stdc++.h>
using namespace std;
int A[100][100], indegree[100], n;

void SourceRemoval()
{
	for(int i=1; i<=n; i++)
	{
		indegree[i] = 0;
		for(int j=1; j<=n; j++)
			indegree[i]+=A[j][i];
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(indegree[j] == 0)
		{	cout<<j<<" ";
			indegree[j] = -1;
			for(int k=1;k<=n;k++)
				if(A[j][k] == 1)
					indegree[k]--;
		}
	}}
}

int main()
{
	cout<<"Enter the size of the matrix: ";
	cin>>n;
	cout<<"Enter the adjacency matrix:\n";
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			cin>>A[i][j];
	cout<<"Topological order is: ";
	SourceRemoval();
	cout<<endl;
}
