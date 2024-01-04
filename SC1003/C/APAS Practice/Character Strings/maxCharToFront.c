#include <stdio.h>
#include <string.h>

void maxCharToFront(char *str);

int main()
{
   char str[80], *p;

   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p = strchr(str, '\n'))
      *p = '\0';
   printf("maxCharToFront(): ");
   maxCharToFront(str);
   puts(str);
   return 0;
}

void maxCharToFront(char *str)
{
   int large = 0;
   char temp;

   for (int i = 1; i < strlen(str); i++)
   {
      if (str[i] > str[large])
      {
         large = i;
      }
   }
   for (int j = large; j > 0; j--)
   {
      temp = str[j];
      str[j] = str[j - 1];
      str[j - 1] = temp;
   }
}