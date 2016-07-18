#include <stdio.h>

void print_num(int num)
{
    int sum[10],i=0;
    char *name[] ={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    for(i=0;num>=10;i++){
        sum[i]=num%10;
        num=num/10;
    }

    sum[i++]=num;

    while(i--){
        if(i!=0){
            printf("%s ",name[sum[i]]);
        }else{
            printf("%s\n",name[sum[i]]);
        }
    }
}

int main(){
    char n[101];
    char *temp=n;
    int sum=0;

    scanf("%s",n);

    while(*temp!='\0'){
        sum = sum + (*temp - '0');  //（*p - '0'）将字符型数字转化为整型数字
        temp++;
    }

    print_num(sum);

    return 0;
}
