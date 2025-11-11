// https://codeforces.com/problemset/problem/2143/A

#include <stdio.h>
#include <limits.h>
 
int main() {
  int t;
  scanf("%d",&t);
  
  while(t--) {
    
    int n, mx = INT_MIN,idx;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++) { 
      scanf("%d",&a[i]);
      if(a[i] > mx) {
        mx = a[i];
        idx = i;
      }
    }
    
    if(mx > n) {
      printf("NO\n");
      return 0;
    }
    
    
    int r = idx, l = idx;
    
    for(int i = 0;i < n;i++) {
      if(r-l == i) {
        a[idx]--;
        if(a[l-1] == a[idx] && l > 0) l--;
        else if(a[r+1] == a[idx] && r < n - 1) r++;
      } else {
        break;
      }
    }
    printf(a[idx] == 0 && r-l+1 == n ? "Yes\n" : "No\n");
    
  }
    
    return 0;
}
