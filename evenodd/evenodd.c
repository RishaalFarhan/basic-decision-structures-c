#include <stdio.h>
int main() {
int num;
printf("Enter any number: ");
scanf("%d", &num);
if(num % 2 == 0) {
   printf("Number entered is even\n");
}
else {
   printf("Number entered is odd\n");
}
return 0;
}
