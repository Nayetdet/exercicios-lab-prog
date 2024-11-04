#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main(void) {
    for (int i = 10; i <= 100; i += 10) {
        printf("%dC = %.2fF\n", i, celsiusToFahrenheit(i));
    }
    
    return 0;
}
