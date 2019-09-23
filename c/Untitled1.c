#include<stdio.h>

int main(){
    char str[3];

    int n,p,m;

    scanf("%d",&n);

    int i,j;

    int plus=0,min=0;

    for(i=1;i<=n;i++){
        scanf("%s",str);

        for(j=0;j<3;j++){

            switch(str[j]){

                case '+':
                    plus++;
                    break;
                case '-':
                    min++;
                    break;
            }

        }
    }
    p=plus/2;
    m=min/2;

    int b;

    b=p-m;

    printf("%d",b);

    return 0;
}
