#include<stdio.h>
 struct rectangle{
 float length;
 float width;
 float area;
 };
 int main(){
     struct rectangle s;
     printf("enter length: ");
     scanf("%f",&s.length);
     printf("enter width: ");
     scanf("%f",&s.width);
     s.area = s.length * s.width;
     printf("length = %f\nWidth = %f\nArea = %f\n",s.length,s.width,s.area);
     return 0;
 }
