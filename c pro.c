#include<stdio.h>
int main(){

int size, i;
int age[100];
printf("enter array size\n");
scanf("%d",&size);
printf("enter elements");

for(i=0;i<size;i++){
printf("array at position %d\n",i);
scanf("%d",&age[i]);
for(i=0; i<size-1; i++){
    printf("%d\t",age[i]);
}
}
return 0;
}
