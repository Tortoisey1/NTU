#include <stdio.h>
#include <string.h>

void PigLatin(char *eword, char *PLword);

int main()
{
    char eword[80];
    char PLword[80];
    printf("Enter your English word: \n");
    scanf("%s", eword);
    PigLatin(eword, PLword);
    printf("PigLatin(): %s\n", PLword);
    return 0;
}

void PigLatin(char *eword, char *PLword)
{
    int counter = 1, PLcounter = 0;
    char temp[80];

    if (*eword == 'a' || *eword == 'e' || *eword == 'i' || *eword == 'o' || *eword == 'u' || *eword == 'y')
    {
        strcpy(PLword, eword);
        strcat(PLword, "ay");
    }
    else
    {
        temp[0] = *eword;
        while (*(eword + counter) != 'a' && *(eword + counter) != 'e' && *(eword + counter) != 'i' && *(eword + counter) != 'o' && *(eword + counter) != 'u' && *(eword + counter) != 'y')
        {
            temp[counter] = *(eword + counter);
            counter++;
        }
        temp[counter] = '\0';

        *PLword = *(eword + counter);
        while (*(eword + counter) != '\0')
        {

            PLcounter++;
            counter++;
            *(PLword + PLcounter) = *(eword + counter);
        }

        strcat(PLword, temp);
        strcat(PLword, "ay");
    }
}