#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main(){
/* Arraji / stringi */
char ime[30];
char ime2[30] = "                              ";

printf("Vpisi svoje ime: ");
scanf("%s", &ime); /* Vpisi ime */

/* variable */
int a = 0; /* stevilka, ki se povecuje */
int b = strlen(ime) - 1; /* stevilka, ki se zmanjsuje */
int c = strlen(ime); /* ko ta stevilka doseze polovico dolžine imena se program zaustavi (za soda stevila) */
int d = c / 2; /* definicija polovice imena */

/* preveri, ce je dolžina besede soda */
if ( c%2 == 0 ){

while(1 == 1){

if (c != d){

ime2[a] = ime[b];
ime2[b] = ime[a];
a++;
b--;
c--;

} else {

printf("\n%s\n", ime2);
sleep(10000);

}

}

} else {

while(1 == 1){

if (a != b){

ime2[a] = ime[b];
ime2[b] = ime[a];
a++;
b--;

} else /* za besede dolzine liha */{

ime2[a] = ime[b];
ime2[b] = ime[a];
a++;
b--;
printf("\n%s\n", ime2);
sleep(10000);
}

}

}

return 0;
}


