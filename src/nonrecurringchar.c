#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Find first non recurring character in abccde!


int main()
{
    char input[] = "aabbcddeeff";
    //char input[] = "abcddef";

    int i = 0, j = 0;

    int len = strlen(input);

    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            if (j == i) {
                continue;
            }

            if (input[i] == input[j]) {
                printf("found recurring! %c\n", input[j]);
                break;
            }

            if (j == len - 1) {
                printf("found non-recurring! %c\n", input[i]);
                return;
            }

        }
    }

    return 0;
}
