#include <stdio.h>
#include <unistd.h>

int main(){

int array1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int a = 0;
int b = 1;
int c, d;

printf("Vpisi stevilo 1: ");
scanf("%d", &array1[0]); /* Vpisi stevilo 1 */

printf("Vpisi stevilo 2: ");
scanf("%d", &array1[1]); /* Vpisi stevilo 2 */

printf("Vpisi stevilo 3: ");
scanf("%d", &array1[2]); /* Vpisi stevilo 3 */

printf("Vpisi stevilo 4: ");
scanf("%d", &array1[3]); /* Vpisi stevilo 4 */

printf("Vpisi stevilo 5: ");
scanf("%d", &array1[4]); /* Vpisi stevilo 5 */

printf("Vpisi stevilo 6: ");
scanf("%d", &array1[5]); /* Vpisi stevilo 6 */

printf("Vpisi stevilo 7: ");
scanf("%d", &array1[6]); /* Vpisi stevilo 7 */

printf("Vpisi stevilo 8: ");
scanf("%d", &array1[7]); /* Vpisi stevilo 8 */

printf("Vpisi stevilo 9: ");
scanf("%d", &array1[8]); /* Vpisi stevilo 9 */

printf("Vpisi stevilo 10: ");
scanf("%d", &array1[9]); /* Vpisi stevilo 10 */

while(1 == 1){

if(b == 10){a = 0; b = 1;}

if (array1[a] < array1[b] || array1[a] == array1[b]){

a++;
b = a + 1;

printf("\n %d %d %d %d %d %d %d %d %d %d \n", array1[0], array1[1], array1[2], array1[3], array1[4], array1[5], array1[6], array1[7], array1[8], array1[9]);

} else {

c = array1[a];
d = array1[b];

array1[b] = c;
array1[a] = d;

a++;
b = a + 1;

printf("\n %d %d %d %d %d %d %d %d %d %d \n", array1[0], array1[1], array1[2], array1[3], array1[4], array1[5], array1[6], array1[7], array1[8], array1[9]);

}

sleep(1);

}

return 0;
}
