#include<bits/stdc++.h>
using namespace std;

void possible_subsets(char A[], int n)
{
	for(int i=0;i<(1<<n);i++)
	{
		cout<<"{";
		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))
				cout<<A[j]<<", ";
		}
		cout<<"}";
		cout<<"\n";
	}
}

int main()
{
	int n;
	cin>>n;
	char A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	possible_subsets(A,n);

	return 0;

}