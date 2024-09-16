/* My first C program.
* Program always starts with main() 
* int varName is for counting numbers
* float varName is for decimals
* char varName is for character/string; ex: 'a', '5', '?'
* Be consistent with naming vars:
*   camelCase: numBottles, typeOfbook
*   PascalCase: NumBottles, TypeOfBook
* starbs guide to vars
* 
*/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h> /* to use boolean vars */

int main()
{
    /*printf("\"Hello, World!\"\n");
    printf("Today's date is 08/28/24\n");
    
    */
/* define vs const */
   #define SPEED 55
   printf("The speed limit is %d\n",SPEED);

   /* Column of Numbers Program:
   print 3x3 square w/ a student name for each of 1-9 students */

    printf("1\t2\t3\n\n");
    printf("4\t5\t6\n\n");
    printf("7\t8\t9\n");

}