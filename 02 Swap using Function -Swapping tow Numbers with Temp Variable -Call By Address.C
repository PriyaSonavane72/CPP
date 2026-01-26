#include<stdio.h>
#include<conio.h>



void Swap(int&, int&);                         ///Function Declaration / prototype Function

int main ()
    {
        int No1 = 0, No2 = 0;

        printf("\n Enter 1st Number  : ");
        scanf("%d",&No1);

        printf("\n Enter 2nd Number  : ");
        scanf("%d",&No2);

        printf("\n Before Swap : Number 1st  = %d.\t Number 2nd = %d.",No1, No2);

       Swap (No1 , No2);                          /// Function call

        printf("\n After Swap : Number 1st  = %d.\t Number 2nd = %d.",No1, No2);

        getch();
        return 0;

}
void Swap(int &NRef1, int &NRef2)
{
    int Temp = 0;


                                                ///Logic For Swaping

    Temp = NRef1;
    NRef1 = NRef2;
    NRef2 = Temp;
}





