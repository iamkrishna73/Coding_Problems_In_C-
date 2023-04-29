#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <string.h>

int main() {
      char str[20], i = 0, len = 0, isComment = 0, isStart = 0;
      // clrscr();
      printf("Name: Govind singh \n Roll_NO: 1901330100115\n");
      gets(str);
      len = strlen(str);
      if(str[0] == '/' && str[1] == '/') isComment = 1;
      else if(str[0] ==  '/' && str[1] == '*') isStart = 1;
      for(i = 2; i < len - 1; i++) {
       if(isStart && str[i] == '*' &&  str[i + 1] == '/') {
            isComment = 1;
       }
      }
      if(isComment) printf("Line is a comment\n");
      else printf("Line is not a comment\n");
      getch();
      return 0;
}
