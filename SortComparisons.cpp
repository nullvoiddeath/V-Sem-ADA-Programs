#include<iostream>
using namespace std;
int count_s=0;
int count_b=0;
int count_m=0;
void merge(int B[],int B_size,int C[],int C_size,int A[])
{
	int i=0,j=0,k=0;
	while(i<B_size && j<C_size)
	{
		if(B[i]<C[j])
			A[k++]=B[i++];
		else
			A[k++]=C[j++];
		count_m++;
	}
	
	if(i==B_size)
	{
		while(j!=C_size)
			A[k++]=C[j++];
		count_m++;
	}
	
	else if(j==C_size)
	{
		while(i!=B_size)
			A[k++]=B[i++];
		count_m++;
	}
	
}

void mergesort(int A[],int n)
{
	int B[n];
	int C[n];
	int B_size=0,C_size=0;
	int index=0;
	for(int i=0;i<(n/2);i++)
		{
			B[index++]=A[i];
			B_size++;
		}
	index=0;
	for(int i=(n/2);i<n;i++)
	{
		C[index++]=A[i];
		C_size++;
	}
	/*cout<<"B : "<<B_size<<endl;
	cout<<"C : "<<C_size<<endl;*/
	if(B_size>1)
		mergesort(B,B_size);
	if(C_size>1)
		mergesort(C,C_size);
	merge(B,B_size,C,C_size,A);
}
void selection(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++){count_s++;
			if(arr[j]<arr[min])
				min=j;
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;		
	}
}

void bubble(int arr[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++){count_b++;
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
		}}
}
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter elements\n";
	int arr[n];
	int arr2[n];
	int arr3[n];
	
	for(int i=0;i<n;i++)
		{
			arr2[i]=arr[i];
			arr3[i]=arr[i];
		}
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	selection(arr,n);
	bubble(arr2,n);
	mergesort(arr3,n);
	cout<<"Comparisons are : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\nSelection : "<<count_s<<endl;
	cout<<"Bubble: "<<count_b<<endl;
	cout<<"Merge: "<<count_m <<endl;
	cout<<endl; 
}
