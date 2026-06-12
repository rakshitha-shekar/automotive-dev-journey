#include <stdio.h>
int main() {
	int n;
	do {
		printf("Enter any number: ");
		scanf("%d", &n);
		if (n == 0){
		printf("Existing....\n", n);
		}
		else if(n%2 == 0){
		printf("%d is Even number\n", n);
		}
		else if(n%2 != 0){
		printf("%d is Odd number\n", n);
		}
		
	}
		while(n!=0);
return 0;
}
