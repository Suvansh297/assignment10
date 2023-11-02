#include <stdio.h>

struct stud
{
    int rollno;
    char name[50];
    int age;
};

int main()
{
    struct stud students[5];

    // loop to input details for 5 students
    for (int i = 0; i < 5; i++)
    {
        students[i].rollno = i + 1; // Roll number starts from 1
        printf("Enter name of Roll Number %d : ", students[i].rollno);
        scanf("%s", students[i].name);
        printf("Enter age for Roll Number %d : ", students[i].rollno);
        scanf("%d", &students[i].age);
    }

    // details of roll no 2
    printf("\nDetails of student with roll number 2 :\nName: %s\nAge: %d\n", students[1].name, students[1].age);

    return 0;
}
