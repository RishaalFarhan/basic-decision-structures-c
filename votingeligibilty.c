#include <stdio.h>
int main() {
int voterage;
printf("Enter voter age: ");
scanf("%d", &voterage);
if(voterage>=18) {
   printf("Eligible to vote \n");
}
else {
   printf("Not eligible to vote \n");

}
return 0;
}
