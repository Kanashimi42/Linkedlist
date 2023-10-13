#include <iostream>
#include "List.h"
using namespace std;

int main() {
    setlocale(0, "");

    List a;

    for (int i = 1; i < 10; i++)
        a.Push(i);

    a.PrintLastElement();
    cout << endl;
    a.Print();
    cout << endl;

    a.Pop();

    a.PrintLastElement();
    cout << endl;
    a.Print();
    cout << endl;

    cout << "Value: " << a.GetCount() << endl;

    a.Clear();

    return 0;
}
