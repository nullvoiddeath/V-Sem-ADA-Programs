#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[100],k;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	cout<<"\nEnter the elements: ";
	for(int i = 0 ; i < n; i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter value of k: ";
	cin>>k;
	for( int i = 0; i < k; i++)
	{
		int small = i;
		for( int j = i+1; j < n; j++)
			if(a[j] < a[small])
				small = j;
		int temp = a[i];
		a[i] = a[small];
		a[small] = temp;
	}
	cout<<"\nkth smallest element is: "<<a[k-1]<<endl;
	return 0;
}
