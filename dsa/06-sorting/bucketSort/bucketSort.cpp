#include<iostream>
#include <vector>
using namespace std;


void bucketSort(vector<int>& arr) {
    // Assuming arr only contains 0, 1 or 2
    int counts[] = {0, 0, 0};

    for (int n: arr) {
        counts[n]++;
    }

    int i = 0;
    for (int n = 0; n < 3; n++) {
        for (int j = 0; j < counts[n]; j++) {
            arr[i] = n;
            i++;
        }
    }
}

int main(){
    vector<int> nums={2,0,2,1,1,0};
    bucketSort(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

// TC: O(n)+O(n)=O(2n)=O(N) SC:O(C)->O(1)