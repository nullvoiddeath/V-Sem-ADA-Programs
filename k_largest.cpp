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
                int big = i;
                for( int j = i+1; j < n; j++)
                        if(a[j] > a[big])
                                big = j;
                int temp = a[i];
                a[i] = a[big];
                a[big] = temp;
        }
        for(int i = 0; i < k; i++)
		cout<<a[i]<<" ";
	cout<<endl;
        return 0;
}

