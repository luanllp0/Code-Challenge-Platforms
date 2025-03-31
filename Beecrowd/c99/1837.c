#include <stdio.h>
int main()
{
    int a,b, b2,f,q,r;
    scanf("%d%d", &a, &b);

    if(a<0)
    {
        b2=b;

        if(b<0){b2=b*-1;
        }

        for(r=0; r<b2; r++){
            f=a-r;
            if(f%b==0) break;
        }

        q=f/b;
    }else
    {
        q=a/b;
        r=a%b;
    }

    printf("%d %d\n",q,r);

    return 0;
}
