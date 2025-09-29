#include <stdio.h>
#include <math.h>

int main() {
    int num, square, temp, digits = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

   
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    
    int modulus = pow(10, digits);
    int lastDigits = square % modulus;

    
    if (lastDigits == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is not an Automorphic number.\n", num);

    return 0;
}
