#include<stdio.h>
int main()
    {
        int marks[3],i;
        for(i=0;i<3;i++)
        {
            printf("Enter marks of student %d: ", i + 1);
            scanf("%d",&marks[i]);
        }
       for(i=0;i<3;i++)
        {
            printf("Marks of student %d: %d\n", i + 1, marks[i]); 
        }
       
     return 0;
        
    }        








    