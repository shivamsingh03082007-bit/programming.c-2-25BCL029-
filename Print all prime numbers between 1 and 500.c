#include <stdio.h>
int main() {
    for (int num = 2; num <= 500; num++) {
        int flag = 1;
        for (int i = 2; i <= num / 2; i++)
            if (num % i == 0) {
                flag = 0;
                break;
            }
        if (flag)
            printf("%d ", num);
    }
    return 0;
}
