#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

int a;
int b;
int c;
int d;

/* INPUT */
printf( "Vpisi kvadratne/kubicne metre: ");
scanf("%d", &c);

/* menu */
printf("\nPretvori v:\n1: dm2\n2: cm2\n3: mm2\n4: dm3\n5: cm3\n6: mm3\n");
scanf("%d", &d);

/* pretvorba */
switch(d) {

   case 1:

      b = 100;

    break;

   case 2:

      b = 100 * 100;

    break;

   case 3:

      b = 100 * 100 * 100;

    break;

  case 4:

      b = 1000;

    break;

   case 5:

      b = 1000 * 1000;

    break;

   case 6:

      b = 1000 * 1000 * 1000;

    break;

   default:
    printf("\nTa opcija ne obstaja.\n");
   break;
}



a = b * c;

/* OUTPUT */
printf("\npretvorba: %d\n", a);

/* Amar Omerovic 7.A */
return 0;
}
