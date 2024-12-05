
#include <iostream>
#include <cstring>

using namespace std;

struct student
{
    int roll;
    char name[100];
    struct student *next;
};

void insNthCircular(struct student **h, char name[100], int roll, int n)
{
    struct student *newN = new student;
    strcpy(newN->name, name);
    newN->roll = roll;
    struct student *temp = *h;

    if (*h == NULL)
    {
        newN->next = newN;
        *h = newN;
    }
    else if (n == 1)
    {

        newN->next = *h;
        struct student *last = *h;
        while (last->next != *h)
        {
            last = last->next;
        }
        last->next = newN;
        *h = newN;
    }
    else
    {

        for (int i = 0; i < n - 2; i++)
        {
            temp = temp->next;
        }
        newN->next = temp->next;
        temp->next = newN;
    }
}

int main()
{
    struct student a, b, c, *head;
    head = nullptr;

    strcpy(a.name, "John");
    a.roll = 28;
    a.next = nullptr;

    strcpy(b.name, "Debil");
    b.roll = 36;
    b.next = nullptr;

    strcpy(c.name, "Astra");
    c.roll = 40;
    c.next = nullptr;


    b.next = &c;
    c.next = &a;

    insNthCircular(&head, "HAHA", 50, 2);

    struct student *temp = head;
    do
    {
        cout << temp->name << " " << temp->roll << endl;
        temp = temp->next;
    }
    while (temp != head);

    return 0;
}
