#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Nhap nhiet do celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Nhiet do theo do fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
