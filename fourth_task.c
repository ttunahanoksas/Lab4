#include <stdio.h>


int reset() { return 1; }
int addOne(int n) { return n + 1; }
int negate(int n) { return -n; }
int multiply(int n) { return n * 2; }

int main() {
    int n = 1, choice;
    do {
        printf("\nValue of n: %d\n", n);
        printf("0. Reset to 1\n1. Add 1\n2. Negate\n3. Multiply by 2\n9. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 0: n = reset(); break;
            case 1: n = addOne(n); break;
            case 2: n = negate(n); break;
            case 3: n = multiply(n); break;
            case 9: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 9);

    return 0;
}

