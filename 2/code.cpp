
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int t;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<t;i++){
        printf("%d\n",a[i]+1);
    }
    return 0;
}
