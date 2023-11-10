#include <stdio.h>
#include <string.h>

struct cust
{
    char name[50];
    char acc_no[50];
    double bal;
};

void nameout(struct cust arr[])  
{
    for(int i = 0; i < 15; i++)
    {
        if(arr[i].bal > 50000)
        {
            printf("\n%s", arr[i].name);
        }
    }
}

void balancetotal(struct cust arr[])
{
    for(int i = 0; i < 15; i++)
    {
        if(arr[i].bal > 10000) 
        {
            arr[i].bal += 1000;
        }
    }
}

void withdrawing(struct cust arr[], char account[50], double amount)
{
    for(int i = 0; i < 15; i++)
    {
        if(strcmp(arr[i].acc_no, account) == 0)
        {
            if(amount <= arr[i].bal)
            {
                arr[i].bal -= amount;
            }
            else //if not enough money is there
            {
                printf("\nRequired balance unavailable");
            }
        }
    }
}


int main()
{
    struct cust data[15];
    for(int i = 0; i < 15; i++)
    {
        struct cust cus;
        printf("\nEnter the account number: ");
        scanf("%s", cus.acc_no);
        printf("\nEnter the name of customer : ");
        scanf("%s", cus.name);
        printf("Enter balance : ");
        scanf("%lf", &cus.bal);
        data[i] = cus;
    }

    nameout(data); //if more than 5k balance
    balancetotal(data);

    char withdraw_acc[50];

    printf("\nEnter account number to withdraw money: ");
    scanf("%s", withdraw_acc);
    double withdraw_amt;
    printf("Enter the amount to withdraw from account : ");
    scanf("%lf", &withdraw_amt);
    withdrawing(data, withdraw_acc, withdraw_amt);

    return 0;
}
