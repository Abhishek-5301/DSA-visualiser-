#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int left = 0;
    int right = (int)len - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            printf("NO");
            return 0;
        }
        left++;
        right--;
    }

    printf("YES");
    return 0;
}
