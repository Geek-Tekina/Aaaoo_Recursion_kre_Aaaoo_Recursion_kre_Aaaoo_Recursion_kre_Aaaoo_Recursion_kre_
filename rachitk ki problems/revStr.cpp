#include<iostream>
using namespace std;


void reverse(string &str, int l, int r) {

    cout << "call received for " << str << endl;
    // base case
    if(l > r) {
        return ;
    }

    swap(str[l], str[r]);
    l++;
    r--;

    reverse(str, l, r);

}

int main() {

    string name = "rachit";

    reverse(name, 0, name.length()-1);

    cout << name << endl;

}
