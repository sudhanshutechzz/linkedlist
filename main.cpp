#include <iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;
struct node
{
    int info;
    struct node *link;

};
struct node *start=NULL;
struct node* createnode()
{struct node *n;
n=(struct node *)malloc(sizeof(struct node));
return n;

}
void insertnode()
{
    int num;
    struct node *temp,*t;
    temp=createnode();

    cout<<"enter the number"<<endl;
    cin>>temp->info;
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }

}
void deletenode()
{
    struct node *r;
    if(start==NULL)
        cout<<"list is empty";
    else
   {r=start;
   start=start->link;
   free(r);
    }
}
void viewList()
{

    struct node *t;
    if(start==NULL)
        cout<<"list is empty";
    else
    {
        t=start;
        while(t!=NULL)
        {
            cout<<t->info;
            t=t->link;
        }
    }
}
int menu()
{

    int ch;
    cout<<" 1 add value to the list"<<endl;
    cout<<"2 delete first node"<<endl;
    cout<<" 3 view list"<<endl;
    cout<<" 4 exit";
    cout<<"enter your chpoice"<<endl;
    cin>>ch;
    return ch;

}

int main()
{
    while(1)
    {

        switch(menu())
        {
        case 1:
            insertnode();
            break;
        case 2:
            deletenode();
            break;
        case 3:
            viewList();
            break;
        case 4:
            exit(0);
        }

    }
}
