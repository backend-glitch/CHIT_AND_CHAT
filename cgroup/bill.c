#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    char choice;

    do {
        printf("Enter the units consumed : ");
        scanf("%d", &units);

        if (units < 0) {
            printf("Invalid input!!\n");
            return 0;
        } else if (units > 0 && units <= 100) {
            bill = units * 1.5;
        } else if (units <= 300) {
            bill = (100 * 1.5) + (units - 100) * 2.0;
        } else {
            bill = 100 * 1.5 + 200 * 2.0 + (units - 300) * 2.5;
        }

        printf("Your bill : %.2f\n", bill);

        printf("Enter the choice : ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("Thank you !!\n");
    return 0;
}

/*

gcc bill.c -o bill.exe
.\bill.exe

*/