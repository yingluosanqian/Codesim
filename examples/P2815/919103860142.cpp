#include<bits/stdc++.h>
using namespace std;
char clea='x',a[50];
int mx,jc,jl1=-3,jl2=-3,b1=-5,b2;
int main()
{
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i=i+5)
    {
        if(a[i]=='1'&&a[i+1]==':')
        {
            i+=2;
            b1=-5;
            b2=0;
            jc=0;
        }
        if(mx<jc)
        {
            mx=jc;
            jl1=b1;
            jl2=b2;
        }
        if(a[i]!='0')
        {
            b1=-5;
            b2=0;
            jc=0;
        }
        if(a[i]=='0')
        {
            if(a[i+1]=='0')
            {
                if(a[i+2]=='0')
                {
                    if(a[i+3]=='0')
                    {
                        if(b1==-5)
                        {
                            b1=i;
                        }
                        if(b1!=-5)
                        {
                            b2=i+4;
                        }
                        jc++;
                    }
                    else
                    {
                        jc=0;
                    }
                    a[i+2]=clea;
                }
                else
                {
                    jc=0;
                }
                a[i+1]=clea;
            }
            else
            {
                jc=0;
            }
            a[i]=clea;
        }
        else
        {
            jc=0;
        }
    }
    if(mx<jc)
    {
        mx=jc;
        jl1=b1;
        jl2=b2;
    }
    for(int i=jl2;i>=jl1;i--)
    {
        a[i]='x';
    }
    if(a[jl1-1]!=':')
    {
        if(a[jl1]!=':'&&a[jl1+1]!=':')
        {
            a[jl1]=':';
            a[jl1+1]=':';
        }
        else
        {
            if(a[jl1]==':'&&a[jl1+1]!=':')
            {
                a[jl1+1]=':';
            }
            else
            {
                if(a[jl1]!=':'&&a[jl1+1]==':')
                {
                    a[jl1]=':';
                }	
            }
        }	
    }
    else
    {
        if(a[jl1]!=':'&&a[jl1+1]!=':')
        {
            a[jl1]=':';
        }
    }
    //0000:1111:1111:1111:1111:1111:1111:1111
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='x')continue;
        printf("%c",a[i]);
    }
    return 0;
}
