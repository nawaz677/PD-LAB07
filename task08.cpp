#include<iostream>
using namespace std;

float calculate_price(int,int,float);

main()
{
    int cargo;
    int tonnage;
    float sum_tonnage=0;
    cout<<"Enter the amount of cargo: ";
    cin>>cargo;

    calculate_price(cargo,tonnage,sum_tonnage);


}

float calculate_price(int cargo,int tonnage,float sum_tonnage)
{
    int minibus_tonnage=0;
    int truck_tonnage=0;
    int train_tonnage=0;

    float pct_minibus;
    float pct_truck;
    float pct_train;
    float avg_price=1;

    for(int i=1;i<=cargo;i++)
    {
        cout<<"Enter the tonnage of cargo: ";
        cin>>tonnage;
        sum_tonnage=sum_tonnage+tonnage;
        
        if(tonnage<=3)
        {
            minibus_tonnage=minibus_tonnage+tonnage;
        }

        else if(tonnage>3 && tonnage<=11)
        {
            truck_tonnage=truck_tonnage+tonnage;
        }

        else if(tonnage>11)
        {
            train_tonnage=train_tonnage+tonnage;
        }

    }
        cout<<endl<<"Sum of all tonnage of cargo is: "<<sum_tonnage<<endl;
        cout<<"Total tonnage of cargo carried by Minibus: "<<minibus_tonnage<<endl;
        cout<<"Total tonnage of cargo carried by Truck: "<<truck_tonnage<<endl;
        cout<<"Total tonnage of cargo carried by Train: "<<train_tonnage<<endl<<endl;


        pct_minibus=(minibus_tonnage*100)/sum_tonnage;
        pct_truck=(truck_tonnage*100)/sum_tonnage;
        pct_train=(train_tonnage*100)/sum_tonnage;

        avg_price=(minibus_tonnage*200+truck_tonnage*175+train_tonnage*120)/sum_tonnage;

        cout<<"Average price per ton of carried cargo: "<<avg_price<<endl;
        cout<<"Percentage of the cargo by Minibus: "<<pct_minibus<<endl;
        cout<<"Percentage of the cargo by Truck: "<<pct_truck<<endl;
        cout<<"Percentage of the cargo by Train: "<<pct_train;


}