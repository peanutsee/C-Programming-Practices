#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct
{
    char name[40];
    char telno[40];
    int id;
    double salary;
} Employee;

void printEmp(Employee *emp, int size);
int readin(Employee *emp);
int search(Employee *emp, int size, char *target);
int addEmployee(Employee *emp, int size, char *target);

int main()
{
    Employee emp[MAX];
    char name[40], *p;
    int size, choice, result;
    printf("Select one of the following options: \n");
    printf("1: readin() \n");
    printf("2: search() \n");
    printf("3: addEmployee() \n");
    printf("4: print() \n");
    printf("5: exit() \n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            size = readin(emp);
            break;
        case 2:
            printf("Enter search name: \n");
            scanf("\n");
            fgets(name, 40, stdin);
            if (p=strchr(name,'\n')) *p = '\0';
            result = search(emp,size,name);
            if (result != 1)
                printf ("Name not found! \n");
            break;
        case 3:
            printf("Enter new name: \n");
            scanf("\n");
            fgets(name, 40, stdin);
            if (p=strchr(name,'\n')) *p = '\0';
            result = search(emp,size,name);
            if (result != 1)
                size = addEmployee(emp, size, name);
            else
                printf("The new name has already existed in the database\n");
            break;
        case 4:
            printEmp(emp, size);
            break;
        default:
            break;
        }
    }
    while (choice < 5);
    return 0;
}

void printEmp(Employee *emp, int size)
{
    int i;
    printf("The current employee list: \n");
    if (size==0)
        printf("Empty array\n");
    else
    {
        for (i=0; i<size; i++)
            printf("%s %s %d %.2f\n",emp[i].name,emp[i].telno,emp[i].id,
                   emp[i].salary);
    }
}

int readin(Employee *emp)
{
    /* Write your code here */
    /*
    The function readin() reads a number of persons’ names and their corresponding telephone
    numbers, passes the data to the caller via the parameter p, and returns the number of names that
    have entered. The character '#' is used to indicate the end of user input.
    */
    int size=0;
    char *p, *pp;
    while (1)
    {
        printf("Enter name:\n");
        scanf("\n");
        fgets(emp[size].name, 40, stdin);
        if (p=strchr(emp[size].name, '\n')) *p='\0';
        if (strcmp(emp[size].name, "#") == 0) break;

        printf("Enter telno:\n");
        scanf("\n");
        fgets(emp[size].telno, 40, stdin);
        if (pp=strchr(emp[size].telno, '\n')) *pp='\0';

        printf("Enter id:\n");
        scanf("%d", &emp[size].id);

        printf("Enter salary:\n");
        scanf("%lf", &emp[size].salary);
        size++;
    }
    return size;
}

int search(Employee *emp, int size, char *target)
{
    /* Write your code here */
    /*
    The function search() allows the user to query the array using the name field. If the name is
    found, the program displays the message “Employee found at index location:
    x”. The function search() finds the employee data of an input name target, and then
    prints the name, telephone number, id and salary on the screen. If the input name cannot be
    found, then it will print the error message “Name not found” on the screen.
    */
    int i=0;
    for (i; i<size; i++)
    {
        if (strcmp(emp[i].name, target) == 0)
        {
            printf("Employee found at index location: %d.\n", i);
            return 1;
        }
    }
    return 0;
}

int addEmployee(Employee *emp, int size, char *target)
{
    /* Write your code here */
    char *p;
    strcpy(emp[size].name, target);

    printf("Enter telno:\n");
    scanf("\n");
    fgets(emp[size].telno, 40, stdin);
    if (p=strchr(emp[size].telno, '\n')) *p='\0';

    printf("Enter id:\n");
    scanf("%d", &emp[size].id);

    printf("Enter salary:\n");
    scanf("%lf", &emp[size].salary);
    return ++size;
}
