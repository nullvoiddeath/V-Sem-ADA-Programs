#include<bits/stdc++.h>
#define R 3
#define C 5
using namespace std;


int isSafe(int M[][C], int r, int c, bool visited[][C])
{
	return (r>=0) && (r<R) && (c>=0) && (c<C) && (M[r][c]) && (!visited[r][c]);
}

void DFSearch(int M[][C], int r, int c, bool visited[][C])
{
	static int rN[] = {-1, -1, -1, 0, 0, 1, 1, 1};
	static int cN[] = {-1, 0, 1, -1, 1, -1, 0, 1};
	visited[r][c] = 1;
	for( int k = 0; k<8; k++)
		if(isSafe(M, r + rN[k], c + cN[k], visited))
			DFSearch(M, r + rN[k], c + cN[k], visited);
	
}

int CountI(int M[][C])
{
	bool visited[R][C];
	for(int i=0; i<R; i++)
		for(int j=0;j<C;j++)
			visited[i][j] = 0;
	int count = 0;
	for(int i= 0; i<R; i++)
		for(int j = 0 ; j<C; j++)
			{
				if(M[i][j] && !visited[i][j])
					{
						DFSearch(M, i, j, visited);
						count++;
					}					
			}	
	return count;
}





int main()
{	int M[R][C];
	cout<<"Enter the matrix 3x5:\n";
	for(int i = 0; i<R; i++)
		for(int j=0 ;j<C;j++)
			cin>>M[i][j];
	int c = CountI(M);
	
	cout<<"\nNumer of Islands: "<<c<<endl;
	return 0;
}
