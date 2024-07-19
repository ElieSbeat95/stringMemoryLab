#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void replaceSubstring(char *str, char *substr);

int main() {
    char string[100], subString[100];
    bool isEmpty = false;

    while (!isEmpty) {
        printf("Enter text: ");
        fgets(string, sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0';  // Remove trailing newline character

        printf("Enter substring: ");
        fgets(subString, sizeof(subString), stdin);
        subString[strcspn(subString, "\n")] = '\0';

        if (string[0] == '\0' || subString[0] == '\0'){
            isEmpty = true;
            printf("Finish");
        }
        else{
            replaceSubstring(string, subString);
            printf("Modified text: %s\n\n", string);
        }
    }
    return 0;
}
void replaceSubstring(char *str, char *substr) {
    char *p = str;
    while ((p = strstr(p, substr)) != NULL) {
        for (int i = 0; i < strlen(substr); i++) {
            if (islower(p[i])) {
                p[i] -= ('a' - 'A');
            }
        }
        p += strlen(substr);  // Move the pointer past the current substring
    }
}
