#include <stdio.h>
#include <math.h>
 //շת�����
int f(int x,int y){
    int a;
    if(x<y){     //�����������ǰ��
        a=x;
        x=y;
        y=a;
    }
    while(x%y!=0){         //һֱѭ��ֱ��y��x������
        a=x%y;
        x=y;                     // ����ȡ���� ��Ϊx
        y=a;                    //����ȡ���� ��Ϊy
    }
    return y;                   //��y��x������ʱ��y�����������
}
int main(){
int t;
printf("������Ҫ�����Լ�������ĸ�����");
scanf("%d",&t);
int i,x,array[t-1],z;
printf("������������");
for(i=0;i<t-1;i++){
    scanf("%d\n",&array[i]);
}
x=array[0];
for(i=1;i<t;i++){
    x=f(x,array[i]);
}
printf("���Լ��");
printf("%d",x);
}
