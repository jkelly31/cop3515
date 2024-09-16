/* never add pointers together */
/*  */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // for uintptr_t
#include <string.h> // for string methods

int main()
{
/*
    enum Year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    enum Year i = Jan;
    printf("%d\n", i);
    i = Aug;
    printf("%d\n", i);
    i = Mar;
    printf("%d\n", i);
    return 0;
*/
/*
    int numBalls = 10432;
    int carSize = 2239;

    printf("Balls left after trips: %d\n",numBalls%carSize);
*/
/*
    int cokeCans = 113;
    int boxMaxCans = 12;

    printf("Cans left after all boxes are loaded: %d\n", cokeCans%boxMaxCans);
*/
/*
// pre-increment op: value incremented then used
    int a = 10;
    int b = ++a - 2;
    printf("a = %d\n", a); // a = 11
    printf("b = %d\n", b); // b = 9
// post-increment op: value used then incremented
    int c = 10;
    int d = c++ - 2;
    printf("c = %d\n", c); // c = 11
    printf("d = %d\n", d); // d = 8 
*/
/*
// pointers to a constant
    int num = 5; // declare int
    const int limit = 500; // declare int constant
    int *numPtr; // declare pointer to an int
    const int *constPtr; // declare pointer to a constant int
// initialize to respective ints:
    numPtr = &num;
    constPtr = &limit;
// display address and value of vars:
    printf("num - Address: %p value: %d\n",&num, num);
    printf("limit - Address: %p value: %d\n",&limit, limit);
    printf("numPtr - Address: %p value: %p\n",&numPtr, numPtr);
    printf("constPtr - Address: %p value: %p\n",&constPtr, constPtr);

// displays not in hexadecimal:
    printf("num - Address: %lu value: %d\n", (uintptr_t)&num, num);
    printf("limit - Address: %lu value: %d\n", (uintptr_t)&limit, limit);
    printf("numPtr - Address: %lu value: %lu\n", (uintptr_t)&numPtr, (uintptr_t)numPtr);
    printf("constPtr - Address: %lu value: %lu\n", (uintptr_t)&constPtr, (uintptr_t)constPtr);
*/
/*
// 1-D arrays:
    int a[10], i; // type integer, number of elements is 10 (index 0-9)
    a[10] = 0;

    #define N 10 // use macro to define length of array
    int b[N]; // N elements indexed from 0 to N - 1

    int n; // define length of array with expression
    n = 10;
    int a[n];

    int a[10] = {1, 2, 3, 4, 5, 6}; // initial value of a is {1, 2, 3, 4, 5, 6, 0, 0, 0, 0}
*/
/*
// strings stored in vars:
    char answer[9] = "New York"; // string literal w/ null terminator at end ("\0")
// str funcs:
    // strncat(dest, source, dest_size-strlen(dest)-1)
    char underWater[11] = "under"; strncat(underWater,"water",5);
        // concatenation: result is "underwater"
    char xmasTree[15] = "Christmas";
    strncat(xmasTree," Tree",5);
        // result is "Christmas Tree" - adds space _Tree */
    // concat multiple strings together:

/*
    // input using scanf - read numbers
    // scanf using & to point to memory location where var is stored:
    int areaCode;
    int exchangeNum;
    int houseNum;
    scanf("%d-%d-%d",&areaCode,&exchangeNum,&houseNum);
*/
    // input using fgets - read strings
    char name[15];
    printf("Enter your name: ");
    fgets(name,14,stdin); // no "&" because name is a string array
    // where fgets(varName,max str size + 2 for \n and \0,stdin);
}

