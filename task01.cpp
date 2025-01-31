#include<iostream>
#include<string>
using namespace std;

void print_pattern(int);

main()
{
    int rows;
    cout<<"Enter the desired number of rows: ";
    cin>>rows;

    print_pattern(rows);


}

void print_pattern(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

}

