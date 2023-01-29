#include<iostream>
using namespace std;

void print_pattern(int);
void print_reverse_pattern(int);

main()
{
    int rows;
    cout<<"Enter the number of rows you want to print: ";
    cin>>rows;

    print_pattern(rows);
    print_reverse_pattern(rows);
}


void print_pattern(int rows)
{

    for(int i=1;i<=rows/2;i++)
    {
        for(int j=i;j<=(rows/2)-1;j++)
        {
            cout<<" ";
        }
        
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }    

}



void print_reverse_pattern(int rows)
{
    for(int i=1;i<=rows/2;i++)
    {
        for(int j=i;j<=rows/2;j++)
        {
        cout<<"*";
        }
        cout<<endl;

        for(int k=1;k<=i;k++)
        {
        cout<<" ";
        }
    }
}


