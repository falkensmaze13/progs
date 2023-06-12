#include<stdio.h>

int invCount(int *a,int n){
    int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                c++;
            }
        }
    }
    return c;
}

int main(){
    int a[]={3,1,2,4};
    printf("%d",invCount(a,4));
    return 0;
}
