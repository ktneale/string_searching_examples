#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Find first recurring character in abccde!


int main()
{
    char input[] = "abcdeb";

    int i = 0, j = 0;

    int len = strlen(input);

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (input[i] == input[j]) {
                printf("found recurring! %c\n", input[j]);
            }
        }
    }

    return 0;
}
