#include<stdio.h>>
int main() {
    int arr[100], n, i;
    int element, position;

    printf("Enter the number of elements:\n");
    scanf("%d",n);
    
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++) {

        scanf("%d",arr[i]);
    }
    
    printf("Enter your position:");
    scanf("%d",&position);

    printf("Enter your element: ");
    scanf("%d",&element);

    for(int i=n; i>=position;i--){

        arr[i] = arr[i-1];

    }
    arr[position-1] = element;
    n++;
    for(int i=0; i<n ; i++){
    printf("%d",arr[i]);
    }

    return 0;
}