#include <iostream>
using namespace std;
#include "node.h"
#include "LinkList.h"
#include "uniquesortedlist.h"
#include "lab.h"

int main()
{
    Lab L;
    Node* n;

    char ans;
    int insertINT;

    do
    {
        cout<<": ";
        cin>>insertINT;

        n = new Node (insertINT);
        L.CheckExist(n);
        L.Print();

        cout<<endl<<"again(y/n)? : ";
        cin>>ans;
        cout<<endl;
    }while(ans != 'n' && ans != 'N');
}
