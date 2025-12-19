#include <stdio.h>

int main(){
    int arr[24],i,n;
    float mean=0, sum=0,median;
    printf("Enter the size of array:  ");
    scanf("%d",&n);
    printf("enter the elements:  ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        
    }
    for(i=0; i<n; i++){
        sum = sum+arr[i];
    }
  
    mean = sum / n;
    
 
    
    if(n%2==0){
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else{
        median = arr[n/2];
    }
    
    printf("Mean = %.2f\n", mean);
    printf("Median = %.2f\n", median);
    
    return 0;
}
