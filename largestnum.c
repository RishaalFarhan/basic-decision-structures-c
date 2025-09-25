#include <stdio.h>

int main() {
int num1;
int num2;
int num3;

printf("Enter three numbers: ");
scanf("%d", &num1);
scanf("%d" ,&num2);
scanf("%d", &num3);

if(num1>num2) {
     if(num1>num3) {
         printf("Largest number is %d\n", num1);
}
     else {
         printf("Largest number is %d\n", num3);
}
} 
else {
    if(num2>num3) {
         printf("Largest number is %d\n", num2);
} 
    else {
         printf("Largest number is %d\n", num3);
 }
}

return 0;
}
