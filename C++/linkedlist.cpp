#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class ll
{
private:
    node *head, *tail;

public:
    ll()
    {
        head = NULL;
        tail = NULL;
    }

    void addNode(int no)
    {
        node *tmp = new node;
        tmp->data = no;
        tmp->next = NULL;
        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void display()
    {
        node *tmp;
        tmp = head;
        cout << "Elements in Node are:" << endl;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
    void countNode()
    {
        node *tmp;
        tmp = head;
        int count = 0;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
            count++;
        }
        cout << "Total Elements in Node are:" << count << endl;
    }
};

int main()
{
    ll a;
    a.addNode(2);
    a.addNode(3);
    a.display();
    a.countNode();
    return 0;
}