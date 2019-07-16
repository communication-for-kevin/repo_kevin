#include <map>
#include <set>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    map<string, vector<int>> mp{{"A", {1,3,5}}, {"B", {2,4,6}}};

    map<string, vector<int>>::iterator it = mp.find("A");
    for(int i : it->second)
        cout << i << " ";
    cout << endl;
    
    
    it = mp.find("B");
    for(auto i = it->second.begin(); i!= it->second.end(); ++i)
    	cout << *i << " ";

    return 0;
}
