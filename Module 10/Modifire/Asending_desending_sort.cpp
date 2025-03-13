// // Asending sort
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>myList={50,20,40,10,60,30};
//     myList.sort();
//     for(int val:myList)
//     {
//         cout<<val<<" ";
//     }
//     return 0;
// }

// desending sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={40,10,20,40,70,90};
    myList.sort(greater<int>());
    for(int val:myList)
    {
        cout<<val<<" ";
    }
    return 0;
}