#include<bits/stdc++.h>
using namespace std;
int c[100][100], n;
void Floyds(){
	for(int k=1;k<=n;k++)
		for(int i =1; i<=n; i++)
			for(int j = 1; j<=n ; j++)
				c[i][j] = min(c[i][j], c[i][k] + c[k][j]);

	cout<<"\nShortesr path pair matrix is: \n";
	for(int i =1; i<=n;i++)
	{
		for(int j=1; j<=n;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
}


int main(){
	cout<<"Enter size: ";
	cin>>n;
	cout<<"Enter matrix: \n";
	for(int i =1;i<=n;i++)
		for(int j =1; j<=n;j++)
			{
				cin>>c[i][j];
				if(c[i][j] == -1)
					c[i][j] = 10000;
			}
	Floyds();
	return 0;
}
