#include<iostream>
using namespace std;
struct node
{
    char label[10];
    int count;
    struct node *child[10];
}*root;
class Generaltree
{
    public:
        void create();
        void display(node *r1);
        Generaltree()
        {
            root=NULL;
        }
};
void Generaltree::create()
{
    int tbooks,tchapters,i,j,k;
    root=new node;
    cout<<"Enter the name of book:";
    cin>>root->label;
    cout<<"Enter the number of chapters in books:";
    cin>>tchapters;
    root->count=tchapters;
    for(i=0;i<tchapters;i++)
{
root->child[i]=new node;
cout<<"Enter the name of chapter"<<i+1<<":";
cin>>root->child[i]->label;
cout<<"Enter the number of sections:";
cin>>root->child[i]->count;
for(j=0;j<root->child[i]->count;j++)
{
root->child[i]->child[j]=new node;
cout<<"Enter name of section "<<j+1<<":";
cin>>root->child[i]->child[j]->label;
     }
}
}	
void Generaltree::display(node *r1)
{
    int i,j,k,tchapters,child;
    if(r1!=NULL)
    {
        cout<<"\nBook Hierarchy"<<endl;
        cout<<"\nBook Title:"<<r1->label;
        tchapters=r1->count;
        for(i=0;i<tchapters;i++)
        {   cout<<"\n    Chapter:"<<i+1<<" "<<r1->child[i]->label;
            cout<<"\n        Section:";
            for(j=0;j<r1->child[i]->count;j++)
            {
                cout<<"\n  "<<j+1<<":"<<r1->child[i]->child[j]->label;
            }
        }
    }
}      
int main()
{     Generaltree gt;
int choice;
do
{
cout<<"\n*******************"<<endl;
cout<<"Book tree creation"<<endl;
cout<<"*******************"<<endl;
cout<<"1.Create"<<endl;
cout<<"2.Display"<<endl;
cout<<"3.Exit"<<endl;
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 1:gt.create();
      break;
case 2:gt.display(root);
      break;	
default:
break;
}
}while(choice!=3);
return 0;	
}

