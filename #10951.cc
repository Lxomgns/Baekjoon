#include <iostream>
using namespace std;

class A{
    public:
        int a,b;
};

//cin으로 받고싶은 만큼 받고싶으면 while(cin>>a) 이렇게 작성. 받으면 true, 받지 않으면 false

int main() {
    cin.tie(NULL);
    A array[10000];
    int i=0;
    while (cin>>array[i].a>>array[i].b) {
        cout<<array[i].a+array[i].b<<endl;
        i++;
    }
}