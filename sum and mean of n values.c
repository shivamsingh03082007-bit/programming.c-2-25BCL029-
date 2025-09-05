#include <stdio.h>
int main() {
    int n, a, sum = 0;
    float mean;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &a);
        sum += a;
    }
    mean = sum / (float)n;
    printf("Sum = %d\nMean = %.2f\n", sum, mean);
    return 0;
}
