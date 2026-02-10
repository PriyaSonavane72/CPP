#include<stdio.h>
#include<conio.h>

int Book_Read();

int main()
{
    int R_Pages = 0,Total_Pages =0,Day_Cnt =0;

    printf("\n Enter Total number of Pages : ");
    scanf("%d",&Total_Pages);

    for (Day_Cnt = 1; R_Pages < Total_Pages; Day_Cnt++)
    {
        R_Pages = Book_Read();

        printf("\n Pages Read By Day %d = %d ",Day_Cnt, R_Pages);
        getch();

    }
    printf("\n Congrats You Have Completed Book in % Days", Day_Cnt);

    getch();
    return 0;

}

int Book_Read ()
{
    int Res = 10;
    int Pcnt =0;

    printf("\n \n How Many Pages Read  Total :");
    scanf("%d",&Pcnt);

    Res = Res + Pcnt;
    return Res ;

}

