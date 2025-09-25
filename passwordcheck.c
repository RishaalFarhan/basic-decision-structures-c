#include <stdio.h>
int main() 
{
int Password;
	printf("Enter 4 number Password: ");
	scanf("%d", &Password);
	
if(Password==3421) {
	printf("Access Granted");
}

else {
	printf("Access Denied");
}	
	
return 0;
}
