#include<stdio.h>
int main()
{
  char psswd[11];
  char c;
  int i;

  printf("enter 10 characters for password:");

  for(i=0;i<11;i++)

  {

    c=getch();

    psswd[i]=c;

  }

  psswd[i]='\0';

  printf("you enter the password:%s",psswd);

  return 0;

}