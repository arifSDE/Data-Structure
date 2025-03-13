// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={10,20,39,40};
//     mylist.insert(next(mylist.begin(),3),{50,60,70});
//     for(int val:mylist)
//     {
//         cout<<val<<" ";
//     }

//     return 0;
// }

// // ek list er node onno list er jeikono jaygay insert korar jonno 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={10,20,30,40};
//     list<int>newList={50,60,70};
//     mylist.insert(next(mylist.begin(),4),newList.begin(),newList.end());
//     for(int val:mylist)
//     {
//         cout<<val<<endl;
//     }
//     return 0;
// }

// vector to insert
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={9,10,20,30,50};
    vector<int>v={1,2,3,4,5,6,7,8};
    mylist.insert(next(mylist.begin(),3),v.begin(),v.end());
    for(int val:mylist)
    {
        cout<<val<<" "; 
    }

    return 0;
}