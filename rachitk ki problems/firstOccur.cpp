#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> arr, int i, int target){
    if(i == arr.size()){
        return -1;
    } 
    if(arr[i] == target){
        return i;
    } 

    return firstOccurence(arr, i+1, target);
}

int main(){
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    cout << firstOccurence(arr, 0, 3);
}