#include <stdio.h>

int main() {
    char s[105];
    scanf("%s",s);
    char target[6] = "hello";
    int i = 0, j = 0;
    
    while(s[i] != '\0' && target[j] != '\0') {
      if(s[i] == target[j]) j++;
      i++;
    }
    
    if(target[j] == '\0') printf("YES\n");
    else printf("NO\n");
    return 0;
}
