
#include<bits/stdc++.h>//Delete first........................................

using namespace std;

struct student
{
    int roll;
    string name;
    struct student *next;
};
int display(struct student *head)
{
    if(head==NULL)
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
        struct student *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->roll<<" "<<temp->name<<endl;
            temp = temp->next;
        }
    }
    cout<<endl;
}
void delFirst(struct student **head)
{
    if(*head == NULL)
    {
        cout<<"List Empty"<<endl;
    }
    struct student *temp = *head;
    *head = (*head)->next;
    delete(temp);
}



int main()
{

    student *a = new student();
    student *head = a;
    student *b = new student();
    student *c = new student();
    student *d = new student();

    a->roll = 1;
    a->name= "Ishfak";
    a->next = b;

    b->roll = 2;
    b->name="Akbar";
    b->next = c;

    c->roll = 3;
    c->name = "Nahian";
    c->next = d;

    d->roll = 4;
    d->name = "ABC";
    d->next = NULL;

    delFirst(&head);
    display(head);


    return 0;
}
