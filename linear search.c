#include <stdio.h>
int linearSearch (int arr[], int size, int value);

 int main()
 {
   int a[10] = {9, 8, 7, 0, 6, 5, 3, 2, 4, 1};
    int result, key;
      
	   printf("Enter number to find: ");
	    scanf("%d", &key);

      result = linearSearch(a, 10, key);
      if (result == -1)
	  {
	   printf("Not found.\n");
      }
	   
     else
     {
	   printf("The number %d is found at index %d.\n", key,result);
     }
	 return 0;
}

 int linearSearch(int arr[], int size, int value) 
 {
    int i;
    for (i = 0; i < size; i++) 
	{
	  if (arr[i] == value)
	  {
	    return i;
	  }
    }  
	return -1;
 }
