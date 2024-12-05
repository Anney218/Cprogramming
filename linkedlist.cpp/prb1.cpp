//Linkes list.............................

#include<bits/stdc++.h>//Insert Nth.......................

using namespace std;

struct student
{
    int roll;
    char name[100];
    struct student *next;
};

void insNth(struct student **h, char name[10],int roll,int n)
{
    struct student *newN;
    newN = (struct student *)malloc(sizeof(struct student));
    strcpy(newN->name,name);
    newN->roll=roll;
    struct student *temp = *h;
    if(*h == NULL)
    {
        newN->next=NULL;
        *h = newN;
    }
    else if(n==1)
    {
        newN->next=*h;
        *h = newN;
    }
    else
    {
        for(int i=0; i<=n-2; i++)
        {
            temp=temp->next;
        }
        newN->next = temp->next;
        temp->next = newN;
    }
}

int main()
{
    struct student a,b,c,*head,*next;
    head = &a;

    strcpy(a.name, "Ishfak");
    a.roll = 28;
    a.next = &b;

    strcpy(b.name, "Akbar");
    b.roll = 36;
    b.next = &c;

    strcpy(c.name, "Nahian");
    c.roll = 40;
    c.next = NULL;

    insNth(&head,"HAHA",69,2);

    struct student *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->name<<" "<<temp->roll<<endl;
        temp = temp->next;
    }

}
