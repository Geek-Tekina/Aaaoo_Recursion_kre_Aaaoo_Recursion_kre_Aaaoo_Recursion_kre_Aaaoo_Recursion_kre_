#include<iostream>
using namespace std;

void print(int n) {
    if(n > 0) {
        // cout << n << " ";   // this will print in descending order
        print(n-1);
        cout << n << " ";   // this will print in ascending order 
    }
}


int main() {
    int n = 6;
    print(n);
}

