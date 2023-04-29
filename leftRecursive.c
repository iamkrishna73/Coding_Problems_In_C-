#include <stdio.h>
int main() {
    char var, a, b;
    char pdn[10];
    int i = 3;
    printf("Govind Singh \n 1901330100115 \n");
    printf("Enter the grammar");
    gets(pdn);
    var = pdn[0];
    if(var == pdn[i]) {
        a = pdn[i + 1];
        printf("left recursive \n");
    while(pdn[i] != 0 && pdn[i] != '|') {
        i++;

        if(pdn[i] != 0) {
            b = pdn[i + 1];
            printf("GRMMAR WIHOUT LEFT RECUSION");
            printf("%c->%c->%c\", var, b, var);
            printf("\n%c\'=>%c%c\", var, a, var);
        }
        else
        printf("grammar can't be reduced");
    }
    else
    printf("grammar is not left recursive \n");
    return 0;
}
