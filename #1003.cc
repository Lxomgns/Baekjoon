#include <iostream>
using namespace std;

class N{
    public:
    N(){
        this->zero = 0;
        this->one = 0;
    }
    int zero, one;
};

N result;

int fibonacci(int n) {
    static int memory[10000] = {0,1,};
    static N rr[10000];
    if (n == 0) {
        result.zero++;
        return 0;
    } else if (n == 1) {
        result.one++;
        return 1;
    } else if (rr[n].zero != 0) {
        result.zero += rr[n].zero;
        result.one += rr[n].one;
        return memory[n];
    } else {
        memory[n] = fibonacci(n-1) + fibonacci(n-2);
        rr[n].one = result.one;
        rr[n].zero = result.zero;
        return memory[n];
    }
}

int main() {
    int numTestCase;
    cin >> numTestCase;
    int *testArray = new int[numTestCase];
    for (int i = 0; i < numTestCase; i++) {
        cin >> testArray[i];
    }
    for (int i=0;i<numTestCase;i++) {
        fibonacci(testArray[i]);
        cout<<result.zero<<" "<<result.one<<endl;
        result.one = 0;
        result.zero = 0;
    }
}

