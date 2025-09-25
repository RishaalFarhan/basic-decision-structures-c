#include <stdio.h>
    int main()
   {
    int marks;
             printf("Enter your marks: ");
             scanf("%d", &marks);
  
   if(marks>=90) {
  	printf("A-Grade");
   }
  
   else if(marks>=89 && marks<=80)  {
  	printf("B-Grade");
   }
  
   else if(marks>=70 && marks<=79) {
  	printf("C-Grade");
   }
  
   else if(marks>=60 && marks<=69) {
  	printf("D-Grade");
   }
  
   else {
  	printf("F-Grade");
   }
  	return 0;
   }
