//---

#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct student s;
    printf("Enter rollno :");
    scanf("%d",&s.rollno);
    printf("Enter name :");
    scanf("%s",&s.name);
    printf("Enter marks :");
    scanf("%f",&s.marks);
    printf("Roll no - %d\n",s.rollno);
    printf("Name - %s\n",s.name);
    printf("Marks - %f\n",s.marks);
}
