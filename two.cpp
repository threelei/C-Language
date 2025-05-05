#include <stdio.h>
int main(){


    int n;
    while(scanf("%d", &n)!=EOF){
        int x = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                for(int k=1; k<=j; k++){
                    x += 1;
                }
            }
        }
        printf("%3d\n", x);
    }
    return 0;


}