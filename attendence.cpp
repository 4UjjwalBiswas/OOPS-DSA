#include<iostream>
using namespace std;
double total_classes(double total_overall);
double attended_classes(double total_overall);


int main()
{
    double total_overall;

    cout<<"enter the total subjects= ";
    cin>>total_overall;
    double n=total_classes(total_overall);
    double m=attended_classes(total_overall);
    cout<<"total attended classes are ="<<m<<endl;
    cout<<"total class ="<<n<<endl;
    double per=(m*100)/n;
    cout<<"attendence percentage = "<<per<<"%"<<endl<<endl;

    cout<<"this time enter the classes that will take place and classes you will take!!!!!!!"<<endl<<endl;

    double o=total_classes(total_overall);
    double p=attended_classes(total_overall);
    double f_per=((m+p)*100)/(n+o);
    cout<<"!!!! total percentage of classes after future attendence==="<<endl;
    cout<<f_per<<"% "<<f_per<<"% "<<f_per<<"% "<<f_per<<"% "<<endl;


    return 0;
}

double total_classes(double total_overall)
{
    double total;
    double no;
    cout<<"!!enter no of classes in each one by one!!"<<endl<<endl;
    for(int i=1;i<=total_overall;i++)
    {
        cout<<"enter="<<endl;
        cin>>total;
        no=no+total;
    }
    return no;

}
double attended_classes(double total_overall)
{
    double t_attend;
    cout<<"!!enter attended classes in each subjects accordingly!!"<<endl<<endl;
    double ano=0;
     for(int i=1;i<=total_overall;i++)
    {
        cout<<"enter="<<endl;
        cin>>t_attend;
        ano=ano+t_attend;
    }
    return ano;
}