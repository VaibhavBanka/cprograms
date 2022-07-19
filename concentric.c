#include <stdio.h>
int n,c=1;
int rectangles(int a, int b);
int main()
{
int area,length,breadth;
printf("Enter the number of rec:");
scanf("%d",&n);
printf("Enter the length of the innermost rec:");
scanf("%d",&length);
printf("Enter the breadth of the innermost rect:");
scanf("%d",&breadth);
area = rectangles(length,breadth);
printf("\nThe area of the outermost rec is %d",area);
return 0;
}
int rectangles(int length, int breadth)
{
int area;
if(c == n)
{
printf("\nLength is %d\nBreadth is %d",length,breadth);
return length*breadth;
}
else
{
c++;
area = rectangles(length+1,breadth+1);
return area;
}
}