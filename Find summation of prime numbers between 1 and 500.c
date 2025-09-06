#include <stdio.h>
int main() {
    int sum = 0;
    for (int num = 2; num <= 500; num++) {
        int flag = 1;
        for (int i = 2; i <= num / 2; i++)
            if (num % i == 0) {
                flag = 0;
                break;
            }
        if (flag)
            sum += num;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
