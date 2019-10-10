#include<bits/stdc++.h>
using namespace std;
int size, V[100][100], capacity;
int Knapsack(int w[], int v[], int W)
{
	for(int i=0 ; i<=size; i++)
		V[i][0] = 0;
	for(int j=1; j<=W; j++)
		V[0][j] = 0;
	for(int i=1 ; i<=size; i++)
		for(int j=1; j<=W; j++)
		{
			if(j-w[i] >= 0)
				V[i][j] = max(V[i-1][j], v[i] + V[i-1][j-w[i]]);
			else
				V[i][j] = V[i-1][j];
		}
	return V[size][W];
}

int main()
{
	int weights[100], values[100];
	cout<<"Enter numer of items: ";
	cin>>size;
	cout<<"Enter item weights and corresponding values:\n";
	for(int i=1; i<=size; i++)
		{
			cin>>weights[i]>>values[i];
		}
	cout<<"Enter capacity: ";
	cin>>capacity;
	int maxval = Knapsack(weights, values, capacity);
	cout<<"Maximum values in the knapsack: "<<maxval<<endl;
	return 0;
}
