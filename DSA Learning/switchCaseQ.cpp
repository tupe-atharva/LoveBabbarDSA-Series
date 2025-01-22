// Given a total amount eg. 1330, give the total number of 100Rs, 50Rs, 20Rs and 1Re notes required to make the total amount.


#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter an amount "<<endl;
cin>>n;

//APPROACH : lets divide the entered number by 100, then 50, then 20, then 1 to get the number of each type of notes.
// ie. 1330/100, will give 13 ie. 13 notes of 100Rs, then (1330 - 1300 = 30), operate on 30 now.


int i = 0;
int thousands,hundreds,twenties,fifties,ones;
// while (n!=0)
// {
    switch (i)
    {

    case 0:
    {
        thousands = n/1000;
        cout<<"The number of 1000 Rs notes is : "<<thousands<<endl;
        n = n - (thousands*1000);
    }
    case 1:
       {
        hundreds = n/100;
        cout<<"The number of 100 Rs notes is : "<<hundreds<<endl;
        n = n - (hundreds*100);
        }
    case 2:
        {
            fifties = n/50;
        cout<<"The number of 50 Rs notes is : "<<fifties<<endl;
        n = n - (fifties*50);
        }

    case 3:
        {
            twenties = n/20;
        cout<<"The number of 20 Rs notes is : "<<twenties<<endl;
        n = n - (twenties*20);
        }

    case 4:
        {
            ones = n/1;
        cout<<"The number of 1 Re notes is : "<<ones<<endl;
        }

    // default:{
    // cout<<"Enter a valid amount"<<endl;
    // break;
    // }

    i++;
// }

}


return 0;
}