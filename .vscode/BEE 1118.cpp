#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,sum=0,n=2,count=0;
    while(true)
    {
        cin>>x;
        if(x==2)
        {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            break;
        }

        else if(x<0 || x>10)
            cout<<"nota invalida"<<endl;
        else if(x==1)
        {
            sum=0;
            count=0;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;

        }
        else if(x>=0 && x<11)
        {
            count++;
            sum=sum+x;
            if(count==2)
            {
                cout<<"media = "<<sum/2<<endl;
                sum=0;
                count=0;
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
            }
        }

    }
}
