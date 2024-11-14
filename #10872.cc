#include <iostream>
using namespace std;

int main() {
    int a,r=1;
    cin>>a;
    if (a>=1) {
        for (int i=1; i<=a; i++) {
            r*=i;
        }
    }
    cout<<r<<endl;
}