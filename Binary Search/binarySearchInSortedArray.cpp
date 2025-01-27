/*
Search an element in an array, return the index of that element if found otherwise return -1
*/
#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;

int searchElement(vector<int> &nums, int k){
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
    return -1;
}

int main(){
    vector<int> search ={2,4,5,6,7};
    cout<<"index of the element '6' is equal to: "<<searchElement(search,6);
}
