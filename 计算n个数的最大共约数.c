#include <stdio.h>
#include <math.h>
 //辗转相除法
int f(int x,int y){
    int a;
    if(x<y){     //将大的数排在前面
        a=x;
        x=y;
        y=a;
    }
    while(x%y!=0){         //一直循环直到y是x的因数
        a=x%y;
        x=y;                     // 不断取除数 作为x
        y=a;                    //不断取余数 作为y
    }
    return y;                   //当y是x的因数时，y就是最大公因数
}
int main(){
int t;
printf("请输入要求最大公约数整数的个数：");
scanf("%d",&t);
int i,x,array[t-1],z;
printf("请输入整数：");
for(i=0;i<t-1;i++){
    scanf("%d\n",&array[i]);
}
x=array[0];
for(i=1;i<t;i++){
    x=f(x,array[i]);
}
printf("最大公约数");
printf("%d",x);
}
