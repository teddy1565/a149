#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        int input;
        scanf("%d", &input);
        int base = 1;
        do {
            base *= (input%10);
            input/=10;
        } while(input);
        printf("%d\n", base);
    }
    return 0;
}