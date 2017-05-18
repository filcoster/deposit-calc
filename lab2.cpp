#include <stdio.h>
#include <iostream>

int Analiz(int d,int s){
        if(d<=30){
                if(s<=100000) s-=s/10;
                else s-=s/10;
        }
        else if(d>30 && d<=120){
                if(s<=100000) s+=s/50;
                else s+=(s/100)*3;
        }
                else if(d>120 && d<=240){
                if(s<=100000) s+=(s/100)*6;
                else s+=(s/100)*8;
        }
        else if(d>240 && d<=365){
                if(s<=100000) s+=(s/100)*12;
                else s+=(s/100)*15;
        }
        return s;

}

int main(){
                setlocale(LC_ALL ,"Russian");
        int s,d,t;

         printf("Vvedite dni i summi vklada");
        scanf("%d %d",&d,&s);

        if(d>0 && d<366 && s>=10000){
                t=Analiz(d,s);
                printf("Itogovoya summa %d",t);
        }

        return 0;

}
