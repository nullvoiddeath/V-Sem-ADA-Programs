#include<iostream>
using namespace std;
int main()
{
	int n,mid,low,high,a[100],k;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	cout<<"Enter the element to be searched: ";
	cin>>k;
	low = 0;
	high = n-1;
	while( low <= high)
	{	mid=(low+high)/2;
		if( k == a[mid])
		{
			cout<<"Element found at: "<<mid+1<<"\n";
			return 0;
		}
		else if( k < a[mid])
			high = mid - 1;
		else 
			low = mid + 1;
		
	}
	cout<<"Element not found!\n";
	return 0;
}
