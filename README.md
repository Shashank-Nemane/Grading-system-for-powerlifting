Research:
link:Grading System in India: University Scale, Marks, Grades & Percentages
        https://strengthlevel.com/powerlifting-standards/lb

The grading system is a method of assessing students' performance by assigning a grade (A,B,C,D,E,F) or grade points instead of raw marks. It plays a vital role in tracking the progress of students.
There are types of grading:
In india there are 3 major types of grading,
Percentage System
CGPA-Based System (10-point scale, 5-point scale)
Letter Grade System
The use of  these systems varies with schools,colleges, institutes, depending on the local education board.


1)The Percentage System represents student performance as a percentage of marks obtained, divided into four categories:
75% and above – Distinction


60% to 75% – First Division


50% to 60% – Second Division


40% to 50% – Third Division


It is simple and widely used but lacks the detailed insights of CGPA systems.


2)  There are two main CGPA-based grading systems in India: the 10-point grading system and the 5-point grading system. Both systems are widely used across universities and colleges, particularly for undergraduate and postgraduate programs.


3)The Letter Grade System assigns grades like A, B, C, etc., to reflect student performance without exact numeric values. It’s less precise than CGPA and often used in high schools.
 Grades typically are:
A – Excellent


B – Good


C – Average


D – Below Average


F – Fail




Analysis:
Here for my idea i am using a grading system similar to the letter grading system just with different classes such as beginner ,novice, advanced ,elite ,international level.
For powerlifting I found out that the ratio of strength to lift total varies from source to source which made it confusing but in the end I decided to use strengthlevel.com for ease of understanding and simplicity.


Here the logic behind developing a c program on a grading system .
     Step 1:Take input from the user about their gender, weight , lift total .


     Step 2: Collect Data
 Gather estimated ratios for each case according to gender ,weight,lift total.


 Step 3: Processing of input
Compare the input of lift total with the case respective ratio of strength to bodyweight.


Step 4: Output
Print the respective output based on the lift total input taken.



Ideate:
           To classify aspiring powerlifters into various levels based on their weight  and combined total lifts (squat + bench press + deadlift), providing a clear progression path and benchmarks for athletes.Here i have taken 5 levels .
1)Beginner
2)Novice
3)Intermediate
4)Advanced
5)Elite
6)International level



Build:-

CODE:

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



TEST:


There are a total of 10 cases ,so I am showing just two cases of them .

Case 1: Male

Enter your name shashank

What is your gender? 
 1)Male 
 2)Female
1

Enter your bodyweight in Kg 50

Enter your total lift (Bench+Squat+Deadlift) in Kg 500

YOU ARE UNREAL
shashank you are strong enough to compete at international level
 

Case 2: Female

Enter your name Sharayu

What is your gender? 
 1)Male 
 2)Female
2

Enter your bodyweight in Kg 50

Enter your total lift (Bench+Squat+Deadlift) in Kg 200

Sharayu you are at advanced level in powerlifting
Your strength to bodyweight ratio is 4.00
