#include<stdio.h>
int main()
{
  int age,gender;
  float total,weight,ratio;
  ratio=total/weight;  
  char name[50];
  //Taking input from user  
  printf("\nEnter your name ");
  scanf("%s",&name);
  printf("\n");
  gender:
  printf("What is your gender? \n 1)Male \n 2)Female\n");
  scanf("%d",&gender);
  if (gender==1 || gender==2)
     {}
     else
     {
      printf("Invalid input ,enter a valid input \n");
      
      goto gender;
     }
      printf("\n");
  weight:
   printf("Enter your bodyweight in Kg ");
  scanf("%f",&weight);
  if(weight<=0)
  {
    printf("Invalid Input ,enter a valid input \n");

    goto weight;
  }
  printf("\n");
  total:
  printf("Enter your total lift (Bench+Squat+Deadlift) in Kg ");
  scanf("%f",&total);
  if(total<=0)
  {
    printf("Invalid Input ,enter a valid input \n");
    
    goto total;
  }
  printf("\n");
 //Compare the input from user with references
 if(gender==1)
 {
    if(total<=weight*3)
    {
        ratio=total/weight; 
        printf("%s you are a beginner in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else if(total<=weight*3.8)
    {
        ratio=total/weight; 
        printf("%s you are a novice in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else if(total<=weight*4.8)
    {
        ratio=total/weight;
        printf("%s you are at intermediate level in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else if(total<=weight*5.8)
    {
        ratio=total/weight;
        printf("%s you are at advanced level in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
    else if(total<=weight*7)
    {
        ratio=total/weight;
        printf("%s you are an elite athlete in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
    else
    {
        printf("YOU ARE UNREAL\n");
        printf("%s you are strong enough to compete at international level",name);
    }
 } 

  else if(gender==2)
 {
    if(total<=weight*2)
    {
        ratio=total/weight;
        printf("%s you are a beginner in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else if(total<=weight*2.8)
    {
        ratio=total/weight;
        printf("%s you are a novice in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else if(total<=weight*3.6)
    {
        ratio=total/weight;
        printf("%s you are at intermediate level in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else if(total<=weight*4.6)
    {
        ratio=total/weight;
        printf("%s you are at advanced level in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else if(total<=weight*5.6)
    {
        ratio=total/weight;
        printf("%s you are an elite athlete in powerlifting\n",name);
        printf("Your strength to bodyweight ratio is %.2f",ratio);
    }
     else
    {
        printf("YOU ARE UNREAL\n");
        printf("%s you are strong enough to compete at international level",name);
    }
 } 
     return 0;
}

