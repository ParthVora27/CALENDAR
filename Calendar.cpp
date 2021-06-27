//calendar example


#include<stdio.h>
#include<conio.h>

#define TRUE    1
#define FALSE   0

 int getmonth(int p,int q)
{
                   int a,b,c;
                   printf("\n \   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");
                   for(a=0;a<=q;a++)
                   if(a>=q)
                   {
                   for(b=1;b<=p;b++)
                   {
                    if((a % 7) == 0)
                    printf("\n");
                    printf("%6d",b);
                    a++;
                    }
                    }
                    else
                    printf("      ");
                    c=(p+q)%7;
     
		
    return(c);	
}

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};


int inputyear(void)
{
	int year;
	
	printf("Please enter a year (example: 1999) : ");
	scanf("%d", &year);
	return year;
}

int determinedaycode(int year)
{
	int daycode;
	int d1, d2, d3;
	
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	return daycode;
}


int determineleapyear(int year)
{
	if(year% 4 == FALSE && year%100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar(int year, int daycode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		
		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}
		
		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			if((month==5)&&(day==1)||((month==1)&&(day==1||day==2))||((month==2)&&(day==14))||((month==4)&&(day==10))||((month==2)&&(day==19))||((month==3)&&(day==4))||((month==3)&&(day==21))||((month==4)&&(day==1)))
			printf("h%d",day);
			else
			printf("%2d", day );
		  
		 	
			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;
	}
}




int main(void)
{
	int year, daycode, leapyear;
	int a,b,c;
	
	printf("\t\t\t\t\t\tHELLO USER\n\n");
do
{
		
	printf("\n1-CALENDAR\n2-SPECIFIC MONTH\n3-LIST OF HOLIDAYS\n4-EXIT\n");
	

	
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
	break;
	
	case 2:
int yr, x, y, z, mon;
                  
                  printf("Enter an year to show the calendar :" );
                  scanf("%d",&yr);
                  x = ((yr-1)%400) / 100;
                  y = (((yr-1)%400) % 100) / 4;
                  z = (((yr-1)%400) % 100) - (((yr-1)%400) % 100) / 4;
                  mon = (x*5+y*2+z+1) % 7;
                  
                  printf("\n\n\n\n  January  \n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n  February  \n\n");
                  if((yr)%4==0)
                  mon=getmonth(29,mon);
                  else
                  mon=getmonth(28,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n  March  \n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n  April  \n\n");
                  mon=getmonth(30,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n  May  \n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n  June  \n\n");
                  mon=getmonth(30,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n  July  \n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n  August  \n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                   printf("\n\n\n\n  September  \n\n");
                   mon=getmonth(30,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   
                   printf("\n\n\n\n  October  \n\n");
                   mon=getmonth(31,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                    
                   printf("\n\n\n\n  November  \n\n");
                   mon=getmonth(30,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   
                   printf("\n\n\n\n  December  \n\n");
                   mon=getmonth(31,mon);
	break;
	
	case 3:
		printf("");
		printf("1/1   Happy New Year\n");
		printf("13/1  Lohri\n");
		printf("14/1  Makar sankrant\n");
		printf("15/1  Pongal\n");
		printf("26/1  Republic day\n");
		printf("19/2  Shivaji Jayanti\n");
		printf("4/3   Shivaratri\n");
		printf("21/3  Holi\n");
		printf("14/4  Ambekar jayanti\n");
		printf("17/4  Mahavir jayanti\n");
		printf("19/4  Good friday\n");
		printf("21/4  Easter day\n");
		printf("1/5   Maharashtra day\n");
		printf("18/5  Buddha purnima\n");
		printf("5/6   Ramzan eid\n");
		printf("12/8  Bakr id\n");
		printf("15/8  Independence day/ Raksha Bandhan\n"); 
		printf("17/8  Parsi new year\n");
		printf("24/8  Janmashtami\n");
		printf("2/9   Ganesh chaturthi\n");
		printf("10/9  Muharram\n");
		printf("11/9  Onam\n");
		printf("2/10  Mahatma Gandhi Jayanti\n");
		printf("8/10  Dussehra\n");
		printf("27/10 Diwali\n");
		printf("29/10 Bhai duj\n");
		printf("12/11 Guru nanak jayanti\n");
		printf("25/12 Christmas\n");
		break;
	break;
	case 4:
		printf("THANK YOU!");
	break;
	default:
		printf("ENTER A VALID CHOICE");
   }
}while(a!=4);
}
