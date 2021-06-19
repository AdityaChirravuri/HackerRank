#include<stdio.h>
void below_15(int h, int mm, char t[][10]);
void below_30(int h, int mm, char t[][10]);
void below_45(int h, int mm, char t[][10]);
void below_60(int h, int mm, char t[][10]);

int main()
{
    int h, mm;
    char t[100][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
    printf("enter time (in Hours): ");
    scanf("%d", &h);
    printf("enter time (in minutes): ");
    scanf("%d", &mm);
    if(mm<=15)
    below_15(h, mm, t);
    else if(mm>15&&mm<=30)
    below_30(h, mm, t);
    else if(mm>30&&mm<=45)
        below_45(h, mm, t);
    else
        below_60(h, mm, t);
    return 0;
}

void below_15(int h, int mm, char t[][10])
{
    if(mm==00){
        printf("%s ", t[h-1]);
        printf("o'clock");
    }
    else if(mm==01){
        printf("one minute past  ");
        printf("%s", t[h-1]);
    }else if(mm==02){
        printf("two minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==03){
        printf("three minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==04){
        printf("four minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==05){
        printf("five minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==06){
        printf("six minutes past ");
        printf(" %s", t[h-1]);
    }else if(mm==07){
        printf("seven minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==8){
        printf("eight minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==9){
        printf("nine minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==10){
        printf("ten minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==11){
        printf("eleven minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==12){
        printf("twelve minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==13){
        printf("thirteen minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==14){
        printf("fourteen minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==15){
        printf("quarter past  ");
        printf("%s", t[h-1]);
    }
}

void below_30(int h, int mm, char t[][10])
{
    if(mm==16){
        printf("sixteen	minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==17){
        printf("seventeen minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==18){
        printf("eighteen minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==19){
        printf("nineteen minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==20){
        printf("twenty minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==21){
        printf("twenty one minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==22){
        printf("twenty two minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==23){
        printf("twenty three minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==24){
        printf("twenty four minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==25){
        printf("twenty five minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==26){
        printf("twenty six minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==27){
        printf("twenty seven minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==28){
        printf("twenty eight minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==29){
        printf("twenty nine minutes past ");
        printf("%s", t[h-1]);
    }else if(mm==30){
        printf("half past ");
        printf("%s", t[h-1]);
    }
}

void below_45(int h, int mm, char t[][10])
{
    if(mm==31){
        printf("twenty nine minutes to ");
        printf("%s", t[h]);
    }else if(mm==32){
        printf("twenty eight minutes to ");
        printf("%s", t[h]);
    }else if(mm==33){
        printf("twenty seven minutes to ");
        printf("%s", t[h]);
    }else if(mm==34){
        printf("twenty six minutes to ");
        printf("%s", t[h]);
    }else if(mm==35){
        printf("twenty five minutes to ");
        printf("%s", t[h]);
    }else if(mm==36){
        printf("twenty four minutes to ");
        printf("%s", t[h]);
    }else if(mm==37){
        printf("twenty three minutes to ");
        printf("%s", t[h]);
    }else if(mm==38){
        printf("twenty two minutes to ");
        printf("%s", t[h]);
    }else if(mm==39){
        printf("twenty one minutes to ");
        printf("%s", t[h]);
    }else if(mm==40){
        printf("twenty minutes to ");
        printf("%s", t[h]);
    }else if(mm==41){
        printf("nineteen  minutes to ");
        printf("%s", t[h]);
    }else if(mm==42){
        printf("eighteen minutes to ");
        printf("%s", t[h]);
    }else if(mm==43){
        printf("seventeen minutes to ");
        printf("%s", t[h]);
    }else if(mm==44){
        printf("sixteen minutes to ");
        printf("%s", t[h]);
    }else if(mm==45){
        printf("quarter to ");
        printf("%s", t[h]);
    }
}

void below_60(int h, int mm, char t[][10])
{
    if(mm==46){
        printf("fourteen minutes to ");
        printf("%s", t[h]);
    }else if(mm==47){
        printf("thirteen minutes to ");
        printf("%s", t[h]);
    }else if(mm==48){
        printf("twelve minutes to ");
        printf("%s", t[h]);
    }else if(mm==49){
        printf("eleven minutes to ");
        printf("%s", t[h]);
    }else if(mm==50){
        printf("ten minutes to ");
        printf("%s", t[h]);
    }else if(mm==51){
        printf("nine minutes to ");
        printf("%s", t[h]);
    }else if(mm==52){
        printf("eight minutes to ");
        printf("%s", t[h]);
    }else if(mm==53){
        printf("seven minutes to ");
        printf("%s", t[h]);
    }else if(mm==54){
        printf("six minutes to ");
        printf("%s", t[h]);
    }else if(mm==55){
        printf("five minutes to ");
        printf("%s", t[h]);
    }else if(mm==56){
        printf("four minutes to ");
        printf("%s", t[h]);
    }else if(mm==57){
        printf("three minutes to ");
        printf("%s", t[h]);
    }else if(mm==58){
        printf("two minutes to ");
        printf("%s", t[h]);
    }else if(mm==59){
        printf("one minute to ");
        printf("%s", t[h]);
    }
}
