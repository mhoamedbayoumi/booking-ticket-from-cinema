#include<iostream>
#include<string>
using namespace std;
int main ()
{
    //naming variable
    int choose,time_time ;
    cout<<"________________________________________";
    cout<<"WELCOM TO THE CENIMA !!";
    cout<<"________________________________________\n";
    cout<<"please choose the gategory \n";
    cout<<"press!!\n 1-comady \n 2-horor \n 3-action \n  ";
    cin>>choose;
    //switch to choose fillm
    switch(choose)
    {
    case 1:
        cout<<"1-the spy -----------------------15$ \n";
        cout<<"2-the hangover ------------------12$ \n";
        break;
    case 2:
        cout<<"1-into the dark------------------15$ \n";
        cout<<"2-the hell house-----------------12 \n";
        break;
    case 3:
        cout<<"1-avengers ----------------------15$ \n";
        cout<<"2-fast and ferious---------------12$ \n";
        cout<<"3-tent---------------------------15$ \n";
    }
    cout<<"choose film please \n ";
    cin>>choose;
    cout<<"choose film time please \n";
    cout<<"time 3\n";
    cout<<"time 6\n";
    cout<<"time 9\n";
    cin>>time_time;
    // switch to choose time
    switch(time_time)
    {
    case 3:
        cout<<"ok the film will be three \n";
        break;
    case 6:
        cout<<"ok the film will be at six \n";
    case 9:
        cout<<"ok the film will be at nine \n";
    }
    cout<<"thank you for booking from us ";
return 0;

}


