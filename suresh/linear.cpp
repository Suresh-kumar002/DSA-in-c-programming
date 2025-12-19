#include <stdio.h>

int main() {
    int arr[]={2,3,4,5,6,7};
    int i,key;
    key=6;
    for(i=0;i<6; i++){
        if(arr[i]==key){
            printf("key value 6 at the position of : ");
            printf("%d",i);
            break ;

        }
    }
   if(i==6){
    printf("key value is not found");
   }

    return 0;
}