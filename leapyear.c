#include <stdio.h>
 int main() 
 {
 int Year;
 	printf("Enter a Year: ");
 	scanf("%d", &Year);
 	
 if (Year%4==0 && Year%100!=0 || (Year % 400 == 0)) {
 	printf("it's a leap year");
 }	
 else {
 	printf("it's not leap year");
 }
 	
 	return 0;
 }
