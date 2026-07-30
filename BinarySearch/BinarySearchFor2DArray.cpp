#include <bits/stdc++.h>
using namespace std;

bool binarySearch2d(vector<vector<int>> &arr, int k)

{
    int n=arr.size();
    int m=arr[0].size();
    int low=0,high=n*m-1;
    while(low<=high){
        int guess=(low+high)/2;
        int row=guess/m;
        int col=guess%m;
        if(arr[row][col]==k) return true;
        else if(arr[row][col]<k){
            low=guess+1;
        }
        else{
            high=guess-1;

        }
    }
    return false;
}

int main()
{
    vector<vector<int>> nums = {{1, 2, 5, 7, 10},
                                {11, 13, 15, 20, 21},
                                {23, 27, 30, 33, 35},
                                {40, 43, 50, 52, 60}};

    int target = 33;
    cout << binarySearch2d(nums, target) << endl;

    return 0;
}