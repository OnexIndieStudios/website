#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(){

int b = 0;
char d; /* char 1 */
char e; /* char 2 */
char ime[30];

printf("Vpisi svoje ime: ");
scanf("%s", &ime); /* Vpiši ime */

int a = strlen(ime) - 1;

while(1 == 1){
   if(a != b){
    d = ime[b];
    e = ime[a];

    ime[b] = e;
    ime[a] = d;

    a--;
    b++;

   } else {
     printf("\n %s \n", ime);
   }
}

return 0;
}


