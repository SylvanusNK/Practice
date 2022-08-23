#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

  printf("Enter any character: ");
  scanf("%c", &ch);

  if (ch >= 65 && ch <= 90)
    printf("You entered an upper case alphabet");
  else if (ch >= 97 && ch <= 122)
    printf("You entered an lower; case alphabet");
  else if (ch >= 48 && ch <= 57)
    printf("You entered a digit");
  else
    printf("End of program");
  return (0);
}

