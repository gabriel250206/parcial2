#include <iostream>
#include <set>
 
using namespace std;

int main()
{
    /*
    set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        cout << str << ' ';
    }
    cout << '\n';
    return 0;
*/
    set<int>x;
    x.insert(9);
    x.insert(6);
    x.insert(7);
    x.insert(3);
    x.insert(3);
    for(auto& in:x){
        cout<<in<<endl;
    }

    /*
    Some Basic Functions Associated with Set
    begin() – Returns an iterator to the first element in the set.
    end() – Returns an iterator to the theoretical element that follows the last element in the set.
    size() – Returns the number of elements in the set.
    max_size() – Returns the maximum number of elements that the set can hold.
    empty() – Returns whether the set is empty.
    
    
    */
}