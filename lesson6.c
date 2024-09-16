/* HW#1 pw strength meter due 9/25 - see pdf slide 
QUIZ#1 mon 9/23 night 8pm, mon class is review day */
/* TO-DO: make color-code notes on paper for other prog asnmts */
/* multiplication table hw:
    use math, print results of math, no array;
     */

#include<stdio.h>

int main() {
/*
// use while loop if amount of loops in unknown - runs until False
    int i = 10;
    while (i > 5) {
        printf("T minus %d and counting\n", i);
        i--;  // decrement i by 1, vs i++ is increment i by 1
*/
/*
// or use do-while to enter loop at least once:
    int i = 10;
    do {
        printf("T minus %d and counting\n", i);
        i--; 
    }   while (i > 0);
    }
*/  /*
// use for loop for mult. expressions/ loops a specific number of times 
    // for (initialize, condition/control, action) statement;
    for (int i = 10; i > 0; i--)
    printf("T minus %d and counting\n", i);
    // initialize: (int i = 10;
    // condition/ctrl: i > 0; [as long as i > 1-10...]
    // action: i--) [...decrement i, start loop again until i is 1]
*/  /*
    // comma ops
    int sum; //?
    int i; //?
    int N; //? 
    // initializing 2 predefined vars: sum - 0, i = 1;
    for (sum - 0, i = 1; i <= N; i++);
        sum += i;
        printf("%d",sum);
*/  /*
    // break statement1:
        // loop checks if a number is prime:
    int n, d;
    scanf("%d", &n);  // take user input
    for (d = 2; d < n; d++)
        if (n % d == 0)
            break; // not a prime num
    if (d < n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);
*/  /*
    // break statement2:
    int n, d;
    for (;;) {  // endless loop
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);    // take input, apply to n
        if (n == 0)
            break;  // exit loop if user enters 0
        printf("%d cubed is %d\n", n, n * n * n);   // calc cubed n
    }   
*/  /*
    // continue statement:
        // for loop to print 1 to 8, without 4
    for (int i = 1; i <= 8; i++) {  // increment i until i is 8
        if (i == 4) {   // but if i is 4, skip iteration
            continue;   // diff than break; bc break would stop at 3
        }               // continue stays in the loop
        printf("%d ", i);
    }
    printf("\n"); 
*/  

}