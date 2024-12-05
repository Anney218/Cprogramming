
#include <iostream>//Insert end.................
#include <string>
using namespace std;

struct student
{
    int roll;
    string name;
    struct student *next;
};

void insEnd(struct student **head, int roll, string name)
{
    struct student *newN = new student;
    newN->roll = roll;
    newN->name = name;
    newN->next = nullptr;

    if (*head == nullptr)
    {
        *head = newN;
    }
    else
    {
        struct student *temp = *head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newN;
    }
}

int main()
{
    struct student S1, S2, S3, *head;

    head = &S1;

    S1.roll = 1;
    S1.name = "Abraham";
    S1.next = &S2;

    S2.roll = 2;
    S2.name = "Astra";
    S2.next = &S3;

    S3.roll = 3;
    S3.name = "Devil";
    S3.next = nullptr;


    insEnd(&head, 4, "Last");


    struct student *temp = head;
    while (temp != nullptr)
    {
        cout << "Roll: " << temp->roll << ", Name: " << temp->name << endl;
        temp = temp->next;
    }

    return 0;
}
