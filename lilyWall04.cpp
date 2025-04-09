#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "meow";
    string str2;

    cout << "I like to " << str << "!" << endl;

    cout << "What do you like to do? " << endl;

    cin >> str2;

    cout << str2 << "!";

}