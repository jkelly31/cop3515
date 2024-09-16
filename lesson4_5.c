/* Boolean: true means nonzero (1); false means 0 
== equality; = assignment
equality operators have precedence over logical ops
&& logical AND: both parts must be SAME
|| logical OR: 1 OR 1 = 1; 1 or 0 = 1; 0 or 0 = 0; T F = T; any T makes it F?
^ logical XOR: answer is same as OR w/ exception: True True = False
| logical NOT: nagate so flip to opposite
 */
/* try to write atm prob on paper first - see algorithm */
/* lesson 5 FILE I/O:
 */

#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h> // for toupper() and other char conversions

int main()
{
    /*
    // example syntax for file OPEN:
    FILE *pFile;
    pFile = fopen("test.txt", "r");  // test.txt - file name, r - read

    if (pFile == NULL);
    {
        printf("Error opening file\n");
        return 1;
    }
     // exmaple:
     ptr = fopen("test.bin", "rb"); // r - read, b - binary file type
*/
    // ex for file CLOSE
    int fclose(FILE* pFile); 

    // ex for file READ
    // could use fscanf() but fgets() is more secure, 
        // then use sscanf() to parse info out of string

    char* fgets(char* buffer, int max, FILE* pFile);
    // 1st char* - returns NULL in case of error, returns buffer if success
    // buffer - address of input buffer
    // int max - max num of chars to read including \0
    // pFile - pointer returned by fopen()

    // read single char in file
    // fgetc(fp); - say where, file ptr 
    // fread() to read from .bin file, takes 4 args
    
    // WRITE file
    // fopen() with "w" mode - creates or overrides existing file! you cannot edit files
    // fprintf() - file version of printf()

    // casting
    // compute fractional part of a double value:
    double f, frac_part;
    f = 123456789.9876;
    frac_part = f - (int) f;
    // force compiler to perfom conversions:
    double quotient;
    int dividend, divisor;
    quotient = dividend / divisor;
    // avoid truncation - cast one of the operands using DOUBLE:
    quotient = (double) dividend / divisor; // causes compiler to double divisor also
    // (double) dividend converts int to floating-pt num -> outcome will be ftp
        // same as float() but more accuracy

    // read/write single char
    char ch;
    ch = getchar(); // getchar() returns int val
    scanf("%c", ch); // %c allows scanf to read/write a single char
    scanf(" %c", &ch); // added space tells scanf to skip whitespaces
    // &ch - ?
    // getchar() faster than scanf()

    // what is ch now ?
    char ch;  // declare char 

    ch = 65;  // ascii 65 is 'A'
    ch += 1;  // increment by 1 to 66 -> 'B'
    ch++;     // increment by 1 to 67 -> 'C'
    printf("%c\n",ch);   // %c to print a char, not an int (%d) or ftp (%f)
                         // ch is now 67 -> prints out 'C'
    return 0;



}