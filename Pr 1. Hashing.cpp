#include<iostream>
using namespace std;
class hashing
{
    long int mobile,hash_table[10];
    public:
        hashing()
        {
            for(int i=0;i<10;i++)
            {
                hash_table[i]=-1;
            }
        }
        void linear_prob();
        void quadratic_prob();
        void display();
};
void hashing::linear_prob()
{
    int index;
    cout<<"Enter your mobile number:\n";
    cin>>mobile;
    index=mobile%10;
    if(hash_table[index]=-1)
    {
        hash_table[index]=mobile;
    }
    else
    {
        while(hash_table[index]!=-1)
        {
            cout<<"Testing index"<<index<<endl;
            if(index==9)
            {
                index=0;
            }
            else
            {
                index++;
            }          
        }
        hash_table[index]=mobile;
    }
}
void hashing::quadratic_prob()
{
  int index,a;
  cout<<"enter your mobile number";
  cin>>mobile;
  index=mobile%10;
int j=1;
if(hash_table[index]==-1)
{
hash_table[index]=mobile;
}
else
{
a=index%10;
while(j<10)
{
index=(a+(j*j)%10);
if(hash_table[index]==-1)
{
hash_table[index]=mobile;
break;
}
else
{
j++;
}
}
}
}
void hashing::display()
{
for(int i=0;i<10;i++)
{
cout<<i<<" "<<hash_table[i]<<endl;
}
}
int main()
{
hashing h;
int ch;
do
{
    cout<<"******MENU******"<<endl;
cout<<"1.LINEAR PROBING"<<endl;
cout<<"2.QUADRATIC PROBING"<<endl;
cout<<"3.DISPLAY"<<endl;
cout<<"4.EXIT"<<endl;
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:h.linear_prob();
      break;
case 2:h.quadratic_prob();
      break;
case 3:h.display();
      break;
case 4: cout<<" Exiting Code";
       break;
}
}while(ch!=4);
return 0;
}
