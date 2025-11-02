#include <stdio.h>

int main() {
   int student,attendence=0,i;
   float total_attendence=0;
    float percentage=0.0,avg_attendence=0.0,avg1_attendence=0.0;
    int eligible=0,ineligible=0;
    


   printf("enter the number of students:");
   scanf("%d",&student);    

   for(int i=1;i<=student;i++){
     
     printf("enter the the number of days student %d, present in the class (out of 30):",i);
     scanf("%d",&attendence);
     if(attendence<0 || attendence>30){
      printf("invalid attendence\n");
      return 0;
     }
     percentage=(attendence/30.0)*100.0;
     if(percentage>=75){
        printf("student %d:%.2f%%-eligible\n",i,percentage);
        eligible++;
     }
     else{
        printf("student %d:%.2f%%-ineligible\n",i,percentage);
        ineligible++;
     }
     avg1_attendence+=(float)attendence/student;
     avg_attendence=(avg1_attendence/30)*100;
    }
    printf("--------class summary--------\n");
    printf("total number of students= %d\n",student);
  
printf("total number of eligible students= %d\n",eligible);
printf("total number of ineligible students= %d\n",ineligible);
printf("average attendence=%f",avg_attendence);


   
   return 0;
}