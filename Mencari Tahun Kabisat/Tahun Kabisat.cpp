#include<iostream>>
#include<conio.h>
using namespace std;
main()
{
    int tahun;
    cout<<"======MENCARI TAHUN KABISAT=====";
    cout<<"\nMasukan Tahun :"; cin>>tahun;
        if(tahun%4==0)
        {
         cout<<"\n"<<tahun<<" Adalah tahun kabisat";
        }
    else
    {
        cout<<"\n"<<tahun<<" Adalah Bukan tahun kabisat";
    }
getch();
return 0;
}
