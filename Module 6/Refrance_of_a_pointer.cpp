// ami jodi chai void function er modde change korle main function er modde change ashuk tahole
// Refrance dore rakhte hobe jate 2 jonoi same memory te thake 
#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    cout<<p<<endl;
    // p=NULL;
}
int main()
{
    int val=10;
    int *ptr=&val;
    fun(ptr);
    cout<<&ptr<<endl;
    return 0;
}