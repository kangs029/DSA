/*
Search an element in a agnostic(don't know ascending/descending order) array, return the index of that element if found otherwise return -1
*/
#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;

int searchElement(vector<int> &nums, int k){
    if(nums.size()==1 && nums[0]==k){
        return 0;
    }
    if(nums[0]< nums[1]){ // ascending
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==k){
                return mid;
            }else if(nums[mid]<k){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    else//descending
    {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==k){
                return mid;
            }else if(nums[mid]<k){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return -1;
    }
}

int main(){
    vector<int> search ={2,4,5,6,7};
    cout<<"index of the element '6' is equal to: "<<searchElement(search,6);
}
