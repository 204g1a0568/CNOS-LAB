#include<stdio.h>
void display();
int fr[3];
void main()
{
int i,j,page[12]={2,3,7,4,5,3,1,9,6,2,1,8};
int  flag1=0,flag2=0,top=0,pf=0,frsize=0;
for(i=0;i<3;i++)
{
fr[i]=-1;
}
for(j=0;j<12;j++)
{
  flag1=0;
flag2=0;
for(i=0;i<12;i++)
{
if(fr[i]==page[j])
{
flag1=1;
flag2=1;
break;
}
}
if(flag1==0)
{
for(i=0;i<frsize;i++)
{
if(fr[i]==-1)
{
fr[i]=page[j];
flag2=1;
break;
}
}
}
if(flag2==0)
{
fr[top]=page[j];
top++;
pf++;
if(top>=frsize)
{
top=0;
}
}
display();
}
printf(" Number of page faults : %d",pf+frsize);
}
void display()
{
int p;
printf("\n");
for(p=0;p<3;p++)
printf("%d\t",fr[p]);
}

