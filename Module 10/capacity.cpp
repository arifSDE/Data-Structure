// // max size
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={1,2,3,5,6};
//     cout<<mylist.max_size();//sorboccho koto porjonto value rakhte pabo
//     return 0;
// }

// // clear
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={10,20,30};
//     mylist.clear();
//     for(int val:mylist)
//     {
//         cout<<val<<endl;
//     }
//     return 0;
// }

// // eibar list er size ber korbo
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={1,2,3,4,5};
//     mylist.clear();
//     mylist.size();
//     for(int val:mylist)
//     {
//         cout<<val<<endl;
//     }
//     return 0;
// }

// eibar jodi resize korte chai
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={1,2,3,4,5};
    mylist.resize(10,90);
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}