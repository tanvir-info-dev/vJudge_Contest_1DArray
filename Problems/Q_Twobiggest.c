#include <stdio.h>
#include <limits.h>
int main()
{
    int n,mx1=INT_MIN,mx2=INT_MIN;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(a[i]>=mx1){
            mx1=a[i];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(a[i]>=mx2 && a[i]!=mx1){
            mx2=a[i];
        }
        else if(mx2==INT_MIN){
            mx2=mx1;
        }
    }
    printf("%d\n",mx1+mx2);

    return 0;
}