#include <stdio.h>
void reversingSentence();
int main() {
    printf("Enter a sentence of your preference: ");
    reversingSentence();
    return 0;
}

void reversingSentence() {
    char s;
    scanf("%c", &s);
    if (s != '\n') {
        reversingSentence();
        printf("%c", s);
    }
}