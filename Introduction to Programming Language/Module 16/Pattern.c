#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}
