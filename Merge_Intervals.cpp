#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of pairs : ";
    cin >> n;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end());
    stack<pair<int,int>>s;
    for(int i=1;i<n;i++)
    {
        int start1=s.top().first;
        int end1=s.top().second;
        int start2=a[i].first;
        int end2=a[i].second;
        if(end1<start2)
            s.push({start2,end2});
        else{
            s.pop();
            end1=max(end1,end2);
            s.push({start1,end1});
        }
    }
    while(!s.empty()){
        cout << s.top().first <<" " << s.top().second << endl;
        s.pop();
    }
    return 0;
}


/*
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergedIntervals;
        if(intervals.size()==0)
        {
            return mergedIntervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>tempIntervals=intervals[0];
        for(auto it:intervals){
            if(it[0]<=tempIntervals[1]){
                tempIntervals[1]=max(it[1],tempIntervals[1]);
            }
            else{
                mergedIntervals.push_back(tempIntervals);
                tempIntervals=it;
            }
        }
        mergedIntervals.push_back(tempIntervals);
        return mergedIntervals;
    }
};
*/