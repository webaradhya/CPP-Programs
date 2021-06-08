// C++ program to find a triplet using Hashing
#include <bits/stdc++.h>
using namespace std;

// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int n, int X)
{
    //Your Code Here
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        int l=i+1;int r=n-1;
        while(l<r)
        {
            if(A[i]+A[l]+A[r]==X)
                return 1;
            
            else if(A[i]+A[l]+A[r]>X)
                r--;
            
            else
                l++;
        }
    }
    return 0;
}
/* Driver program to test above function */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 22;
	int arr_size = sizeof(A) / sizeof(A[0]);

	find3Numbers(A, arr_size, sum);

	return 0;
}
