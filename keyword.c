#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
      int i,flag = 0,m;
  char s[50][10]={
  "if","else","goto","continue","for", "return",
  "do", "extern",  "while", "break", "char", "int", "double", "float", "long",
 "void", "switch", "case", "struct","union", "typedef", "unsigned", "signed",
 "sizeof", "short", "enum", "register","const","default","static", "volatile",
 "auto"
},st[20];
// clrscr();
printf("\n Name: Hassan Suhail");
printf("\n Roll No.: 1901330100121");
printf("\n Input a string: ");
gets(st);
for(i=0;i<9;i++) {
   m=strcmp(st,s[i]);
   if(m==0)
   flag=1;
}
   if(flag==0)
  printf("\n It is not a keyword.");
  else
  printf("\n It is a keyword.");
  // getch();
return 0;
}
