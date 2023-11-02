#include <stdio.h>

struct stud
{
    int reg_no;
    char name[50];
    char branch[10];
    float cgpa;
};

int search(struct stud arr[], int num)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i].reg_no == num)
        {
            return i;
        }
    }
}

void sort(struct stud arr[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[j].reg_no > arr[j + 1].reg_no)
            {
                struct stud temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    struct stud data[10];
    for (int i = 0; i < 10; i++)
    {
        struct stud stu;
        printf("\nEnter the registration number : ");
        scanf("%d", &stu.reg_no);
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", stu.name);
        printf("Enter branch : ");
        scanf("%s", stu.branch);
        printf("Enter CGPA : ");
        scanf("%f", &stu.cgpa);
        data[i] = stu;
    }

    int search_reg;
    printf("\nEnter the registration number to find: ");
    scanf("%d", &search_reg);

    int numm = search(data, search_reg);
    printf("\nName: %s\nBranch: %s\nCGPA: %f\n", data[numm].name, data[numm].branch, &data[numm].cgpa);

    sort(data);

    for (int k = 0; k < 10; k++)
    {
        printf("\nRegistration number: %d\nName: %s\nBranch: %s\nCGPA: %f\n", data[k].reg_no, data[k].name, data[k].branch, &data[k].cgpa);
    }
    return 0;
}