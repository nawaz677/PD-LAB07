#include<iostream>
using namespace std;

void print_reverse_pattern(int);

main()
{
    int rows;
    cout<<"Enter the number of rows you want to print: ";
    cin>>rows;

    print_reverse_pattern(rows);


}

void print_reverse_pattern(int rows)
{
    for(int i=rows;i>=1;i--)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}