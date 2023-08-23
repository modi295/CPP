#include <bits/stdc++.h> 
using namespace std;


int largestElement(vector<int> &arr, int n) {   //find largest element from array
    // Write your code here.
    sort(arr.begin(),arr.end());
    return arr[n-1];
    
}
vector<int> getSecondOrderElements(int n, vector<int> a) {    //find second largest and smallest element
    // Write your code here. 
    vector<int>x;
    sort(a.begin(),a.end());
    x.push_back(a[n-2]);
    x.push_back(a[1]);
    return x;
}

bool check(vector<int>& nums) {            //check array is sorted and rotated 
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
    }

int removeDuplicates(vector<int>& nums) {   //remove duplicate from the array
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }    

 void rotate(vector<int>& nums, int k) {            //rotate array from k place
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
        
    }    

    // std::rotate(nums.begin(),nums.begin()+nums.size()-k, nums.end());    method also used to rotate right [back to front]
    // std::rotate(nums.begin(),nums.begin()+k, nums.end());                method also used to rotate left  [front to back]