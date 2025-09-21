#include<stdio.h>

int main(){
  int n,t;
  scanf("%d%d",&n,&t);
  int a[n];
  for(int i = 0;i < n;i++) scanf("%d",&a[i]);
  
  int l = 0, r = 0, ans = 0;
  long long s = 0;
  while(r < n){
    s += a[r];
    while(s > t) {
      s -= a[l];
      l++;
    }
    if(r-l+1 > ans) ans = r-l+1;
    r++;
  }
  printf("%d",ans);
}
