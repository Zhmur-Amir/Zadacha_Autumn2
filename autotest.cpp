#include "CStack.h"


void Autotest(void)
{
    string a,b,k,e,f,g;
    CStack h,q,w;
    bool s=true;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"Starting Autotest..."<<endl<<"---------------------------------"<<endl;
    a="abc0091d";
    b="addbbbd";
    k=LCS(a,b);
    if(k!="abd")
    {
        s=false;
    }
    q.File("auto1.txt");
    w.File("auto2.txt");
    h=Doomatelb2000(q,w);
    h.GetTop(e);
    if(e!="")
    {
        s=false;
    }
    h.DelTop();
    h.GetTop(f);
    if(f!="H  ")
    {
        s=false;
    }
    h.DelTop();
    h.GetTop(g);
    if(g!="101000001111")
    {
        s=false;
    }
    h.DelTop();
    cout<<"-------------------------------------------"<<endl;
    if(s==true)
    {
        cout<<"Autotest passed! Respect+"<<endl;
    }
    else
    {
        cout<<"Autotest failed! Wasted..."<<endl;
    }
}
