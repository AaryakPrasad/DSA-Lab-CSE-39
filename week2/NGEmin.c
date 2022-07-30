#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, *arr, x, y, i, j, *count, k = 0, n = 0, min = 0;
    
    printf("\nEnter how much numbers you want to enter in array : \n");
    scanf("%d",&a);
    
    arr = (int *)malloc(a*sizeof(int));
    count = (int *)malloc((a-1)*sizeof(int));
    
    printf("\n");
    
    for(i = 0; i < a; i++)
        scanf("%d", &arr[i]);
    
    printf("\n");
    printf("Enter two numbers : \n");
    scanf("%d%d",&x,&y);
    printf("\n");
    for(i = 0; i < a; i++){
        if(arr[i] == x){
            n = 0;
            for(j = i; j < a; j++){
                n++;
                if(arr[j] == y){
                    count[k] = n;
                    k++;
                }
            }
        }
    }
    
    for(i = a - 1; i >= 0; i--){
        if(arr[i] == x){
            n = 0;
            for(j = i; j >= 0; j--){
                n++;
                if(arr[j] == y){
                    count[k] = n;
                    k++;
                }
            }
        }
    }
    
    for(i = 0; i < k; i++){
        if(min < count[i])
        min = count[i]-1;
    }
    
    printf("\nThe minimum distance is : %d",min);
    return 0;
}