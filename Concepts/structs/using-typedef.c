#include <stdio.h>
#include <string.h>

void main()
{
    typedef struct { // struct with tag
        char name[100];
        char major[50];
        double CGPA;
    } Student; // struct instance name

    Student Darryl;
    strcpy(Darryl.name, "Darryl");
    strcpy(Darryl.major, "DSAI");
    Darryl.CGPA = 5.0;
    printf("%s %s %.2f\n", Darryl.name, Darryl.major, Darryl.CGPA);

    Student Elizabeth;
    strcpy(Elizabeth.name, "Elizabeth");
    strcpy(Elizabeth.major, "CS");
    Elizabeth.CGPA = 5.0;
    printf("%s %s %.2f", Elizabeth.name, Elizabeth.major, Elizabeth.CGPA);
}
