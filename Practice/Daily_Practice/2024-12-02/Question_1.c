#include <stdio.h>
int main() {
    int a,b;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("%d", a);
}

/*
    This computes the GCD of two numbers
*/