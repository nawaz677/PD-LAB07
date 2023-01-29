#include<iostream>
using namespace std;

void print_pattern(int);

main()
{

    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    print_pattern(rows);
}

void print_pattern(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        for(int k=i;k<=rows-1;k++)
        {
            cout<<" ";
        }

        for(int l=i;l<=rows-1;l++)
        {
            cout<<" ";
        }

        for(int m=1;m<=i;m++)
        {
            cout<<"*";
        }

        cout<<endl;

    }


}




