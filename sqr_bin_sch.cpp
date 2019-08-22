#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,low,high,mid;
	cout<<"Enter the number: ";
	cin>>n;
	low = 1;
	high = n;
	mid = (low+high)/2;
	while(low <= high)
	{
		if((mid*mid) == n)
			{
				cout<<"\nSquare root is: "<<mid<<endl;
				return 0;
			}
		else if((mid*mid)>n)
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low+high)/2;
	}
	cout<<"\nSquare root exist between "<<mid<<" and "<<mid+1<<endl;
	return 0;
}
