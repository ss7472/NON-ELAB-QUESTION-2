#include <stdio.h>
#include <stdlib.h>
 
struct student
{
    char name[30];
    int roll;
    float perc;
};
 
int main()
{
    struct student *pstd;
     
        pstd=(struct student*)malloc(1*sizeof(struct student));
     
    if(pstd==NULL)
    {
        printf("Insufficient Memory, Exiting... \n");
        return 0;
    }
     
    printf("Enter name: ");
    gets(pstd->name);
    printf("Enter roll number: ");
    scanf("%d",&pstd->roll);
    printf("Enter percentage: ");
    scanf("%f",&pstd->perc);
     
    printf("\nEntered details are:\n");
    printf("Name: %s, Roll Number: %d, Percentage: %.2f\n",pstd->name,pstd->roll,pstd->perc);
      
    return 0;
}
