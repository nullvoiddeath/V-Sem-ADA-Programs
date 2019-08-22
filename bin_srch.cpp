#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int n,mid,low,high,a[100],k;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Array is: ";
	for(int i=0;i<n;i++)
	{
		a[i]=rand() % 200 + 1;
		cout<<a[i]<<" ";
	}
	for(int i =0; i <n ; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i]<a[j])
			{
				int temp = a[i];
				    a[i] = a[j];
				    a[j] = temp;
			}
		}
	}	
	cout<<"\nSorted Array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the element to be searched: ";
	cin>>k;
	low = 0;
	high = n-1;
	while( low <= high)
	{	mid=(low+high)/2;
		if( k == a[mid])
		{
			cout<<"1"<<"\n";
			return 0;
		}
		else if( k < a[mid])
			high = mid - 1;
		else 
			low = mid + 1;
		
	}
	cout<<"-1";
	
	return 0;
}
