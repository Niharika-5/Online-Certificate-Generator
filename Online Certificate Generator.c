//Course Project II/I - DataStructures - By G2,G9,H0,H7
//Online Certificate Generator
#include<stdio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#define MAX 3
int queue[MAX];
int front=-1,rear=-1;
void push(int);
int pop();
int main()
{
FILE *f1,*f2,*f3;
int choice;
int x=0;
char name[30],num[20],course[30];
char g,c;
char ch='y';
printf("\t\t\t\t\t\tONLINE CERTIFICATE LIBRARY\n");
printf("=======================================================================================================================");
printf("\n Enter your Details:\n");
printf("NAME:");
fflush(stdin);
gets(name);
printf("\nGENDER:");
scanf("%c",&g);
if((g=='m'||g=='M')||(g=='f'||g=='F'))
{
do
{
printf("\nCOURSE COMPLETED: \n 1.NPTEL BASED\n 2.INTERNSHALA BASED\n 3.VNR BASED\nEnter Your Option:");
scanf("%d",&choice);
switch(choice)
{
    case 1: printf("\n Enter the Name of the Course Completed:");
                  fflush(stdin);
                  gets(course);
                  f1=fopen("NPTEL mock.txt","a");
                  if(g=='M'||g=='m')
                      {
                       fprintf(f1,"\n=======================================================================================================================\n\t\tNATIONAL PROGRAM ON TECHNOLOGY ENABLED LEARNING\n\n\t\t\tCERTIFICATE OF COMPLETION\n\n\tAwarded to Mr.%s for completing the course on %s\n\t\t\tduring the year 2019-2020\n=======================================================================================================================",name,course);
                       fprintf(f1,"\n\t\t This certificate is e - verifiable at NPTEL.org\n\n\n");
                      }
                  if(g=='F'||g=='f')
                     {
                        fprintf(f1,"\n=======================================================================================================================\n\t\tNATIONAL PROGRAM ON TECHNOLOGY ENABLED LEARNING\n\n\t\t\tCERTIFICATE OF COMPLETION\n\n\tAwarded to Ms.%s for completing the course on %s\n\t\t\tduring the year 2019-2020\n=======================================================================================================================",name,course);
                        fprintf(f1,"\n\t\t This certificate is e - verifiable at NPTEL.org\n\n\n");
                     }
                  fclose(f1);
                  printf("\n Your Certificate has been generated and downloaded, please view it in the folder");
                  printf("\n");
                  if((rear==-1||queue[0]!=1)&&(queue[1]!=1&&queue[2]!=1))
                  {
                       push(1);
                       x=x+1;
                  }
                  break;

    case 2: printf("\n Enter the Name of the Internship Completed:");
                  fflush(stdin);
                  gets(course);
                  f2=fopen("INTERNSHIP.txt","a");
                  if(g=='M'||g=='m')
                      {
                       fprintf(f2,"\n=======================================================================================================================\n\t\t\t\tINTERNSHALA\n\n\t\t\tCERTIFICATE OF COMPLETION\n\n\tAwarded to Mr.%s for completing the Internship on %s\n\t\t\tduring the year 2019-2020\n=======================================================================================================================",name,course);
                       fprintf(f2,"\n\t\t This certificate is e - verifiable at INTERNSHALA.org\n\n\n");
                      }
                  if(g=='F'||g=='f')
                     {
                        fprintf(f2,"\n=======================================================================================================================\n\t\t\t\tINTERNSHALA\n\n\t\t\tCERTIFICATE OF COMPLETION\n\n\tAwarded to Ms.%s for completing the Internship on %s\n\t\t\tduring the year 2019-2020\n=======================================================================================================================",name,course);
                        fprintf(f2,"\n\t\t This certificate is e - verifiable at INTERNSHALA.org\n\n\n");
                     }
                  fclose(f2);
                  printf("\n Your Certificate has been generated and downloaded, please view it in the folder");
                  printf("\n");
                   if((rear==-1||queue[0]!=2)&&(queue[1]!=2&&queue[2]!=2))
                  {
                       push(2);
                       x=x+1;
                  }
                  break;

    case 3: printf("\nEnter the Name of the Workshop Completed:");
                  fflush(stdin);
                  gets(course);
                  f3=fopen("VNR.txt","a");
                  if(g=='M'||g=='m')
                      {
                       fprintf(f3,"\n=======================================================================================================================\n\t\t\t\tVNR VJIET\n\n\t\t\tCERTIFICATE OF COMPLETION\n\n\tAwarded to Mr.%s for completing the workshop on %s\n\t\t\tduring the year 2019-2020\n=======================================================================================================================",name,course);
                       fprintf(f3,"\n\t This certificate is e - verifiable in your EduPrime Database");
                      }
                  if(g=='F'||g=='f')
                     {
                        fprintf(f3,"\n=======================================================================================================================\n\t\t\t\tVNR VJIET\n\n\t\t\tCERTIFICATE OF COMPLETION\n\n\tAwarded to Ms.%s for completing the workshop on %s\n\t\t\tduring the year 2019-2020\n=======================================================================================================================",name,course);
                        fprintf(f3,"\n\tThis certificate is e - verifiable in your EduPrime Database");
                     }
                  fclose(f3);
                  printf("\n Your Certificate has been generated and downloaded, please view it in the folder");
                  printf("\n");
                   if((rear==-1||queue[0]!=3)&&(queue[1]!=3&&queue[2]!=3))
                  {
                       push(3);
                       x=x+1;
                  }
                       break;

   default: printf("\n Please select a valid course!");
                  break;
}
printf("\n Do You Wish To Continue - (Y/N)");
fflush(stdin);
ch=getchar();
printf("\n=======================================================================================================================");
}while(ch=='y'||ch=='Y');
printf("\n All Your Certificates have been generated and saved. Would You like to view them on the screen now?(Y/N)");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
{
do
{
Sleep(2000);
system("cls");
switch(pop())
{
        case 1: f1=fopen("NPTEL mock.txt","r");
                      do
                      {
                          c=fgetc(f1);
                          printf("%c",c);
                          Sleep(45);
                      }while(c!=EOF);
                      fclose(f1);
                      x=x-1;
                      break;

        case 2:  f2=fopen("INTERNSHIP.txt","r");
                       do
                      {
                          c=fgetc(f2);
                          printf("%c",c);
                          Sleep(45);
                      }while(c!=EOF);
                      fclose(f2);
                      x=x-1;
                      break;

         case 3: f3=fopen("VNR.txt","r");
                       do
                      {
                          c=fgetc(f3);
                          printf("%c",c);
                          Sleep(45);
                      }while(c!=EOF);
                      fclose(f3);
                      x=x-1;
                      break;

          case -1:printf("No certificates could be located");
                        break;
}
}while(x>0);
}
}
else
{
 printf("\nPlease Enter A Valid Gender");
}
return 0;
}
void push(int x)
{
    if(rear==-1)
        {
        rear=rear+1;
        queue[rear]=x;
        }
    else
    {
        rear=rear+1;
        queue[rear]=x;
    }
}

int pop()
{
int a;
    if(front==-1&&rear==-1)
        a=-1;
    else if(front==-1)
    {
        front=front+1;
        a=queue[front];
        front++;
    }
    else
       {
        a=queue[front];
        front++;
       }
return a;
}
