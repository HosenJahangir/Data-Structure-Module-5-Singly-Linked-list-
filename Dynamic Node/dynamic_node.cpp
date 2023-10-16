#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val; // 'this' means 'this' from blue print.
        this->next = NULL;
    }
};
int main()
{
    // Node head(10);  #Normal obj

    Node *head = new Node(10); // Dynamic obj
    Node *a = new Node(30);
    head->next = a;
    // head.next = &a; (Dewa jabena because 'head'nije 1ta address) 'a' dilei habe '&a' lagbena because 'a' nije 1 ta obj er address.
    cout << head->val << endl;
    cout << a->val << endl;
    cout << head->next->val << endl;

    return 0;
}
