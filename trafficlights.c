#include <stdio.h>
 int main() 
    {
 int traffic_light;
 printf("Enter a color(1 for Red, 2 for Yellow, 3 for Green):  ");    
 scanf("%d", &traffic_light);
  		
 
    switch(traffic_light) 
    {
        case 1:
  	      printf("\nStop");
  	      break;
  			
       case 2:
  	    printf("\nReady");
  	    break;
  			
       case 3:
  	    printf("\nGo");
  	    break;
     }
     return 0;
     }
