#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;


class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
    
};


void print_forward(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;

}


int main()
{
    Node* head = NULL;
    // Node* a = new Node(20);
    Node* tail = NULL;

    // head->next = a;
    // a->prev = head;

    // a->next = tail;
    // tail->prev = a;


    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);

    print_forward(head);

    return 0;
}