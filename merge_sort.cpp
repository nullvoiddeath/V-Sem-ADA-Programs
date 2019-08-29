#include<bits/stdc++.h>
using namespace std;
int A[100];
void Merge(int low, int mid, int high)
{
	int i = low;
	int j =mid+1;
	int k = low;
	int C[100];
	while(i<=mid && j<=high)
	{
		if(A[i]<A[j])
		{
			C[k] = A[i];
			i++;
		}
		else
		{
			C[k] = A[j];
			j++;
		}
		k++;
	}
	if( i > mid)
		while(j <= high)
		{
			C[k] = A[j];
			k++;
			j++;
		}
	if ( j > high)
		while(i <= mid)
		{
			C[k] = A[i];
			k++;
			i++;
		}
	for(int i = low; i <= high; i++)
		A[i] = C[i];
}
void MergeSort(int low, int high)
{
 	
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		MergeSort(low, mid);
		MergeSort(mid+1, high);
		Merge(low, mid, high);
	}	
	
}


int main()
{
	int n;
	cout<<"Enter Array size: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i = 0; i <n; i++)
		cin>>A[i];
	//int temp = A[n-1];
	MergeSort(0, n-1);
	cout<<"\n\nSorted: ";
	for(int i = 0;i<n;i++)
		cout<<A[i]<<" ";
	
	return 0;
}
