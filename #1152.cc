#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = 0, begin = -1, end = -1;
    for (int i=0; i<str.length(); i++) {
        if (str[i] != ' ') {
            begin = i;
            break;
        }
    }
    for (int i=str.length()-1; i>=0; i--) {
        if (str[i] != ' ') {
            end = i;
            break;
        }
    }
    if (begin == -1) {
        cout<<"0"<<endl;
    }
    else{
        str = str.substr(begin, end-begin+1);
        for (int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                n++;
            }
        }
        cout<<n+1<<endl;
    }
}