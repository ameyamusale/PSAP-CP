#include<stdio.h>
void park();
void check();
void insights();
void calculate();
void exit();

int vehicle_count=0,C;
int max=100;

typedef struct
 {
 int hours;
 char name[20];
 char type[20];
 int id;
}vehicle;

vehicle parking[max];

int main()

{
  int choice;

  while(1)
  {
    printf("*********WELCOME TO PARKING MANAGEMNT SYSTEM********* \n");
    printf("1.park vehicle \n ");
    printf("2.check no of vehicle \n ");
    printf("3.check insights \n ");
    printf("4.calculate bill \n ");
    printf("5.exit  \n ");

  printf("enter a choice \n ");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
    park();
    break;

    case 2:
    check();
    break;

    case 3:
    insights();
    break;

    case 4:
    calculate();
    break;

    case 5:
    exit();
    break;

    default:
    printf("your have entered a invalid choice \n ");
    break;
  }

 }
 return 0;
}
void park()
{
  if(vehicle_count==max)
  {
    printf("parking is full \n ");
  }
  else
  {
  
  printf("enter vehicle type(car or scooter)\n ");
  scanf("%s",&parking[vehicle_count].type);
   
 
 printf("enter your vehicle name \n ");
 scanf("%s",&parking[vehicle_count].name);


printf("enter your parking hrs \n ");
scanf("%d",&parking[vehicle_count].hours);

parking[vehicle_count].id=vehicle_count+1;

vehicle_count++;
  }
}
void check()
{
  if(vehicle_count==0)
  {
    printf("no vehicles parked \n ");
  }
  else
  {
    printf("no of vehicles parked are %d \n ",vehicle_count);
    
        for(int i=0;i<vehicle_count;i++)
    {
      printf("`%d vehicle id \n ",parking[i].id);
      printf("`%s vehicle name \n ",parking[i].name);
      printf("`%d vehicle hours   \n ",parking[i].hours);
      printf("%s vehicle type \n ",parking[i].type);
    }
  }
}
void calculate()
{
  int id;
  printf("entre your vehicle id \n ");
  scanf("%d",&id);

  

}