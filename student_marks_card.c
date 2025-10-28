#include<stdio.h>
 int main(){
     float s1,s2,s3,s4,s5,perc,attendence;
     printf("enter the marks of 5 subjects: \n");
     scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
     perc=((s1+s2+s3+s4+s5)/500.0)*100;
     printf("total percentage is %f\n",perc);
     printf("enter the attendene of student:\n");
    scanf("%f",&attendence);
    if(attendence<75){
    printf("the student is fail due to less percentage\n");
    }
         if(perc<50 && attendence<95){
            printf("fail\n");
         }
      if(attendence>75 && perc>=90){
        
            printf("A+ excellent\n");
        
        }
        else if(attendence>75 &&perc>=80 && perc <=89){
            printf("A very good\n");
        }
        else if(attendence>75 && perc>=70 && perc<=79){
            printf("B good\n");
        }
        else if(attendence>75 &&perc>=60 && perc<=69){
            printf("C average\n");
        }
        else if(attendence>75 &&perc>=50 && perc<=59){
            printf("D pass\n");
        }
        else if(perc>=45 && perc<=49 && attendence>=95){
            perc=perc+5;
            if(perc>=50){
                printf("D pass\n");
                
            }
            
        }
    
    return 0;
    }

 