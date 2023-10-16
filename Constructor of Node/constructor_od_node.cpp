#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    // Blue print
    int val; // left in the 12 number line.
    Node *next;

    Node(int val) // V
    {
        this->val = val; // V
        this->next = NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    a.next = &b;
    cout << a.val << endl;
    cout << b.val << endl;
    cout << a.next->val << endl;
    cout << (*a.next).val << endl;

    return 0;
}
