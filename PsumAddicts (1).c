#include<stdio.h>

void solve(){
  int n,k;
  scanf("%d%d",&n,&k);
  long long s[n+1];
  for(int i = n-k+1;i <= n;i++) scanf("%lld",&s[i]);
  
  if(k == 1) {
    printf("YES\n");
    return;
  }
  
  long long a[n+1];
  for(int i = n-k+2;i <= n;i++) {
    a[i] = s[i] - s[i-1];
  }
  
  for(int i = n-k+3;i <= n;i++){
    if(a[i] < a[i-1]) {
      printf("NO\n");
      return;
    }
  }
  
  if(s[n-k+1] > a[n-k+2]*(long long)(n-k+1)) {
    printf("NO\n");
  } else printf("YES\n");
  
}

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    solve();
  }
}