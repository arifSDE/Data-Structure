// // list er first value access korar jonno 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>myList={10,20,30,40,50,60};
//     cout<<myList.front()<<endl;
//     return 0;
// }

// // list er last value access korar jonno 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>myList={10,20,40,50,60};
//     cout<<myList.back()<<endl;
//     return 0;
// }

// list er jekono index access korar jonno 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,20,30,40,50};
    cout<<*next(myList.begin(),3);
    return 0;
}