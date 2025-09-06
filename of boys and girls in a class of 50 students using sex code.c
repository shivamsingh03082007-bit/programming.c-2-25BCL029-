#include <stdio.h>
int main() {
    int boys = 0, girls = 0;
    char sex;
    for (int i = 1; i <= 50; i++) {
        printf("Enter sex code for student %d (M/F): ", i);
        scanf(" %c", &sex); // Space before %c important
        if (sex == 'M' || sex == 'm')
            boys++;
        else if (sex == 'F' || sex == 'f')
            girls++;
    }
    printf("Number of boys = %d\n", boys);
    printf("Number of girls = %d\n", girls);
    return 0;
}
