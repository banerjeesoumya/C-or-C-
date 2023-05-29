#include<stdio.h>

int main() {
    int i = 10;
    char ch = 'A';
    float a = 3.14;
    char str[50] = ""; // Initialize str with a null terminator

    printf("%d %c %f\n", i, ch, a);
    sprintf(str, "%d %c %f\n", i, ch, a);
    printf("%s\n", str);

    return 0;
}