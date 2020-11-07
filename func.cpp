#include "CStack.h"



CStack Doomatelb2000(CStack &a, CStack &b)
{
    int n,m,z,w=0;
    CStack h;
    n=min(a.Length(), b.Length());
    for (int i=0; i<n; i++)
    {
        string j,f,k;
        z=0;
        a.GetTop(j);
        b.GetTop(f);
        k=LCS(j,f);
        h.PushTop(k);
        cout<<"Text 1: "<<j<<endl;
        cout<<"        ";
        for(w=0; w<k.length();w++)
            {
                for(z; z<j.length();z++)
                {
                    if(k[w]!=j[z])
                    {
                        cout<<" ";
                    }
                    if(k[w]==j[z])
                    {
                        cout<<"%";
                        z++;
                        break;

                    }
                }

            }
           z=0;
            cout<<endl<<"Text 2: "<<f<<endl;
            cout<<"        ";
        for(w=0; w<k.length();w++)
            {
                for(z; z<f.length();z++)
                {
                    if(k[w]!=f[z])
                    {
                        cout<<" ";
                    }
                    if(k[w]==f[z])
                    {
                        cout<<"%";
                        z++;
                        break;

                    }
                }

            }

        a.DelTop();
        b.DelTop();
        cout<<endl<<endl;

    }




    return h;
}



string LCS(const string& a, const string& b)
    {
        vector<vector<int> > num;
        num.resize(a.size() + 1);
        for(int i = 0; i <= a.size(); i++)
            num[i].resize(b.size() + 1);
        for(int i = a.size() - 1; i >= 0; i--)
        {
            for(int j = b.size() - 1; j >= 0; j--)
            {
                if(a[i] == b[j])
                {
                    num[i][j] = 1 + num[i+1][j+1];
                }
                else
                {
                    num[i][j] = max(num[i+1][j], num[i][j+1]);
                }
            }
        }
        string p;
        for(int i = 0, j = 0; num[i][j] != 0 && i < a.size() && j < b.size(); )
        {
            if(a[i] == b[j])
            {
                p.push_back(a[i]);
                i++;
                j++;
            }
            else
            {
                if(num[i][j] == num[i+1][j])
                    i++;
                else
                    j++;
            }
        }
        return p;
    }





int  CStack :: File(const char* filename)
{
        string line;
        int j=0;
        ifstream file(filename),file2(filename);
        if(!file)
        {
            cout<<"Error! Cannot open file..."<<endl;
            return -1;
        }
        while (getline(file,line))
        {
            j++;
        }
        if(j==0)
        {
            cout<<"File is empty..."<<endl;
            return 2;
        }
        file.close();
        if(!file2)
        {
            cout<<"Error! Cannot open file..."<<endl;
            return -1;
        }
        int u=0;
        string *str=new string[j];
        while (getline(file2,line))
        {
           str[u]=line;
           u++;
        }
        for (int d=u-1; d>=0;d--)
        {
            PushTop(str[d]);
        }
        file2.close();
        delete[] str;
        str=NULL;
        return 0;

}























/*void vvod(CStack&c, CStack2 &r, const char* f)
{
string b;
int a=0;
while(a!=6)
{
  cout<<"1) Push;"<<endl;
  cout<<"2) Get;"<<endl;
  cout<<"3) Delete;"<<endl;
  cout<<"4) TopLength;"<<endl;
  cout<<"5) Length;"<<endl;
  cout<<"6) Stop;"<<endl;
  cin>>a;
  if(cin.fail())
         {
             cout<<"Error! Wrong number";
             exit(1);
         }
  if(a==1)
  {
      cout<<"Write down your string:"<<endl;
      cin>>b;
      int u=c.FullMemory();
      if(b.length()>u)
      {
          cout<<"Error! Too big number";
             exit(1);
      }
      c.Push(b,r,f);
  }
  if(a==2)
  {
      cout<<"The top string is:"<<endl;
      c.Get(b,r,f);
      cout<<b<<endl;
  }
  if(a==3)
  {
      cout<<"Deleting top string..."<<endl;
      c.Del(r,f);
  }
  if(a==4)
  {
      cout<<"Length of top string is:"<<endl;
      cout<<c.LenTop()<<endl;
  }
  if(a==5)
  {
      cout<<"Length of stack is:"<<endl;
      cout<<c.Length()<<endl;

  }
  cout<<"Current Stack is:"<<endl;
  c.print();
  cout<<"--------------------------------------"<<endl;

}
}*/
