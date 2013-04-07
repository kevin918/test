//
//  main.c
//  Practicing
//
//  Created by Kai Ren on 3/18/13.
//  Copyright (c) 2013 Kai Ren. All rights reserved.
//

#include <stdio.h>

/* for f=0,20,...,300 */
/*#define lower 0
#define upper 300
#define step 20*/
int main(int argc, const char * argv[])
{

    // insert code here...
    /*int lower, upper, step;
    float fahr, celsius;
    lower=0;
    upper=300;
    step=20;
    
    fahr = lower;
    while (fahr <= upper){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%4.0f%6.1f\n", fahr, celsius);
        fahr=fahr+step;
    }*/
    
    /*int fahr;
    for (fahr=0; fahr<=300;fahr=fahr+20)
        printf("%4d%6.1f\n",fahr, (5.0/9.0)*(fahr-32));*/
    
    /*int fahr;
    for (fahr=lower; fahr<=upper; fahr=fahr+20) {
        printf("%4d%6.1f\n",fahr, (5.0/9.0)*(fahr-32));
    }*/
    /*int c;
    c=getchar();
    while(c!=EOF){putchar(c);c=getchar();}*/
    
    /*long nc;
    
    nc=0;
    while(getchar()!=EOF)
        ++nc;
    printf("%1ld\n",nc);*/
    
    /*int c, nl;
    
    nl=0;
    while ((c=getchar())!=EOF)
        if (c=='\n')
            ++nl;
    printf("%d\n",nl);*/
    
    /*int c,i,nwhite,nother;
    int ndigit[10];
    
    nwhite=nother=0;
    for(i=0;i<10;++i)
        ndigit[i]=0;
    while ((c=getchar())!=EOF)
        if(c>='0'&&c<='9')
            ++ndigit[c-'0'];
        else if (c==''||c=='\n'||c=='\t')
             ++nwhite;
        else
             ++nother;
    
    printf("digits=");
    for(i=0;i<10;++i)
        printf("%d", ndigit[i]);
    printf("\nwhite space=%d,other=%d\n",nwhite,nother);*/
    
    /*int stack[10],top=0;
    int curNum=1;
    int count=0;
    while(1)
    {
        stack[top++]=curNum;
        if(top==6)
        {
            for(int i=0;i<6;i++)
                printf("%d,",stack[i]);
            printf("\n");
            count++;
            curNum=stack[--top];
        }
        curNum++;
        while(curNum>10)
            curNum=stack[--top]+1;
        if(top<0) break;
    }
    printf("totally, there are %d",count);
    getchar();*/
   /* strlen(s)
    char s[];
    {int i;
        i=0;
        while (s[i]!='\0')
            ++i;
        return(i);
    }*/
    /*int i,N;
    for (i=0;i<N;i++)
        printf("%6d%c",a[i],(i%10==9||i==N-1)?'\n':'');*/
    /*binary(x,v,n)/*find x in v[0]...v[n-1]
    int x,v[],n;
    {
        int low,high,mid;
        low=0;
        high=n-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(x<v[mid])
                high=mid-1;
            else if (x>v[mid])
                low=mid-1;
            else
                return(mid);
        }
        return(-1);
    }*/
    
    int c,i,nwhite,nother,ndigit[10];
    nwhite=nother=0;
    for(i=0;i<10;i++)
        ndigit[i]=0;
    
    while((c=getchar())!=EOF)
        switch (c) {
            case '0':
            case '1':
            case '2':
            case '3':
                break;
                
            default:
                break;
        }
    return 0;
}

