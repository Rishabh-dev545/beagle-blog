#include <stdio.h>

/* Structure Declaration */
struct Date
{
    int day;
    int month;
    int year;
};

/* Function Declarations */
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);

int main()
{
    struct Date d1;
    int choice;

    do
    {
        printf("\n----- DATE MENU -----\n");
        printf("1. Initialize Date\n");
        printf("2. Accept Date\n");
        printf("3. Print Date\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            initDate(&d1);
            printf("Date Initialized Successfully.\n");
        }
        else if(choice == 2)
        {
            acceptDateFromConsole(&d1);
        }
        else if(choice == 3)
        {
            printDateOnConsole(&d1);
        }
        else if(choice == 0)
        {
            printf("Exiting Program...\n");
        }
        else
        {
            printf("Invalid Choice!\n");
        }

    } while(choice != 0);

    return 0;
}

/* Function Definitions */

void initDate(struct Date* ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter Day: ");
    scanf("%d", &ptrDate->day);

    printf("Enter Month: ");
    scanf("%d", &ptrDate->month);

    printf("Enter Year: ");
    scanf("%d", &ptrDate->year);
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is: %02d/%02d/%04d\n",
           ptrDate->day,
           ptrDate->month,
           ptrDate->year);
}