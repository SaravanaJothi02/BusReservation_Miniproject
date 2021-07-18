#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int seat1=30,seat2=30,seat3=30,seat4=30,seat5=30;
int seat6=30,seat7=30,seat8=30,seat9=30,seat10=30;
struct passenger{
char name[50];
char source[20];
char dest[20];
int busno;
int num_of_tickets;
int charges;
int ticket_no;
}details;
void available_bus(){
//char source[20],dest[20];
//system("cls");
sd:
printf("\n\t\t\t\t\t Source & Destination\n");
printf("\n\t\t1.rajapalayam <-> chennai\n\n\t\t2.hosur <-> chennai\n\n\t\t3.trichy <-> coimbatore\n\n\t\t4.salem <-> kanyakumari\n\n\t\t5.madurai <-> bangalore");
printf("\n\n\t\tEnter source -->");
scanf("%s",details.source);
printf("\n\t\tEnter Destination -->");
scanf("%s",details.dest);
if((strcmp(details.source,"rajapalayam")==0 && strcmp(details.dest,"chennai")==0)||(strcmp(details.source,"chennai")==0 && strcmp(details.dest,"rajapalayam")==0)){
printf("\n                       Available buses & Fare                    ");
printf("\n\n Bus No.|   Bus Name    |   Source-Destination | Fare  | Time | Available seats ");
printf("\n\n-------------------------------------------------------------------------------");
printf("\n  101   |Ganesh Travels |  Rajapalayam-Chennai |Rs.700 |  6pm  |  %d  ",seat1);
printf("\n  102   |AVK Travels    |  Chennai-Rajapalayam |Rs.700 |  7pm  |  %d  ",seat2);
//printf("choose bus :");
//scanf("%d",&b1);
}
else if((strcmp(details.source,"hosur")==0 && strcmp(details.dest,"chennai")==0)||(strcmp(details.source,"chennai")==0 && strcmp(details.dest,"hosur")==0)){
printf("\n                       Available buses & Fare                    ");
printf("\n\n Bus No.|    Bus Name     |   Source-Destination | Fare  | Time | Available seats ");
printf("\n\n---------------------------------------------------------------------------------");
printf("\n   103  |Bharathi Travels |     Hosur-Chennai    |Rs.500 |  7pm |  %d ",seat3);
printf("\n   104  |  Asian Xpress   |     Chennai-Hosur    |Rs.500 |7.30pm|  %d",seat4);
//printf("choose bus :");
//scanf("%d",&b1);
}
else if((strcmp(details.source,"trichy")==0 && strcmp(details.dest,"coimbatore")==0)||(strcmp(details.source,"coimbatore")==0 && strcmp(details.dest,"trichy")==0)){
printf("\n                       Available buses & Fare                    ");
   printf("\n\n Bus No.|   Bus Name    |   Source-Destination | Fare  | Time | Available seats ");
   printf("\n\n-------------------------------------------------------------------------------");
printf("\n  105   | Krish Travels |   Trichy-Coimbatore  |Rs.570 | 6.30pm | %d",seat5);
printf("\n  106   |  NJK Travels  |   Coimbatore-Trichy  |Rs.370 |  7pm   | %d",seat6);
}
else if((strcmp(details.source,"salem")==0 && strcmp(details.dest,"kanyakumari")==0)||(strcmp(details.source,"kanyakumari")==0 && strcmp(details.dest,"salem")==0)){
printf("\n                       Available buses & Fare                    ");
   printf("\n\n Bus No.|   Bus Name    |   Source-Destination | Fare  | Time | Available seats ");
   printf("\n\n--------------------------------------------------------------------------------");
printf("\n  107   | Mazel Travels |   Salem-Kanyakumari  |Rs.800 | 7.30pm | %d",seat7);
printf("\n  108   | Sam Travels   |   Kanyakumari-Salem  |Rs.800 |  8pm   | %d",seat8);
}
else if((strcmp(details.source,"madurai")==0 && strcmp(details.dest,"bangalore")==0)||(strcmp(details.source,"bangalore")==0 && strcmp(details.dest,"madurai")==0)){
printf("\n                       Available buses & Fare                    ");
   printf("\n\n Bus No.|   Bus Name     |   Source-Destination | Fare  | Time | Available seats ");
   printf("\n\n----------------------------------------------------------------------------------");
printf("\n  109   |  Royal Travels |   Madurai-Bangalore  | Rs.900| 6.30pm | %d",seat9);
printf("\n  110   |Kurinchi Travels|   Bangalore-Madurai  | Rs.900|   7pm  | %d",seat10);
}
else{
printf("\n\n\t\tEnter correct source & destination...(Press any key to Re-Enter)");
getch();
system("cls");
goto sd;
}
}
void booking(){
//struct passenger  details;
//int charges;
int price;
printf("\t\t\t\t--------------------------------------------------------------------------------------");
printf("\n\t\t\t\t\t\t\t            BOOKING                                            ");
printf("\n\t\t\t\t--------------------------------------------------------------------------------------");
//system("cls");
//sorce_dest();
available_bus();
FILE *fp;
fp=fopen("reservation.txt","a+");
again: 
printf("\n\n\tEnter bus no:> ");
scanf("%d",&details.busno);
printf("\n\n\tEnter name:> ");
fflush(stdin);
gets(details.name);
printf("\n\n\tEnter number of tickets:> ");
scanf("%d",&details.num_of_tickets);
srand(time(0));
details.ticket_no=rand();
if(details.busno==101 && seat1>=details.num_of_tickets){
price=700;
seat1=seat1-details.num_of_tickets;
details.charges=details.num_of_tickets*price;//price for tickets
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==102 && seat2>=details.num_of_tickets){
price=700;
seat2=seat2-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==103 && seat3>=details.num_of_tickets){
price=500;
seat3=seat3-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==104 && seat4>=details.num_of_tickets){
price=500;
seat4=seat4-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==105 && seat5>=details.num_of_tickets  ){
price=570;
seat5=seat5-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==106 && seat6>=details.num_of_tickets ){
price=570;
seat6=seat6-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==107 && seat7>=details.num_of_tickets){
price=800;
seat7=seat7-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==108 && seat8>=details.num_of_tickets ){
price=800;
seat8=seat8-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==109 && seat9>=details.num_of_tickets ){
price=900;
seat9=seat9-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else if(details.busno==110 && seat10>=details.num_of_tickets){
price=900;
seat10=seat10-details.num_of_tickets;
details.charges=details.num_of_tickets*price;
bookinginfo(details.name,details.busno,details.num_of_tickets,details.charges,details.ticket_no,details.source,details.dest);
}
else{
printf("\n\nCheck bus number and book tickets after checking seat availability..");
goto again;
}
fprintf(fp,"%s %s %s %d %d %d %d\n",details.name,details.source,details.dest,details.busno,details.num_of_tickets,details.charges,details.ticket_no);
fclose(fp);
//system("cls");
getch();
system("cls");
}
void bookinginfo(char name[],int busno,int num_of_tickets,int charges,char source[],char dest[]){
system("cls");
printf("\n\nTICKET BOOKED SUCCESSFULLY!!!");
printf("\n\nPress enter to get your ticket..");
getch();
printf("\n\n\t\t\tTICKET\n");
printf("\n\t\tName : %s",name);
printf("\n\t\tSource : %s",details.source);
printf("\n\t\tDestination : %s",details.dest);
printf("\n\t\tBus No: %d",busno);
printf("\n\t\tNUmber of seats : %d",num_of_tickets);
printf("\n\t\tCharges : %d",charges);
printf("\n\t\tTicket Number : %d",details.ticket_no);
getch();
system("cls");
}
void cancel(){
//struct passenger rem;
int test=0;
FILE *old,*ne;
int ticketno,bno,num_of_tickets;
old=fopen("reservation.txt","r");
ne=fopen("new.txt","w");
printf("\n\t\tEnter ticket number :");
scanf("%d",&ticketno);
//removing cancelled tickets from file
while(fscanf(old,"%s %s %s %d %d %d %d\n",details.name,details.source,details.dest,&details.busno,&details.num_of_tickets,&details.charges,&details.ticket_no)!=EOF){
if(details.ticket_no!=ticketno){
fprintf(ne,"%s %s %s %d %d %d %d\n",details.name,details.source,details.dest,details.busno,details.num_of_tickets,details.charges,details.ticket_no);
}
else{
test++;
printf("\n\t\tCancelled successfully");
if(details.busno==101){
seat1=seat1+details.num_of_tickets;
}
else if(details.busno==102){
seat2=seat2+details.num_of_tickets;
}
else if(details.busno==103){
seat3=seat3+details.num_of_tickets;
}
else if(details.busno==104){
seat4=seat4+details.num_of_tickets;
}
else if(details.busno==105){
seat5=seat5+details.num_of_tickets;
}
else if(details.busno==106){
seat6=seat6+details.num_of_tickets;
}
else if(details.busno==107){
seat7=seat7+details.num_of_tickets;
}
else if(details.busno==108){
seat8=seat8+details.num_of_tickets;
}
else if(details.busno==109){
seat9=seat9+details.num_of_tickets;
}
else if(details.busno==110){
seat10=seat10+details.num_of_tickets;
}	
}
getch();
}
fclose(old);
fclose(ne);
remove("reservation.txt");
rename("new.txt","reservation.txt");
if(test==0){
printf("\n\t\tEnter valid ticket number!!!");
getch();
}
//seats increasing
}
void view(){
FILE *fp;
fp=fopen("reservation.txt","r");
printf("\n\t\t\t\tPASSENGERS LIST");
printf("%10s %10s %10s %10s %10s %10s %10s\n","\n\n\tName ","Source ","Destination","Bus.No ","No.Of.Seats","Charges ","Ticket.no\n");
while(fscanf(fp,"%s %s %s %d %d %d %d\n",details.name,details.source,details.dest,&details.busno,&details.num_of_tickets,&details.charges,&details.ticket_no)!=EOF){
 printf("%10s %10s %10s %10d %10d %10d %10d\n",details.name,details.source,details.dest,details.busno,details.num_of_tickets,details.charges,details.ticket_no);
}
fclose(fp);
getch();
system("cls");  
}
int main(){
system("COLOR B0");
int opt;
do{
printf("\n\t\t\t\t-------------------------------------------------------------");
printf("\n\t\t\t\t                     RS BUS RESERVATION                  ");
printf("\n\t\t\t\t-------------------------------------------------------------");
printf("\n\n\t\t1.-->To check available buses & seats\n\n\t\t2.-->Booking\n\n\t\t3.-->Cancellation\n\n\t\t4.-->View booked list\n\n\t\t5.-->Exit");
printf("\n\n\t\t-->Enter option : ");
scanf("%d",&opt);
system("cls");
switch(opt){
case 1:
available_bus();
printf("\n\nPress any key to go back main menu...");
getch();
system("cls");
break;
case 2:
booking();
break;
case 3:
cancel();
system("cls");
break;
case 4:
view();
system("cls");
break;
}
}while(opt!=5);
    return 0;
}
