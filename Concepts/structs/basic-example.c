#include <stdio.h>
#include <string.h>

void main()
{
    struct  Student{ // struct with tag
        char name[100];
        char major[50];
        double CGPA;
    } Darryl; // struct instance name

    // Assigning values to a struct
    strcpy(Darryl.name, "Darryl See Wei Shen");
    strcpy(Darryl.major, "DSAI");
    Darryl.CGPA = 5.0;

    printf("Hello, I am %s from %s with a CGPA of %.2f!", Darryl.name, Darryl.major, Darryl.CGPA);
}
