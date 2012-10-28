#include <stdio.h>

// Number of digits in an image.
#define LEN 8

// An image for zero value.
static const char zero[] =    "┌───┐\n"
                              "│   │\n"
                              "└───┘\n";

// Largest positive number.
static const char positive[] = "├─┴─┤\n"
                               "┤   ├\n"
                               "├─┬─┤\n";

// Largest negative number.
static const char negative[] = "┌┬┬┬┐\n"
                               "├   ┤\n"
                               "└┴┴┴┘\n";

// Powers of three.
static int digit[LEN];

// A number to convert.
static int src = 0;

// Read a number from stdin.
static void init (void) {
    scanf("%d", &src);
    for (int k = 0, s = 1; k < LEN; ++k, s *= 3)
        digit[k] = s;
}

// Print the result into stdout.
static void draw (void) {
    printf("%d\n", src);
    for (int k = 0; k < LEN; ++k)
        printf("%d = %d\n", k + 1, digit[k]);
    printf("----\n%s\n----\n", positive);
}

// No surprise.
int main (int argc, char *argv[]) {
    init();
    draw();
    return 0;
}

