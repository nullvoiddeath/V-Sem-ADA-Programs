#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[100];
	srand(time(NULL));
	cout<<"Enter number of element: ";
	cin>>n;
	cout<<"Array is:";
	for(int i = 0; i < n; i++)
	{
		a[i]=rand() % 500 + 1;
		cout<<a[i]<<" ";
	}
	int big = a[0];
	for(int i=1 ; i<n ; i++)
	{
		if(big < a[i])
		   big=a[i];
	}
	cout<<"\nBiggest element is: "<<big<<"\n";
	return 0;
}
