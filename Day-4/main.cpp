#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
    Tree tr;
    tr.add(20);
    tr.add(50);
    tr.add(10);
    tr.add(5);
    cout<<tr.checkdepth();

    return 0;
}
