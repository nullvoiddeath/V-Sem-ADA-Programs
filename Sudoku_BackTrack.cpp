#include<bits/stdc++.h>
#define N 9
#define SQN 3
#define NA 0
using namespace std;

//int  grid[N][N];

bool FindUnassigned( int grid[N][N], int &row, int &col)
{
	for(row=0; row<N; row++)
		for(col=0;col<N;col++)
			if(grid[row][col] == NA)
				return true;
	return false;
}

bool UsedInRow(int grid[N][N], int row, int col, int num)
{
	for(col=0; col<N; col++)
		if(grid[row][col] == num)
			return true;
	return false;
}

bool UsedInCol(int grid[N][N], int row, int col, int num)
{
	for(row=0; row<N; row++)
		if(grid[row][col] == num)
			return true;
	return false;
}

bool UsedInBox(int grid[N][N], int boxStartR, int boxStartC, int num)
{
	for(int row=0; row < SQN; row++)
		for(int col=0; col<SQN; col++)
			if(grid[row+boxStartR][col+boxStartC] == num)
				return true;
	return false;
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
	return !UsedInRow(grid, row, col, num) && !UsedInCol(grid, row, col, num) && !UsedInBox(grid, row - row%SQN, col - col%SQN, num);
}

bool SolveSudoku(int grid[N][N])
{
	int row, col;
	if(!FindUnassigned(grid, row, col))
		return true;
	for(int num =1 ; num<=N;num++)
		{
			if(isSafe(grid, row ,col, num))
			{
				grid[row][col] = num;
				if(SolveSudoku(grid))		
					return true;
				grid[row][col] = NA;
			}
		}
	return false;
}

int main()
{
	int  grid[N][N] = 		{{3, 0, 6, 5, 0, 8, 4, 0, 0}, 
					{5, 2, 0, 0, 0, 0, 0, 0, 0}, 
					{0, 8, 7, 0, 0, 0, 0, 3, 1}, 
					{0, 0, 3, 0, 1, 0, 0, 8, 0}, 
					{9, 0, 0, 8, 6, 3, 0, 0, 5}, 
					{0, 5, 0, 0, 9, 0, 6, 0, 0}, 
					{1, 3, 0, 0, 0, 0, 2, 5, 0}, 
					{0, 0, 0, 0, 0, 0, 0, 7, 4}, 
					{0, 0, 5, 2, 0, 6, 3, 0, 0}}; 
	if(SolveSudoku(grid))
		for(int i=0;i<N;i++)
		{	for(int j=0;j<N;j++)
				cout<<grid[i][j]<<" ";
			cout<<endl;
		}
	else
		cout<<"Solution not found";
	return 0;
}

