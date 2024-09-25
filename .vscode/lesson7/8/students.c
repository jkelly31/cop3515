#include<stdio.h>
#include<string.h> // for strcpy()

// create structure to hold student info
struct Student {
    char name[50];
    int age;
    char u_num[10];
    float gpa;
    char on_campus;
    char paid;
};

// main fn begins
int main() {
    // enter data into struct var for one student
    struct Student student1;

    // ask user for student1 info
    printf("Enter student name: ");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Enter U Number: ");
    scanf("%s", &student1.u_num);

    printf("Enter student GPA: ");
    scanf("%f", &student1.gpa);

    printf("Does student live on campus? (Y/N): ");
    scanf(" %c", &student1.on_campus);

    printf("Has the student paid for the current semester? (Y/N): ");
    scanf(" %c", &student1.paid);

    // copy student1 data to new struct var student2
    struct Student student2 = student1;

    // change the name for the new student
    strcpy(student2.name, "New Name");

    // switch live on campus answer for student2
    if (student1.on_campus == 'Y') {
        student2.on_campus = 'N';}
    else {student2.on_campus = 'Y';}

    // switch paid tuition answer for student2
    if (student1.paid == 'Y') {
        student2.paid = 'N';}
    else {student2.paid = 'Y';}

    // print data for student1
    printf("\n~~~ Student 1 ~~~\n");
    printf("Name: %s", student1.name);
    printf("Age: %d\n", student1.age);
    printf("U Number: %s\n", student1.u_num);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Lives on campus: %c\n", student1.on_campus);
    printf("Paid tuition: %c\n", student1.paid);

    // print data for student2
    printf("\n~~~ Student 2 ~~~\n");
    printf("Name: %s\n", student2.name); // need to add \n here bc fgets provided it in s1 but s2 is copied
    printf("Age: %d\n", student2.age);
    printf("U Number: %s\n", student2.u_num);
    printf("GPA: %.2f\n", student2.gpa);
    printf("Lives on campus %c\n", student2.on_campus);
    printf("Paid tuition: %c\n", student2.paid);

    // end program
    return 0;
}