#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int hasDigitFive(int n) {
    while (n > 0) {
        if (n % 10 == 5) return 1;
        n /= 10;
    }
    return 0;
}

int main() {
    int count = 0;
    int i = 3;

    while (count < 60) {
        if (isPrime(i) && isPrime(i + 2)) {
            count++;
            int middle = i + 1;
            printf("%2d. (%d, %d), middle=%d %s\n",
                   count, i, i + 2, middle,
                   hasDigitFive(middle) ? "contains 5" : "does not contain 5");
        }
        i++;
    }

    return 0;
}

