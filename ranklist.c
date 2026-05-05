#include <stdio.h>
struct Student
{
int roll;
char name[50];
float marks;
};
int main()
{
struct Student s[100], temp;
int n, i, j;
printf("Enter number of students: ");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
printf("Enter roll, name, marks: ");
scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
}
for(i = 0; i < n-1; i++)
{
for(j = i+1; j < n; j++)
{
if(s[i].marks < s[j].marks)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
}
printf("\n--- Rank List ---\n");
for(i = 0; i < n; i++)
{
printf("Rank %d: Roll=%d Name=%s Marks=%.2f\n",
i+1, s[i].roll, s[i].name, s[i].marks);
}
return 0;
}
