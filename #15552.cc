#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int testC, a, b;
    cin>>testC;
    for (int i=0; i<testC; i++) {
        cin>>a>>b;
        cout<<a+b<<"\n";
    }
}