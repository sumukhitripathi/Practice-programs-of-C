#include<stdio.h>
#include<math.h>
int main()
{
    int x1, x2, x3, y1, y2, y3, dist_temp, dist, dist_tempa, dist_tempb, dist_newa, dist_newb ;
    printf("Enter point P1:");
    scanf("%d %d", &x1, &y1);
    printf("Enter point P2:");
    scanf("%d %d", &x2, &y2);
    dist_temp=pow((x1-x2),2) + pow((y1-y2),2);
    dist=sqrt(dist_temp);
    printf("The distance between P1 & P2 =%d \n",dist);
    printf("Enter point P3:");
    scanf("%d %d", &x3, &y3);
    dist_tempa=pow((x1-x3),2) + pow((y1-y3),2);
    dist_newa=sqrt(dist_tempa);
    dist_tempb=pow((x3-x2),2) + pow((y3-y2),2);
    dist_newb=sqrt(dist_tempb);
    printf("The distance between P1 & P3 =%d \n",dist_newa);
    printf("The distance between P2 & P3 =%d \n",dist_newb);
    return 0;
}
