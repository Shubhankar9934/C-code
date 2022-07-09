
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int roll;
    int marks;
    int length;
   // struct dob
    //{
      //  int date,month,year;
    //}DOB[10];
}S[10];
struct dob
{
    int date;
    int month;
    int year;
}DOB[10];
void edit_name(struct student *S,int x)
{
//    for(int i=0;i<S[10]->length;i++)
//{
   // S[i]->name=x;
    //}
}
/*void edit_roll(struct student *S,int y)
{
    S[i]->roll=y;
}
void edit_marks(struct student *S,int z)
{
    S[i]->marks=y
}*/
int main()
{
    int i,n;

    printf("Enter number of details you want to enter:\n");
    scanf("%d",&n);
    S[10].length=n;
    for(i=0;i<n;i++)
    {
       printf("Enter name of student:\n");
       scanf("%s",&S[i].name);
       printf("Enter roll number of student:\n");
       scanf("%d",&S[i].roll);
       printf("Enter marks of student:\n");
       scanf("%d",&S[i].marks);
       printf("Enter date of birth:\n");
       scanf("%d%d%d",&DOB[i].date,&DOB[i].month,&DOB[i].year);
    }
    for(i=0;i<n;i++)
    {
    printf("NAME:%s\n",S[i].name);
    printf("ROLL:%d\n",S[i].roll);
    printf("MARKS:%d\n",S[i].marks);
    printf("Date of birth:%d/%d/%d\n",DOB[i].date,DOB[i].month,DOB[i].year);
    }
    printf("Enter index you want to edit:\n");
   /* for(i=0;i<n;i++)
    {
        S[i].name
    */

    return 0;
}
