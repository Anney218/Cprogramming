
#include<bits/stdc++.h>//Delete Nth........................................

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




void DeleteNthLL(student **h, int n)
{
    if (*h == NULL)
    {
       cout<<"List Is Empty"<<endl;
    }
    else if(n==1)
    {
        student *temp = *h;
        *h = (*h)->next;
        delete (temp);
    }
    else
    {
        student* prev = *h;
        int pos = 1;
        while (pos<n-1 && prev->next!=NULL)
        {
            prev = prev->next;
            pos++;
        }

        if (prev->next == NULL)
            return;

        student* temp = prev->next;
        prev->next = prev->next->next;
        delete temp;

    }

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

    DeleteNthLL(&head,2);
    display(head);

    return 0;
}
