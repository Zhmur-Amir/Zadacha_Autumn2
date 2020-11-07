#include "CStack.h"

int main(void)
{
    CStack a,b;
    cout<<"Welcome to text analyzer, let's compare your texts!"<<endl<<endl;
    a.File("Text1.txt");
    b.File("Text2.txt");
    Doomatelb2000(a,b);
    cout<<"================================="<<endl;
    Autotest();
    return 0;

}



