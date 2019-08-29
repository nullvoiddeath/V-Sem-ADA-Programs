#include<bits/stdc++.h>
using namespace std;
int a[100], A[100], b[100]
void bubble()
{
	for(long long int m = 0; m < i-2 ; m++)
		{
			for(long long int n = 0; n<i-m-2 ; n++)
			{
				if(a[n] > a[n+1])
					{
						int temp = a[n];
						a[n] = a[n+1];
						a[n+1] = temp;
					}
			}
		}
}
