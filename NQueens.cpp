#include<bits/stdc++.h>
using namespace std;
int x[100];
int counter = 0;
bool place(int k, int i)
{
	for(int j =1; j<=k-1; j++)
	{
		if((x[j]==i) || abs(x[j]-i) == abs(j-k))
			return false;
	}
	return true;
}

void NQueens(int k, int n)
{
	for(int i = 1; i<=n; i++)
		{
			if(place(k,i))
				{
					x[k] = i;
					if(k==n)
						{
							cout<<"Solution number "<<++counter<<": "<<endl;
							for(int j=1; j<=n; j++)
								cout<<j<<" queen at: "<<x[j]<<endl;
							cout<<endl;
						}
					else
						NQueens(k+1, n);
				}
		}
}

int main()
{
	int num;
	cout<<"ENter the of queens: ";
	cin>>num;
	NQueens(1, num);
	return 0;
}
