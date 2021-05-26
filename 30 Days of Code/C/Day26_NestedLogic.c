#include <stdio.h>
void fine(int d1, int d2, int m1, int m2, int y1, int y2);
int main()
{
    int d1, m1, y1;
    /*the book was returned on */
    scanf("%d %d %d", &d1, &m1, &y1);
    int d2, m2, y2;
    /*the book has to be returned on*/
    scanf("%d %d %d", &d2, &m2, &y2);

    /*if(y2==y1){
        if(m1==m2){if(d1>d2) hackos = 15*(d1-d2);}
        else hackos = 500*(m1-m2);

    }else hackos=10000;*/
    fine(d1, d2, m1, m2, y1, y2);
    return 0;
}

void fine(int d1, int d2, int m1, int m2, int y1, int y2)
{
    int hackos;
    if(y1==y2){
        if(m1>m2){
            hackos = 500*(m1-m2);
        }else if(m1==m2){
            if(d1>d2)hackos= 15*(d1-d2);
            else hackos =0;
        }else hackos =0;
    }else if(y2>y1)hackos=0;
    else if(y2<y1)hackos=10000;


    printf("%d", hackos);
}
