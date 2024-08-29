#include <stdio.h>

int main(){

int coulam;

printf("Enter Coulam : ");
scanf("%d",&coulam);

int aray[coulam];

printf("Program : \n");

for(int i=0;i<coulam;i++){
    printf("a[%d]= ",i);
    scanf("%d",&aray[i]);
}

int largest=aray[0];



for(int i=0;i<coulam;i++){
    if(a2ray[i]>largest){
        largest=aray[i];
    }

}
printf("The Maximum Number : %d",largest);

}