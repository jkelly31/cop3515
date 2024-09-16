/* classroom problem */

#include <stdio.h>
int main()
{
    /* const var for number of students in the class */
    const int numStudents = 9;

    /* individual vars for seat locations */
    int seat1 = 1;
    int seat2 = 2;
    int seat3 = 3;
    int seat4 = 4;
    int seat5 = 5;
    int seat6 = 6;
    int seat7 = 7;
    int seat8 = 8;
    int seat9 = 9;

    /* individual vars for student names */
    char name1 = 'B';
    char name2 = 'M';
    char name3 = 'T';
    char name4 = 'J';
    char name5 = 'P';
    char name6 = 'E';
    char name7 = 'H';
    char name8 = 'R';
    char name9 = 'X';

    /* individual vars for scores "%.1f" */
    float score1 = 79.54;
    float score2 = 82.13;
    float score3 = 74.61;
    float score4 = 91.12;
    float score5 = 78.83;
    float score6 = 97.17;
    float score7 = 85.65;
    float score8 = 65.42;
    float score9 = 70.26;

    /* print num of students in class */
    printf("Number of students in the class: %1d\n\v", numStudents);

    /* print class info 3x3 */
    printf("%1d %1c %.1f\t", seat1, name1, score1);
    printf("%1d %1c %.1f\t", seat2, name2, score2);
    printf("%1d %1c %.1f\n", seat3, name3, score3);
    printf("%1d %1c %.1f\t", seat4, name4, score4);
    printf("%1d %1c %.1f\t", seat5, name5, score5);
    printf("%1d %1c %.1f\n", seat6, name6, score6);
    printf("%1d %1c %.1f\t", seat7, name7, score7);
    printf("%1d %1c %.1f\t", seat8, name8, score8);
    printf("%1d %1c %.1f\n", seat9, name9, score9);

}