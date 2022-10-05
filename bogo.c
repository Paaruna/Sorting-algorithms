#include <stdio.h>

#include <stdlib.h> 

void shuffle(int *array, size_t n)
{
    if (n > 1) 
    {
        size_t i;
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}

int arraySortedOrNot(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
 
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
     return arraySortedOrNot(arr, n - 1);
}


int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

int main(){

    shuffle(arr,20);
    
    int n = sizeof(arr) / sizeof(arr[0]);
    while(!arraySortedOrNot(arr, n)){
        shuffle(arr,20);
        for(int i = 0; i<20; i++){
            printf("%i ",arr[i]);
        }
        printf("\n");
    }

    printf("done\n");


    return 0;
}