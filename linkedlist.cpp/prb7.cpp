
#include<bits/stdc++.h>

using namespace std;

struct student{
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
int Size(struct student *head)
{
    int sizeL = 0;
    if(head==NULL)
    {
        cout<<"0~EMPTY"<<endl<<endl;
    }
    else
    {
        struct student *temp = head;
        while(temp!=NULL)
        {
            sizeL++;
            temp = temp->next;
        }
    }
    cout<<"Size of List : "<<sizeL<<endl<<endl;
}
int search_ROLL(struct student *head, string name)
{
    struct student *temp;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->name == name)
        {
            return temp->roll;
        }
        else
        {
            temp=temp->next;
        }
    }
return -1;
}
string search_name(struct student *head,int roll)
{
    struct student *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->roll==roll)
        {
            return temp->name;
        }
        else
        {
            temp=temp->next;
        }
    }

    return " ";
}


int main()
{
        struct student S1,S2,S3,*head,*next;

        head = &S1;

        S1.roll = 01;
        S1.name = "John";
        S1.next = &S2;

        S2.roll = 02;
        S2.name = "Ragnar";
        S2.next = &S3;

        S3.roll = 03;
        S3.name = "Madara";
        S3.next = NULL;

        //DISPLAY LIST
        display(head);



        //LIST SIZE
        Size(head);

        //ROLL SEARCH
        int ans = search_ROLL(head,"Ragnar");
        if(ans==-1)
        {
           cout<<"Name not found"<<endl;
        }
        else
        {
           cout<<"Roll : "<<ans<<endl;
        }
        //NAME SEARCH
        string name_ans = search_name(head, 1);
        if (name_ans != " ")
        {
            cout << "Name : " <<ans<< endl;
        }
        else
        {
            cout << "Roll not found" << endl;
        }
        cout<<endl;




}
