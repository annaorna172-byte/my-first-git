

#include <stdio.h>
#include <string.h>
int findPatternIndex(const char sentence[], const char pattern[]) {
    int sentenceLength = strlen(sentence);
    int patternLength = strlen(pattern);


    for (int startPos = 0; startPos <= sentenceLength - patternLength; startPos++) {

        int matchedChars = 0;


        while (matchedChars < patternLength &&
               sentence[startPos + matchedChars] == pattern[matchedChars]) {
            matchedChars++;
        }


        if (matchedChars == patternLength) {
            return startPos;
        }
    }

    return -1;
}

int main() {
    char sentence[200];
    char pattern[100];

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter the pattern to search for: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';

    int index = findPatternIndex(sentence, pattern);

    if (index != -1) {
        printf("Pattern found at index: %d\n", index);
    } else {
        printf("Pattern not found in the sentence.\n");
    }

    return 0;
}
