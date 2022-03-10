#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i,ch,j,k,n1,n2,set1[10],set2[10],set3[20],flag,p;
int wish;
void main()
{
 printf("Enter the size of the first array");
 scanf("%d",&n1);
 printf("Enter the elements of first array");
 for(i=0;i<n1;i++)
 {
  scanf("%d",&set1[i]);
 }
 printf("Enter the size of the second array");
 scanf("%d",&n2);
 printf("Enter the elements of second array");
 for(j=0;j<n2;j++)
 {
  scanf("%d",&set2[j]);
 }

}
do
{
 switch(ch);
 printf("Basic operations");
 printf("\n1.Union\n2.Intersection\n3.Difference\n4.Exit");
 printf("\nEnter the choice");
 scanf("%d",&ch);
 case 1:
 k=0;
 for(i=0;i<n1;i++)

  set3[k]==set1[i];

 for(i=0;i<n2;i++)
 {
  flag==1;
  for(j=0;j<n1;j++)
  {
   if(set2[i]==set1[j])
   {
    flag=0;
    break;
   }
   if(flag==1)
   {
    set3[k]==set2[i];
    k++;
   }
 }
 k=p;
 for(k=0;k<p;k++)
 }

 case 2:
 k=0;
 for(i=0;i<n1;i++)
 {
  flag==1;
  for(j=0;j<n2;j++)
  {
    if(set2[i]==set1[j])
    {
     flag=0;
     break;
    }
    if(flag==0)
    {
     set3[k]==set2[i];
     k++;
    }
   }
 }

 case 3:
 k=0;
 for(i=0;i<n1;i++)
 {
  flag==1;
  for(j=0;j<n2;j++)
  {
    if(set1[i]==set2[j])
    {
     flag=0;
     break;
    }
    if(flag==1)
    {
     set3[k]==set2[j];
     k++;
    }
   }
    k=p;
    for(k=0;k<p;k++)
  }

    printf("Do you want to continue(y/n)?");


while(ch!=4);
{
 return();
}
}





