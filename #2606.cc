#include <iostream>
#include <set>
using namespace std;

bool visited[200];
set<int> s[200];
int count = 0;

void dfs(int n) {
    visited[n] = true;
    count++;
    int x;
    for (auto iter=s[n].begin(); iter!=s[n].end(); iter++) {
        x = *iter;
        if (!visited[x]) {
            dfs(x);
        }
    }
}

int main() {
    int comN, networkN, a, b;
    cin>>comN>>networkN;
    for (int i=0; i<networkN; i++) {
        cin>>a>>b;
        s[a].insert(b);
        s[b].insert(a);
    }
    dfs(1);
    cout<<count-1<<endl;
}