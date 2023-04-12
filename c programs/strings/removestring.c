#include <stdio.h>
#include <string.h>
int main() 
{
 char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin); // read input string from user
 int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') 
{
        str[len-1] = '\n'; // remove newline character from input string
    }

    int word_count = 1;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            word_count++;
        }
    }

    if (word_count <= 2)
 {
        printf("Cannot remove middle word.\n");
    } else {
        int middle_word_start = 0, middle_word_end = 0;
        int current_word = 1;
        for (int i = 0; i < len; i++) 
{
            if (str[i] == ' ') 
{
                current_word++;
                if (current_word == word_count/2 + 1)
 {
                    middle_word_start = i+1;
                } 
else if (current_word == word_count/2 + 2)
 {
                    middle_word_end = i;
                    break;
                }
            }
    }

        // remove middle word from string
        memmove(&str[middle_word_start], &str[middle_word_end+1], strlen(&str[middle_word_end+1]) + 1);

        printf("String after removing middle word: %s\n", str);
    }

    
}