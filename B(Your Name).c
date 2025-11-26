// https://codeforces.com/contest/2167/problem/B

#include <stdio.h>
#include <string.h>

int main() {
    int q;
    scanf("%d", &q);
    
    while (q--) {
        int n;
        scanf("%d", &n);
        
        char s[21], t[21];
        scanf("%s %s", s, t);
        
        int freq_s[26] = {0};
        int freq_t[26] = {0};
        
        for (int i = 0; i < n; i++) {
            freq_s[s[i] - 'a']++;
            freq_t[t[i] - 'a']++;
        }
        
        int can_form = 1;
        for (int i = 0; i < 26; i++) {
            if (freq_s[i] != freq_t[i]) {
                can_form = 0;
                break;
            }
        }
        
        if (can_form) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
