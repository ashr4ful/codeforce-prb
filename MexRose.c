
// link : https://codeforces.com/contest/2149/problem/C?mobile=false

#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int a[n];
        int present[k];
        for (int i = 0; i < k; i++) {
            present[i] = 0;
        }
        
        int extra = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if(a[i] == k) extra++;
            else if (a[i] < k) {
                present[a[i]] = 1;
            }
        }
        
        int missing = 0;
        for (int i = 0; i < k; i++) {
            if (!present[i]) {
                missing++;
            }
        }
        
        printf("%d\n", (missing > extra) ? missing : extra);
    }
    
    return 0;
}
