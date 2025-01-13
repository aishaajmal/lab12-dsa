#include <iostream>
#include <string>
using namespace std;
string reverseName(const string& name) 
{
   
    if (name.empty())
    {
        return "";
    }

   
    return name.back() + reverseName(name.substr(0, name.size() - 1));
}
int main() 
{
    // Test case 1
    string name1 = "John Doe";
    cout << "Original: " << name1 << endl;
    cout << "Reversed: " << reverseName(name1) << endl;

    // Test case 2
    string name2 = "Alice";
    cout << "Original: " << name2 << endl;
    cout << "Reversed: " << reverseName(name2) << endl;

    return 0;
}