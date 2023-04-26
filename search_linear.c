#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int arr[10]={1, 66, 89, 11, 34, 79, 67, 8, 63, 100};
	int target;
    int i;
	printf("the number to be checked:");
	scanf("%d", &target);

	for(i=0;i<10;i++)
	{
		if (arr[i]== target)
		{
			printf ("the number is present in the array\n");
			break;
		}
		else
		{
		printf("the number is not present");
		break;
		}
		
	}
	
	return 0;
}


