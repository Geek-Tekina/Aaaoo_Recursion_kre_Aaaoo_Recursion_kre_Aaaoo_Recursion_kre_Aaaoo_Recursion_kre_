#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumarr(int size,int arr[]){

    //base condition

    if (size == 1) 
    return arr[size-1];

    return arr[size-1] + sumarr(size-1, arr);
}

int main(){

    int size = 5;
    int arr[5] = {3,2,5,1,0};

    int ans = sumarr(size,arr);

    cout << ans << endl;
    return 0;
}