#pragma once
#include <math.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;
#define L 100


class CStack
{
    int n,size1; string *s;;
public:
    CStack()
    {SetZero();
    s=new string[size1=L];
    }
    void SetZero(){s=NULL; n=size1=0;}
    CStack(const CStack&b){CopyOnly(b);}
    void CopyOnly(const CStack&b)
    {n=b.n;
     s=new string[size1=b.size1];
     for(int i=0;i<n;i++)
        {s[i]=b.s[i];}
     }
    void Clean(){delete[] s; SetZero();}
    ~CStack(){Clean();}
    CStack &operator=(const CStack&b)
    {if(this!=&b)
    {Clean(); CopyOnly(b);}
    return *this;
    }
    int IsEmpty(){return n==0;}
    int IsFilled(){return n==size1;}
    int GetTop(string&x)
    {
        if(IsEmpty())
            return -1;
        x=s[n-1];
        return 0;
    }

    int PushTop(const string x)
    {
        if(IsFilled())
        {
            string *w=new string[size1=size1*2+1];
            for(int i=0;i<n;i++)
                {
                    w[i]=s[i];
                }
            delete[] s;
            s=w;
        }
        s[n++]=x;
        return 0;
    }
    int DelTop()
    {
        if(IsEmpty())
            return -1;
        n--;
        return 0;
    }
    int Length(){return n;}
    string &operator[](int i)
    {
        if(i<0 || i>=n)
            throw 3;
        return s[i];
    }

    int File(const char* filename);
    void print()
    {
        for(int i=0;i<n;i++)
            {cout<<s[i]<<endl;}
    }

};


void Autotest(void);
CStack Doomatelb2000(CStack &a, CStack &b);
string LCS(const string& a, const string& b);










