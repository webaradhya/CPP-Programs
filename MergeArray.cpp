#include <bits/stdc++.h>
using namespace std;
class Merge{
    public:
    void MergeNum(int arr1[], int arr2[], int m, int n) {
	    // code here
	    int j = 0, i = n-1;
        while(j < m && i > -1 && arr2[j] < arr1[i]){
            swap(arr2[j++],arr1[i--]);
        }
        /*Here we take two parameters, the beginning of the
        array and the length n upto which we want the array to
        be sorted*/
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
	}
};
int main()
{
    int n=6,m=4;
    int arr1[n] ,arr2[m];
    cout << "Elements in arr1 are: ";
    for(int i=0;i<n;++i)
    {
        cin >> arr1[i];
    }
    cout << "Elements in arr2 are: ";
    for(int j=0;j<m;++j)
    {
        cin >> arr2[j];
    }
    Merge obj1;
    obj1.MergeNum(arr1,arr2,m,n);
    for(int i=0;i<n;i++)
    {
        cout << arr1[i] << " ";
    }
    for(int j=0;j<m;j++)
    {
        cout << arr2[j] << " ";
    }
    cout << "\n";
    return 0;
}