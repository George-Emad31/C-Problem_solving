#include <stdio.h>

typedef struct {
char name[30];
int id ;
float grade;
} S_student;

int main ()
{
int i,n=0;

printf("please enter number of Students " );
scanf("%d",&n);
getchar();
S_student Student[n];
printf("\nplease Enter students information:\n");
for (i=0 ;i<n;i++)
{

printf("\nplease Enter student [%d] Name:\n",i+1);
fgets(Student[i].name, sizeof(Student[i].name), stdin);
//getchar();
printf("\nplease Enter student [%d] ID:\n",i+1);
scanf("%d",&Student[i].id);
getchar();
printf("\nplease Enter student [%d] Grade:\n",i+1);
scanf("%f",&Student[i].grade);
getchar();
printf("\n********************\n");
}
 printf("/************ Displaying information ************/ ");
 for(i = 0; i < 3; i++) {

        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", Student[i].name);
        printf("\nID_number: %d\n", Student[i].id);
        printf("\nGrade: %f\n", Student[i].grade);
        printf("\n********************\n");

}
return 0 ;
}
