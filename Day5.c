#include <stdio.h>

int main() {
    int n, m;

    printf("no of entries for log1: ");
    scanf("%d", &n);

    printf("no of entries log2: ");
    scanf("%d", &m);

    int p[n], q[m];
    int final_log[n + m];

    printf("Enter the time in log1: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter the time in log2: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &q[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge process
    while(i < n && j < m) {
        if(p[i] <= q[j]) {
            final_log[k++] = p[i++];
        } else {
            final_log[k++] = q[j++];
        }
    }

    // Remaining elements
    while(i < n) {
        final_log[k++] = p[i++];
    }

    while(j < m) {
        final_log[k++] = q[j++];
    }

    printf("Merged log: ");
    for(int x = 0; x < n + m; x++) {
        printf("%d ", final_log[x]);
    }

    return 0;
}
