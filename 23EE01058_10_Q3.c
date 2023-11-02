#include <stdio.h>
#include <string.h>

struct stud
{
    char name[50];
    int marks[5];
};

int main()
{
    int n;
    printf("Number of students : ");
    scanf("%d", &n);
    struct stud data[n];
    for (int i = 0; i < n; i++)
    {
        struct stud st;
        printf("\n Enter name of student %d: ", i + 1);
        scanf("%s", st.name);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter marks of subject number %d: ", j + 1);
            scanf("%d", &st.marks[j]);
        }

        data[i] = st;
    }

    char findname[50];
    printf("Enter name of student to find : ");

    scanf("%s", findname);
    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        if (strcmp(data[k].name, findname) == 0)
        {

            for (int l = 0; l < 5; l++)
            {
                sum += data[k].marks[l];
            }
            break;
        }
    }

    float avg = sum / 5.0;

    printf("\nTotal marks are %d\nAverage marks are %f", sum, avg);
    return 0;
}