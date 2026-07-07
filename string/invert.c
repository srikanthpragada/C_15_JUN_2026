#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>

void main()
{
char name[20];
int i;

printf("Enter a name : ");
gets(name);

for(i = 0;name[i] != '\0';i++)
{
  if(islower(name[i]))
    name[i] = toupper(name[i]);
  else
    name[i] = tolower(name[i]);

  putch(name[i]);
}

}
