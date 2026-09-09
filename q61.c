#include<stdio.h>
int main(){
    int n,i,key,found= -1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        if (arr[i]==key){
            found=i;
            break;
        }
    }
    if (found!i=-1)
    printf("found at index %d,found");
else
printf("-1");
return 0;
}