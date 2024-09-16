#include<stdio.h>
#include<stdlib.h>

#define inputPath "clearMessage.txt"
#define outputPath "secretMessage.txt"

// fn to apply caesar cipher, where ch is param to hold each char passed thru fn
char caesarCipher(char ch) {
    // is ch in range from A -> Z ? uppercase
    if (ch >= 'A' && ch <= 'Z') {
        // ((ch-'A' convert to zero-based num, +3 positions) %26 to stay w/in alphabet) +'A' convert back to letter
        return ((ch - 'A' + 3) % 26) + 'A';
    }
    // is ch in range from a -> z ? lowercase
    else if (ch >= 'a' && ch <= 'z') {
        // +3 positions 
        return ((ch - 'a' + 3) % 26) + 'a';
    }
    // return same ch if not alphabetic
    else {
        return ch;
    }
}

int main(){
    // open input file, read
    FILE *inputFile = fopen(inputPath, "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1; // exit w/ error
    }

    // open output file, write
    FILE *outputFile = fopen(outputPath, "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile); 
        return 1; // exit w/ error
    }

    // read each char from inputFile
    // define ch as int bc EOF var is int
    int ch;
    // while each ch from inputFile is not the end of the file,
    while ((ch = fgetc(inputFile)) != EOF) {
        // then change to char(ch), put thru caesarCipher(fn), var encodedChar holds result 
        char encodedChar = caesarCipher((char)ch);
        // write encodedChar out to outputFile
        fputc(encodedChar, outputFile);
    }

    // close both files
    fclose(inputFile);
    fclose(outputFile);
}