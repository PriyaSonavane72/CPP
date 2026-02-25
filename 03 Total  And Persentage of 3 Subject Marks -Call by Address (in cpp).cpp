using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>

void Claculate(int, int, int*, float*);

 int main()
 {
     int Phy = 0,Chem = 0,Maths = 0,Tot_Marks = 0;
     float persent = 0.0;

     cout <<"\n Enter 3 subject Marks => \n";

     cout<<"\n Enter Physics subject Marks : ";
     cin >>Phy;

      cout<<"\n Enter Chemistry subject Marks : ";
      cin >>Chem;

      cout<<"\n Enter Maths subject Marks : ";
      cin >>Maths;

      Calculate(Phy,Chem,Maths, &Tot_Marks,&Percent);

      //system("cls");
      cout("\n------------------------------------\n";

      cout<<"\n\n Student Report card => \n ";
      cout<<"\n \t Physics     =%d",Phy;
      cout<<"\n \t Chemistry   =%d",Chem;
      cout<<"\n \t Mathematics =%d",Maths;

      cout<<"\n====================================\n";
      cout<<"\n \t Total Marks =%d",Tot_Marks;
      cout<<"\n \t percentage  =%0.2f",Percent;

      cout<<"\n------------------------------------\n";

      getch();
      return 0;

}

void Calculate(int P, int C, int M,int *Tot,float *Per)
{
    *Tot = P + C + M;

    *per = ((float)(*Tot))/3;

     return;
}
