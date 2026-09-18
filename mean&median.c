#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
  int sum=0;
  int num;
  float mean;
  printf("Enter the size of an array:");
  scanf("%d",&num);
  int arr[num];
  for (int i=0 ; i<num ; i++)
{
    scanf("%d",&arr[i]);

}
for(int i=0 ; i<num ; i++)
{
    sum = sum + arr[i];
    mean = sum/num;
}

printf("mean is %f", mean);
return 0;
}