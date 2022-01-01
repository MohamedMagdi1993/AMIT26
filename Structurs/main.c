#include <stdio.h>
#include <stdlib.h>
/*
void SetCalendar(unsigned char day, unsigned char month, unsigned int year);
void GetYear(void);
void GetMonth(void);
void GetDay(void);

struct Calender{
unsigned int year ;
unsigned char month ;
unsigned char day ;
};

struct Calender myCal;
struct Calender * Calptr = &myCal ;
int main()
{

    SetCalendar(28,8,2021);
     GetDay();
     GetMonth();
     printf("Year = %d\n",myCal.year);
    return 0;
}
void SetCalendar(unsigned char day, unsigned char month, unsigned int year)
{
    myCal.day = day ;
    myCal.month = month ;
    Calptr->year = year ;
}
/*
void GetYear(void)
{
    printf("Year = %d\n",myCal.year);
}*/
/*
void GetMonth(void)
{
    printf("Month = %d\n",myCal.month);
}
void GetDay(void)
{
    printf("Day = %d\n",myCal.day);
}
*/
typedef unsigned char uint8;
typedef unsigned char byte;
typedef union {
byte Data;
struct {
byte BIT0 :1; /* Register Bit 0 */
byte BIT1 :1; /* Register Bit 1 */
byte BIT2 :1; /* Register Bit 2 */
byte BIT3 :1; /* Register Bit 3 */
byte BIT4 :1; /* Register Bit 4 */
byte BIT5 :1; /* Register Bit 5 */
byte BIT6 :1; /* Register Bit 6 */
byte BIT7 :1; /* Register Bit 7 */
} Bits;
} HW_Register;

HW_Register myRegister ;

void SetFlag(uint8 bit_number)
{
    switch (bit_number)
    {
    case 0 :
        myRegister.Bits.BIT0 = 1 ;
        break;
    case 1 :
        myRegister.Bits.BIT1 = 1 ;
        break;
        case 2 :
        myRegister.Bits.BIT2 = 1 ;
        break;
        case 3 :
        myRegister.Bits.BIT3 = 1 ;
        break;
        case 4 :
        myRegister.Bits.BIT4 = 1 ;
        break;
        case 5 :
        myRegister.Bits.BIT5 = 1 ;
        break;
        case 6 :
        myRegister.Bits.BIT6 = 1 ;
        break;
        case 7 :
        myRegister.Bits.BIT7 = 1 ;
        break;
        default:
            break;
    }

}
void ClearFlag(uint8 bit_number)
{
     switch (bit_number)
    {
    case 0 :
        myRegister.Bits.BIT0 = 0 ;
        break;
    case 1 :
        myRegister.Bits.BIT1 = 0 ;
        break;
        case 2 :
        myRegister.Bits.BIT2 = 0 ;
        break;
        case 3 :
        myRegister.Bits.BIT3 = 0 ;
        break;
        case 4 :
        myRegister.Bits.BIT4 = 0 ;
        break;
        case 5 :
        myRegister.Bits.BIT5 = 0 ;
        break;
        case 6 :
        myRegister.Bits.BIT6 = 0 ;
        break;
        case 7 :
        myRegister.Bits.BIT7 = 0 ;
        break;
        default:
            break;
    }
}

void PrintFlag(void)
{
    printf("%x ", myRegister.Data);
}
int main ()
{
    myRegister.Data = 0x00;
    while (1)
    {
        int x = 0 ;
        printf("\n");
        scanf("%d",&x) ;
        SetFlag(x);
        printf("\n");
        scanf("%d",&x) ;
        ClearFlag(x) ;
        printf("\n");
        PrintFlag();
        printf("\n");
    }

    return 0 ;
}
