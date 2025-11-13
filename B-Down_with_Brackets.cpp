// https://codeforces.com/problemset/problem/2110/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int c = 0;
        bool flg = false;
        for(int i = 1; i + 1 < n; i++){
            if(s[i] == '(') c++;
            else c--;
            if(c < 0){
                flg = true;
                break;
            }
        }
        if(!flg){
            if(c != 0) flg = true;
        }
        cout << (flg ? "YES\n" : "NO\n");
    }
    return 0;
}
