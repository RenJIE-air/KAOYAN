// void LoveYou(int n){
//     int i = 1;
//     while (i<=n)
//     {
//         i++;
//         printf("I love you %d\n",i);
//     }
//     printf("I love you more than %d\n",n);
// }
// void main(){
//     LoveYou(3000);
// }

// 算法：递归型
// void loveYou(int n){ //n为问题规模
//     int a,b,c;  //声明一系列局部变量
//     if (n>1)
//     {
//         loveYou(n-1);
//     }
//     printf("I love you %d\n",n);
// }
// int main(){
//     loveYou(5);
// }

#include<stdio.h>
void test(int &x){
    x = 1024;
    printf("test函数内部 x = %d\n",x);
}

int main(){
int x = 1;
printf("调用test前 x = %d\n",x);
test(x);
printf("调用test后 x = %d\n",x);
}