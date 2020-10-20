#include <stdio.h>
int main()
{
    int ccount = 0, dcount = 0;
    char ch;
    int string[100]; // probably won't work for inputs with 100+ values
    int i = 0;

    printf("Enter your characters (# to end): \n");
    scanf("%c", &ch);

    /* Write your program code here */
    string[i] = ch;
    i++;

    while (ch != '#'){
        scanf("%c", &ch);
        string[i] = ch;
        i++;
    } // works but not exactly a good practise

    for (int j=0; j<=i; j++)
    {
        if (string[j]>=48 && string[j]<=57) // checks ASCII for digits 
        {
            dcount++; 
        }
        else if (string[j] == 32) // handles spaces
        {
            dcount += 0;
        }
        else if (string[j] == 35) // handles hash (stops the programme)
        {
            break;
        }
        else // checks ASCII for alphabets
        {
            ccount++;
        }
    }




    printf("The number of digits: %d\n", dcount);
    printf("The number of letters: %d\n", ccount);
    return 0;
}
