// wap in c 
//Name - Soumya Banerjee


#include <stdio.h>
void func(int radius, int *area, int *circumference);
int main() { 
      int radius;
      printf("Enter radius:\n");
      scanf("%d",&radius);
     int area=0,circumference=0;
     func(radius,&area,&circumference);
     
     printf("Area = %d \n Circumference is %d\n",area,circumference);
      return 0;

}

void func(int radius, int *area, int *circumference) {
    *area= 3.14*radius*radius;
    *circumference=2*3.14*radius;

}