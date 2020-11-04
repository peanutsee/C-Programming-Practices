#include <stdio.h>
#include <string.h>

void main()
{
    typedef struct{ // Old datatype name
        char name[100];
        char major[50];
        double CGPA;
    } Student; // New datatype name

    Student Darryl;
    strcpy(Darryl.name, "Darryl See Wei Shen");
    strcpy(Darryl.major, "DSAI");
    Darryl.CGPA = 5.0;

    printf("%s %s %.2f", Darryl.name, Darryl.major, Darryl.CGPA);
}
