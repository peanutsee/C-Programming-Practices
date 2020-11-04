#include <stdio.h>

void main()
{
    typedef struct
    {
        char name[50];
    } Phonebook;

    Phonebook s[10];

    // First instance
    strcpy(s[0].name, "Darryl See Wei Shen");
    puts(s[0].name);

    // Second instance
    strcpy(s[1].name, "Elizabeth Lee");
    puts(s[1].name);
}
