#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[50001];
	srand(time(NULL));
	clock_t start, end; 
	start = clock();
	for(long long int i = 500; i <= 50001; i+=5000)
	{
		for(long long int j = 0; j < i; j++)
	        {
        	        a[j]=rand() % i + 1;
               	}

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
		double time_taken = double(clock() - start) / double(CLOCKS_PER_SEC); 
		cout<<"Bubble sort for "<<i<<" elements: "<<time_taken<<setprecision(5)<<" sec"<<endl;
	}

}
