#include<iostream>
using namespace std;
class KadaneAlgo{
    public:
    int maxSubArraySum(int arr[] , int n){
        int meh=0,msf=0;
        for(int i=0;i<n;i++)
        {
            meh=meh+arr[i];
            if(meh<arr[i])
                meh=arr[i];
            if(msf<meh)
                msf=meh;
        }
        return msf;
    }
};
int main()
{
    int n=5;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    KadaneAlgo obj;
    obj.maxSubArraySum(arr,n)
    return 0;
}