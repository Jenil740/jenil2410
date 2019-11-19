#include "stdio.h"
#include "string.h"
struct s1{
char house_no[5];
char contactn[10];
char contactp[60];
char vehicleno[10];
char chassisno[10];
char drivingl[20];
char regstatus[10];
char AMCstatus[10];
char vehicle[10];
};

int main()
{
struct s1 ob;//Variable for structure s1
int vehicle, d, m, y;//Today's Date
int charge, tcharge, lc, tax, sc;;//All the charges and tax
int dv, mv, yv;//Date of purchase
int d1, m1, y1;//For calculating days
int pu, puc;//Charges for pick up
int dp, mp, yp;//Date of Payment
printf("!...WELOME TO GANPAT VEHICLE SERVICING SYSTEM...!");
printf("Enter today's Date(dd/mm/yyyy)");//Entering Today's Date
scanf("%d/%d/%d", &d, &m, &y);
printf("Enter House no.:");//Entering House number
scanf("%s", ob.house_no);
printf("Enter Your First Name: ");//For User Name
scanf("%s", ob.contactp);
printf("Enter Contact no.: ");//For Users contact details
scanf("%s", ob.contactn);
printf("Enter Vehicle no.: ");//For users vehicle number
scanf("%s", ob.vehicleno);
printf("Enter Chassis no.: ");//For users chassis number
scanf("%s", ob.chassisno);
printf("Enter Driving License no.: ");//For users driving license
scanf("%s", ob.drivingl);
printf("Registry status of your vehicle(Yes/No).: ");//For knowing users registry status
scanf("%s", ob.regstatus);
printf("AMC status of your vehicle(Yes/No): ");//For knowing users AMC status
scanf("%s", ob.AMCstatus);
printf("Type of your vehicle(Enter no.): \n");//For users type of vehicle
printf("1. Two Wheeler \n");
printf("2. Three Wheeler \n");
printf("3. Four Wheeler \n");
scanf("%d", &vehicle);
if(vehicle==1)
{
    charge=1000;//Charge for two wheeler
    lc=0;//labour charge for two wheeler
}
else if(vehicle==2)
{
    charge=1500;//Charge for three wheeler
    lc=100;//labour charge fro three wheeler
}
else if(vehicle==3)
{
    charge=2000;//Charge for four wheeler
    lc=100;//labour charge for four wheeler
    tax=0.05*charge;//tax
}
printf("Date of vehicle purchase(dd/mm/yyyy)");
scanf("%d/%d/%d", &dv, &mv, &yv);
d1=d-dv;
if(d1<0)
{
    d=d+30;
    m=m-1;
}
m1=m-mv;
if(m1<0)
{
    m=m+12;
    y=y-1;
}
y1=y-yv;
/*if(y1==0)
{
    printf("0%c service charge is added \n", 37);
}else if(y1==1)
{
    printf("4%c service charge is added \n", 37);
    sc=0.04*charge;
}*/
else if(y1==2)
{    
    printf("9%c service charge is added \n", 37);
    sc=0.09*charge;
}
else if(y1>=3)
{
    printf("15%c service charge is added \n", 37);
    sc=0.15*charge;
}
/*printf("Would you like us to pick up your vehicle(Choose No.)?\n");
printf("1. Yes\n");
printf("2. No \n");
scanf("%d", &pu);
if(pu==1)
{
    printf("10%c is charged for pick up", 37);
    puc=0.10*charge;
}    
else
    printf("0%c is charged for pick up", 37);

tcharge=charge+sc+lc+tax+puc;
printf("\nDate of payment(Within 10 days of pick up)(dd/mm/yyyy):");
scanf("%d/%d/%d", &dp, &mp, &yp);

printf("\nYour Detailed Bill is:");
printf("\nHouse Number: %s", ob.house_no);
printf("\nContact Number: %s", ob.contactn);
printf("\nContact Person: %s", ob.contactp);
printf("\nRegistry Status: %s", ob.regstatus);
printf("\nAMC Status: %s", ob.AMCstatus);
printf("\nDate of Vehicle Purchase: %d/%d/%d", dv, mv, yv);
printf("\nDriving License: %s", ob.drivingl);
printf("\nChassis Number: %s", ob.chassisno);
printf("\nDate of Payment: %d/%d/%d", dp, mp, yp);
printf("\nTax Added: %d", tax);
printf("\nTotal Amount To Be Payed: %d", tcharge);
}
