#include<iostream>
using namespace std;
int main()
{
	int n, a[100];
	cout<<"Enter number of element: ";
	cin>>n;
	cout<<"Enter the array:";
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int big = a[0];
	for(int i=1 ; i<n ; i++)
	{
		if(big < a[i])
		   big=a[i];
	}
	cout<<"Biggest element is: "<<big<<"\n";
	return 0;
}
