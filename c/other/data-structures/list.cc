#include <iostream>

struct List
{
    List* next;
    int item;
    List(int _item) {next = 0; item = _item;}
};

// print out list starting from element pointed by l
void show (List* l) 
{
    if (l != 0) {
        if (l->next != 0) 
            std::cout << l->item << "->";
        else std::cout << l->item;
        show(l->next);
    }
}

void pop(List* l)
{
    if (l != 0) { // list non-empty, pop at the end, otherwise skip
        if (l->next == 0) {// list has one element, delete it and make list empty
            delete l;    
            l = 0;
        }
        else {// list has at least two elements
            List* p = l;
            List* p_next = p->next;
            while (p_next->next != 0) {
                p = p_next;
                p_next = p_next->next;
            } //p->next == p_next && p_next->next == 0, i.e. p_next is the last element, p is the one before last
            delete p_next;
            p->next = 0;
        }
    }
}

void showln(List* l)
{
    show(l);
    std::cout << std::endl;
}

void push (List* l, int item)
{
    if (l == 0) {// list empty, insert to the location where l points to
        List* el = new List(item); 
    } else {// list not empty, insert at the end
        List* p = l; 
        while (p->next != 0) {
            p = p->next;
        } // p->next == 0, insert after p
        List* el = new List(item);
        p->next = el;
    }
}

int main()
{

    // List* l = 0;
    // List* el = new List(0);
    // List* els[10];
    // for (int i = 0; i < 10; i++) {
    //     els[i] = new List(i+1);
    // }

    // l = el;
    // el->next = els[0];
    // for (int i = 0; i < 9; i++) {
    //    els[i]->next = els[i + 1] ;
    // }
    // show(l);
    // std::cout << std::endl;
    // push(l, 20);
    // for (int i = -20; i < -10; i++) {
    //     push(l, i);
    // }

    // showln(l);
    // pop(l);
    // showln(l);
    // pop(l); pop(l); pop(l);
    // showln(l);
    // while (l->next != 0) {
    //     pop(l);
    // }
    // showln(l);
    // pop(l);
    // show(l);
    List* l2 = 0;
    List* el = new List(-3);
    push(l2, -10);
    l2 = el;
    showln(l2);
    push(l2, -10);
    showln(l2);
    // push(l2, 3);
    // push(l2, 10);
    // std::cout << l2 << std::endl;
    // showln(l2);
    // showln(l2);
    return 0;
}
