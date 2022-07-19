#include <stdio.h>
int main(void)
{
    struct data
    {
        int month;
        int day;
        int year;
    };
    struct data d1;
    scanf("%d %d %d",&d1.month,&d1.day,&d1.year);
    if (d1.month==1||d1.month==3||d1.month==5||d1.month==7||d1.month==8||d1.month==10||d1.month==12){
    if (30>=d1.day>0)
    d1.day+=1;
    else if (d1.day==31){
        d1.day=1;
        if (11>=d1.month>0)
        d1.month+=1;
        else if(d1.month==12){
        d1.year+=1;
        d1.month=1;
        }
    }
    }
    else if (d1.month==4||d1.month==6||d1.month==9||d1.month==12){
        if (29>=d1.day>0)
        d1.day+=1;
        else if (d1.day==30){
        d1.day=1;
        if (11>=d1.month>0)
        d1.month+=1;
        else if(d1.month==12){
        d1.year+=1;
        d1.month=1;
        }
    }
    }
    else if (d1.month==2){
       if (d1.year%4==0){
          if (28>=d1.day>0)
          d1.day+=1;
          else if (d1.day==29){
              d1.day=1;
              d1.month+=1;
          }
       } 
        else {
            if (27>=d1.day>0)
            d1.day+=1;
            else if (d1.day==28){
              d1.day=1;
              d1.month+=1;
        }
       } 
    }
    printf("Month %d Day %d Year %d",d1.month,d1.day,d1.year);
    return 0;
}