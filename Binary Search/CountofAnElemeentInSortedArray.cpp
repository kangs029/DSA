/*
Search an element in a sorted array, return its first and last occurnace index of that element if found otherwise return -1
*/
#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;

int firstOccurnace(vector<int> &nums, int k){
    int start=0,end=nums.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==k){
            ans=mid;
            end=mid-1;;
        }else if(nums[mid]<k){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int lastOccurnace(vector<int> &nums, int k){
    int start=0,end=nums.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==k){
            ans=mid;
            start=mid+1;;
        }else if(nums[mid]<k){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int countOfAnElement(vector<int> &nums, int k){
    int firstOcuur=firstOccurnace(nums,k);
    int lastOccur=lastOccurnace(nums,k);
    if(firstOcuur==-1){
        return 0;
    }
    if(lastOccur==-1){
        return 0;
    }
    return lastOccur-firstOcuur+1;
}

int main(){
    vector<int> search ={2,4,5,6,6,6,7};
    cout<<"count of the element '6' is equal to: "<<countOfAnElement(search,6)<<"\n";
    cout<<"count of the element '3' is equal to: "<<countOfAnElement(search,3);
}
