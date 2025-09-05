#include <stdio.h>
int main() {
    int a, sum = 0;
    float mean;
    for(int i = 1; i <= 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &a);
        sum += a;
    }
    mean = sum / 10.0;
    printf("Sum = %d\nMean = %.2f\n", sum, mean);
    return 0;
}
