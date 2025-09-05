#include <stdio.h>
int main() {
    int num, max, min;
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;
    for(int i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > max) max = num;
        if(num < min) min = num;
    }
    printf("Largest = %d\nSmallest = %d\n", max, min);
    return 0;
}
