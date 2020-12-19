#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1; 
    char *ptr;
    printf("Employee Details Manager\n");
    printf("\nEnter Details For Employees : \n");
    
    

    while (i<4)
    {
        printf("\nEmployee %d : \n",i);
        printf("Enter No. Of Characters In Your Employee ID : ");
        scanf("%d",&n);
        ptr=(char*)malloc((n+1)*sizeof(char));
        printf("Enter Employee ID : ");
        scanf("%s",ptr);
        printf("Employee ID : %s \n",ptr);
        free(ptr);
        i++;
    }
    
    
    return 0;
}