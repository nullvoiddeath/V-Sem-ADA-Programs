#include<bits/stdc++.h>
using namespace std;


int Partition(int A[], int l, int r)
{
	int p = A[l];
	int i = l+1;
	int j = r;
	while(1)
	{
		while(A[i]<=p  && i<=r){i++;}
		while(A[j]>p && j>=l){j--;}
		if(i<j)
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = A[i];
			}
		else
		{
			A[l]=A[j];
			A[j]=p;
			return j;
		}
	}
}

void QuickSort(int A[], int l, int r)
{	
	int s;
	if(l<r)
		{
			s = Partition(A, l, r);
			QuickSort(A, l, s-1);
			QuickSort(A, s+1, r);
		}
}


int main()
{
	int n, A[100];
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"\nEnter elements: ";
	for(int i = 0; i<n ; i++)
		cin>>A[i];
	cout<<"\n\nUnsorted Array: ";
	for(int i = 0; i<n ; i++)
		cout<<A[i]<<" ";
	cout<<"\n\nSorting . . .";
	QuickSort(A, 0, n);
	cout<<"\n\nSorted Array: ";
	for(int i = 0; i<n ; i++)
                cout<<A[i]<<" ";
	cout<<endl;
	return 0;
}
