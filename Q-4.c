#include <stdio.h>

int main() {
    char ch;
if (scanf(" %c", &ch) != 1) return 0;
if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
    printf("'%c' is not an alphabet\n", ch);
} else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
           ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
    printf("'%c' is a vowel\n", ch);
} else {
    printf("'%c' is a consonant\n", ch);
}
    return 0;
}