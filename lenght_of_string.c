#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){

int a;
char ime[30];

printf("Vpisi svoje ime: ");
scanf("%s", &ime); /* Vpiši ime */

a = strlen(ime) - 1;

printf("\n%d\n", a); /* odgovor */
printf("\n");
system("pause");
return 0;
}


