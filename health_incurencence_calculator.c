#include<stdio.h>
int main(){
    int age,premium,health=0;
    char gender;
    printf("age:");
    scanf("%d", &age);
    printf("gender (M/F):");
    scanf(" %c",&gender);
    printf("health(1 for healthy /0 for unhealthy):");
    scanf(" %d", &health);
    printf("customer details\n");
    printf("%d\n",age);
    printf("gender:%c\n", gender);
    
    if(health==1){
        printf("healthy\n");
    }
    else{
        printf("unhealthy\n");
    }
    if(health==1){

        if(age<25 && gender=='m'){
            premium=5000;
            printf("the premium is %d", premium);
        }
        else if(age<25 && gender=='f'){
            premium=5000;
            premium = premium - (10*premium/100);
            printf("the premium is %d", premium);
        }
        
      }
      else if(health==0){
        if(age<25){
            printf("no premium\n");
        }
      }
      if(health==1){
        if(age>=25 && age<=40 && gender=='m'){
            premium=7000;
            printf("the premium is %d", premium);
        }
        else if(age>=25 && age<=40 && gender=='f'){
            premium=7000;
            premium=premium - (10*premium/100);
            printf("the premium is %d", premium);

        }
    }
    if(health==0){
        if(age>=25 && age<=40 && gender=='m'){
            premium=9500;
            printf("the premium is %d", premium);
        }
        else if(age>=25 && age<=40 && gender=='f'){
            premium=9500;
            premium=premium - (10*premium/100);
            printf("the premium is %d", premium);
        }
    

    }  
    if(health==1){
        if(age>=41 && age<=60 && gender=='m'){
            premium=10000;
            printf("the premium is %d", premium);
        }
        else if(age>=41 && age<=60 && gender=='f'){
            premium=10000;
            premium=premium - (10*premium/100);
            printf("the premium is %d", premium);
        }
    }
    if(health==0){
        if(age>=41 && age<=60 && gender=='m'){
            premium=13000;
            printf("the premium is %d", premium);
        }
        else if(age>=41 && age<=60 && gender=='f'){
            premium=13000;
            premium=premium - (10*premium/100);
            printf("the premium is %d", premium);
        }
    }
    if(health==1){
        if(age>60 && gender=='m'){
            premium=15000;
            printf("the premium is %d", premium);
        }
        else if(age>60 && gender=='f'){
            premium=15000;
            premium=premium - (10*premium/100);
            printf("the premium is %d", premium);
        }
    }
    if(health==0){
        if(age>60){
            printf("no premium\n");
        }
    }
 }

    
