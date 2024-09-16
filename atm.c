#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() 
{
    // 2x2 array to hold acct amounts
    int accounts[2][2] = {
        {500, 1000},   // a - chkg, svgs
        {750, 325}     // b - chkg, svgs
    };

    // atm asks user for name
    printf("Enter your name: \n");

    // var to hold user's name, a or b
    char name;

    // read name 
    scanf(" %c", &name); 

    // assign index for a=0, b=1 to refer to later
    int person_id;
    if (name == 'a' || name == 'A') {
        person_id = 0;  // user a is 0
    } else if (name == 'b' || name == 'B') {
        person_id = 1;  // user b is 1
    } else {
        printf("Invalid.\n");
        return 1; // exit with error
    }

    // indices to hold checking and savings
    int c = 0;
    int s = 1; 
    
    // vars to hold user selections
    char acct_choice;   
    int amount;   

    // ask user which acct to withdraw
    printf("Would you like to withdraw from (c)hecking or (s)avings? \n");
    scanf(" %c", &acct_choice);   // get input c or s

    // acct selection w/ switch
    int c_or_s; 
    switch (acct_choice) {
        case 'c':
        case 'C':
            c_or_s = c; // checking
            break;
        case 's':
        case 'S':
            c_or_s = s; // savings
            break;
        default:
            break;
            return 1; // exit w/ error if invalid input
    }

    // ask user for amount to withdraw
    printf("How much would you like to withdraw? \n");
    scanf(" %d", &amount);

    // print acct balance for cx
    printf("Amount in account to be withdrawn from: $%d\n", accounts[person_id][c_or_s]);

    // subtract withdrawal from acct balance
    accounts[person_id][c_or_s] -= amount;

    // calculate bills breakdown
    int num_100s = amount / 100;
    amount %= 100;

    int num_50s = amount / 50;
    amount %= 50;

    int num_20s = amount / 20;
    amount %= 20;
    
    int num_10s = amount / 10;
    amount %= 10;
    
    int num_5s = amount / 5;
    amount %= 5;
    
    int num_1s = amount;

    // calc & print number of each bill needed
    if (num_100s > 0) printf("$100 bill\n");
    if (num_50s > 0) printf("$ 50 bill\n");
    if (num_20s > 0) printf("$ 20 bill\n");
    if (num_10s > 0) printf("$ 10 bill\n");
    if (num_5s > 0) printf("$  5 bill\n");
    if (num_1s > 0) {
        for (int i = 0; i < num_1s; ++i) {
            printf("$  1 bill\n");
        }
    }

    // print amount left in acct
    printf("Amount left in account after withdrawal: $%d\n", accounts[person_id][c_or_s]);
    
    return 0;
}