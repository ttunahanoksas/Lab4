#include <stdio.h>
#include <math.h>
double cube(double x) {
    return x * x * x;
}
double absolute(double x) {
    if (x < 0)
        return -x;
    else
        return x;
}
int main() {
    double a;
    printf("%7s %10s %10s %10s\n", "a", "a^3", "|a|", "sin(a)");
    printf("----------------------------------------------------\n");
    for (a = -1.0; a <= 1.0 + 1e-9; a += 0.1) {
        printf("%7.4f %10.4f %10.4f %10.4f\n",
               a, cube(a), absolute(a), sin(a));
    }
    return 0;
}






