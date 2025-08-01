#include<iostream>
using namespace std;

int friendPairing(int n){
    if(n==1 || n==2){
        return n;
    }

    return friendPairing(n-1) + (n-1) * friendPairing(n-2);
}
int main(){
    cout << friendPairing(4) << endl;
} 