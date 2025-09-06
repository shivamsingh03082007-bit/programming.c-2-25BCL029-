#include <stdio.h>
int main() {
    int num, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 2)
        flag = 0;
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            flag = 0;
    if (flag)
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}
