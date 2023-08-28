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


     void moveZeroes(vector<int>& nums) {          //Move zero at the of the array
        vector<int>a;
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0||nums[i]<0){
                a.push_back(nums[i]);
            }
            else{
                x++;
            }
        }
        for(int i=0;i<x;i++){
            a.push_back(0);
        }
        for (int i = 0; i < nums.size(); i++) {
        swap(nums[i], a[i]);
    }
    }



vector < int > sortedArray(vector < int > a, vector < int > b) { // union of array
    // Write your code here
    set<int> x;
    for(int i=0;i<a.size();i++){
        x.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        x.insert(b[i]);
    }

    vector<int>a;
    for(auto it : x){
		a.push_back(it);
	}
	return a;   
   
}

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) //intersection of array
{
	// Write your code here.
	vector<int>a;
	set<int>x;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr1[i]==arr2[j]){
				x.insert(arr1[i]);
			}
		}
	}
	for(auto it : x){
		a.push_back(it);
	}
	return a;
}

// Input: nums = [0,1]
// Output: 2
// Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

 int missingNumber(vector<int>& nums) {    //missing number in array
        int n=nums.size();
        int sum=0;
        int s2=n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return s2-sum;
    }

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

int findMaxConsecutiveOnes(vector<int>& nums) {     //find consicutive 1's in array
        int count=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                res=max(res,count);
                count=0;
                
            }
        }
        res=max(count,res);
        return res;
    }    

 int singleNumber(vector<int>& nums) {   //find the number that appear once in array
       int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }    