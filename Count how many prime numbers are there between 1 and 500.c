#include <stdio.h>
int main() {
    int count = 0;
    for (int num = 2; num <= 500; num++) {
        int flag = 1;
        for (int i = 2; i <= num / 2; i++)
            if (num % i == 0) {
                flag = 0;
                break;
            }
        if (flag)
            count++;
    }
    printf("Number of primes = %d\n", count);
    return 0;
}
