Programiz

Search...
Programiz PRO


C Program to Write a Sentence to a File
To understand this example, you should have the knowledge of the following C programming topics:

C File Handling
C Standard Library Functions
This program stores a sentence entered by the user in a file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}
