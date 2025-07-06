#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    // fahr = lower;
    // printf("fahr\tcelsius\n");
    // while (fahr <= upper) {
    //     celsius = (5.0 / 9.0) * (fahr - 32.0);

    //     printf("%3.0f %10.1f\n", fahr, celsius);
    //     fahr = fahr + step;
    // }


    celsius = lower;

    printf("%7s %7s\n", "celsius", "fahr");
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;

        printf("%7.1f %7.1f\n", celsius, fahr);
        celsius += step;
    }
    
    return 0;
}