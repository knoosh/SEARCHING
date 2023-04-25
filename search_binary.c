#include<stdio.h>

int search_binary(int arr[], int target, int size)     //half and half and half...
{
    int lower = 0;
    int upper = size - 1;    
    int mid;       
    while(lower<=upper)
    {
        mid = (lower + upper)/2;          //setting a middle point
        if(arr[mid] == target)            //target found as mid
        return mid;                       

        else if(arr[mid] < target)         //searching target in the lower section
        lower = mid +1;                    //lower value is reset

        else
        upper = mid - 1;                   //searching target in upper section, upper is reset
    }
return -1;
}



