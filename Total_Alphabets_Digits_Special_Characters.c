#include <stdio.h>
#include <string.h>

int main()
{
  char s[1000];
  int i, alphabets = 0, digits = 0, specialcharacters = 0;

  printf("Enter  the string: ");
  gets(s);

  for (i = 0; s[i]; i++)
  {
    if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
      alphabets++;
    else if (s[i] >= 48 && s[i] <= 57)
      digits++;
    else
      specialcharacters++;
  }

  printf("Total Alphabets : %d\n", alphabets);
  printf("Total Digits : %d\n", digits);
  printf("Total Special characters : %d", specialcharacters);

  return 0;
}
