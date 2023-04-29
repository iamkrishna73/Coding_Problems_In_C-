#include <stdio.h>
#include <conio.h>
#include<string.h>
int main() {
	int  i = 0, isConstant = 0;
       char str[100];
       clrscr();
       gets(str);
      printf("Name: Firdosh Ansari\n");
      printf("Rollno: 1901330100111\n");
      while(str[i]) {
	if(isdigit(str[i])) {
	    isConstant = 1;
	    break;
	 }
	i++;
      }
 if(isConstant) 
printf("String is constant");
      else
       printf("String is not costant");
    getch();
    return 0;
}
