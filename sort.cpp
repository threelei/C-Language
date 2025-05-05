#include<stdio.h>
int main()
{
    int a[100]={49, 38, 65, 97, 76, 13, 27,49};
	// for(int i=0; scanf("%d", &a[i]); i++)
    // getchar();

    for(int i=0; i<8; i++)printf("%d, ", a[i]);
    printf("\n");
    // for(int i=0; i<7; i++){
    //     for(int j=0; j<7; j++){
    //         if(a[j]>a[j+1]){
    //             int tem = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = tem;
    //         }
    //     }
    // }
    for(int i=0; i<8; i++){
        int tem = a[i];
        int jiluweizhi = i;
        for(int j=i+1; j<8; j++){
            if(tem>a[j]){
                tem = a[j];
                jiluweizhi = j;
            }
        }
        a[jiluweizhi] = a[i];
        a[i] = tem;

    }
    for(int i=0; i<8; i++)printf("%d, ", a[i]);
	return 0;
}