#include<stdio.h>
#include<math.h>
int main()
 {
    long int p,q,r,f,i,sum,a,k,h,g;
    int c=0;
    scanf("%ld\n%ld",&p,&q);
    for(i=p;i<=q;i++)
    {
        a=0;
        k=i;
        while(k>0)
        {
            k=k/10; 
            a++;
        }
        h=i*i;
        g=pow(10,a);
        sum=h%g+h/g;
        if(sum==i)
        {
            printf("%ld ",sum);
            c++;
        }
    }
    if(c==0)
        printf("INVALID RANGE");       
    return 0;
}