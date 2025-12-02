#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[100];
    float marks[3];
};

int main(void) {
    struct student s;
    int i;
    printf("Enter id: ");
    if (scanf("%d", &s.id) != 1) return 1;
    getchar();
    printf("Enter name: ");
    if (!fgets(s.name, sizeof s.name, stdin)) return 1;
    size_t len = strlen(s.name);
    if (len && s.name[len - 1] == '\n') s.name[len - 1] = '\0';

    for (i = 0; i < 3; ++i) {
        printf("Enter mark %d: ", i + 1);
        if (scanf("%f", &s.marks[i]) != 1) return 1;
    }
    printf("\nStudent details:\n");
    printf("ID   : %d\n", s.id);
    printf("Name : %s\n", s.name);
    for (i = 0; i < 3; ++i)
        printf("Mark %d: %.2f\n", i + 1, s.marks[i]);
    return 0;
}