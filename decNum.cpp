#include<iostream>
using namespace std;


void print(int n){
    if(n==0){
        return;
    }

    cout<< n << " ";// kaaam karo bhai
    print(n-1); //faith ki bhai iss condition tak print kar hi dega
}
int main(){
    print(5);
}