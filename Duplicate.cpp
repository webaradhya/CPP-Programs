/*ALGORITHM
1. Traverse the array from start to end.
2. For every element,take its absolute value and if the abs(array[i])‘th element is positive, the element has not
   encountered before,else if negative the element has been encountered before print the absolute value of the current element.
*/
#include<iostream>
using namespace std;
class Duplicate{
    public:
    int DuplicateNum(int arr[])
    {
        cout << "The Duplicate Elements are:";
        for(int i=0;i<5;i++)
        {
            if (arr[abs(arr[i])] >= 0)
                arr[abs(arr[i])] = -arr[abs(arr[i])];
            else
                cout << abs(arr[i]) << " ";
        }
        return -1;
    }
};
int main()
{
    int arr[5];
    for(int i=0;i<5;++i)
    {
        cout << "Array Element at position"<< i <<"is : ";
        cin >> arr[i];
    }
    Duplicate obj1;
    obj1.DuplicateNum(arr);
    return 0;
}