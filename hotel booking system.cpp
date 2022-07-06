#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <dos.h>
#include <windows.h>

using namespace std;

int login();
void frontcover();
int date();
float facilities(); //duit
float food(); //duit
int rate();
void loading();
float cash(float duit);
float card(float harga);
int payment();
float roomreservation(); //duit
void receipt(float,float,float);





int main(){
	int select,keluar=1;
	
	cout<<"Program starting...\n";
	system("pause");
	int totreceipt=0, HargaFac=0, HargaFood=0, HargaRoom=0;
	loading();
	login();
	

	do
	{
	system("pause");
	system("cls");
	frontcover();
	cout<<"Menu\n\n";
	cout<<"[1] - Date Reservation\t\t\t[2] - Facilities Subscription\t\t[3] - Food Reservation\n[4] - Payment\t\t[5] - Roomreservation\t\t\t[6] - Rate\t\t\t[7] - Receipt\t\t\t[8] - Exit Program";
	cout<<"\n\nEnter the value [1 - 7] to select which menu you want to go:";
	cin>>select;
	
	if(select==1)
	{
		date();
	}
	else if(select==2)
	{
		HargaFac+=facilities();
		totreceipt+=HargaFac;
	}
	else if(select==3)
	{
		HargaFood+=food();	
		totreceipt+=HargaFood;
	}
	else if(select==4)
	{
		payment();
	}
	else if(select==5)
	{
		HargaRoom+=roomreservation();
		totreceipt+=HargaRoom;
	}
	else if(select==6)
	{
		rate();
	}
	else if(select==7)
	{
		receipt(HargaFood,HargaRoom,HargaFac);
	}
	else if(select==8){
		cout<<"Thank you for using visiting our hotel program!"<<endl;
		system("pause");
		return 0;
	}
	else
	{
		cout<<"Invalid Input!\n\nPlease Re-Enter the correct value.\n";
		continue;
	}
	
	}while(keluar!=0);
}

int login()
{
	int choice1,choice2, telnum, exit=1,exit1=1,keluar=1,leave;
	string nama,user,pass,pass_confirm, email,userlogin,passlogin,userlogincheck="amirul",passlogincheck="123";
	
	do
	{
	START:
	
	frontcover();
	cout<<"Welcome to the Hoteru Hotel!"<<endl;
	cout<<"Enter [1] to Sign Up \nEnter [2] to Login\nEnter [3] to Exit\n"<<">>";
	cin>>choice1;
	system("pause");
	system("cls");
	
	switch(choice1)
		{
		case 1: frontcover();
				cout<<"Sign Up New User ID\n\n";
				cout<<"Enter Your Full Name:";
				cin.ignore();
				getline(cin,nama);
				system("cls");
				
				frontcover();
				cout<<"Sign Up New User ID\n\n";
				cout<<"Enter your Telephone Number:";
				cin>>telnum;
				system("cls");
				
				frontcover();
				cout<<"Sign Up New User ID\n\n";
				cout<<"Enter your Email Address:";
				cin.ignore();
				getline(cin,email);
				system("cls");
				
				frontcover();
				cout<<"Sign Up New User ID\n\n";
				cout<<"Enter Your Username:";
				getline(cin,user);
				system("cls");
				
				frontcover();
				cout<<"Sign Up New User ID\n\n";
				cout<<"Enter Your Password:";
				getline(cin,pass);
				system("cls");
				
				do
				{	
					frontcover();
					cout<<"Sign Up New User ID\n\n";
					cout<<"Re-enter Your Password to Confirm:";
					getline(cin,pass_confirm);
					system("cls");
					
					if(pass.compare(pass_confirm) == 0)
					{
						frontcover();
						cout<<"\n\nYou Have Successfully registered!\nThis is Your Account details:\n\n";
						cout<<"Name\t\t\t:"<<nama<<"\nTelephone Number\t:0"<<telnum <<endl<<"Email\t\t\t:"<<email<<endl<<"Username\t\t:"<<user<<endl<<
						"Password\t\t:"<<pass<<endl<<"Password Confirmation\t:"<<pass_confirm;
						userlogincheck=user;
						passlogincheck=pass_confirm;	
						exit1=0;
						cout<<endl<<endl;
						system("pause");
						system("cls");
					}
					else
					{
						continue;
					}
				}while(exit1!=0);
				
		case 2: 
				do
				{
					frontcover();
					cout<<"\n\nLogin User ID\n\n";
					cout<<"Username:";
					fflush(stdin);
					getline(cin,userlogin);
					cout<<"Password:";
					getline(cin,passlogin);
				
				if(userlogin.compare(userlogincheck) == 0 && passlogin.compare(passlogincheck) == 0)
				{
					exit=0;
					keluar=0;
					continue;
				}
				else
				{
					cout<<"\nYou have entered the wrong username or password!";
					cout<<endl;
					system("pause");
					
					cout<<endl<<"If you want to return to the Home Menu... Enter [1]-Yes or [0]-No"<<endl;
					cin>>choice2;
					
					if(choice2==1)
					{
						system("cls");
						goto START;
					}
					else
					system("pause");
					system("cls");
					continue;
				}
				}while(exit!=0);
				
				break;
		case 3: frontcover();
				cout<<"\nYou are about to leave our system.";
				cout<<endl;
				cout<<"Are you sure you want to leave? Enter [1]-Yes or [0]-No"<<endl<<">>";
				cin>>leave;
				system("pause");
				if(leave==1)
				{
					keluar=0;
				}
				else
				{
					keluar=1;
					cout<<endl;
					system("cls");
					continue;
				}
				return 0;
			
		default:frontcover();
				cout<<"Invalid input!\nPlease insert the right value.\n\n";
				system("pause");
				system("cls");
				keluar=1;
				break;
		}
	}while(keluar!=0);
}

void frontcover()
{	
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"<<endl;
	
	cout<<"\t .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.        	         ___"<<endl;
	cout<<"\t| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |                /\\  \\"<<endl;
	cout<<"\t| |  ____  ____  | || |     ____     | || |  _________   | || |  _________   | || |  _______     | || | _____  _____ | |             __// \\  \\____"<<endl;
	cout<<"\t| | |_   ||   _| | || |   .'    `.   | || | |  _   _  |  | || | |_   ___  |  | || | |_   __ \\    | || ||_   _||_   _|| |           /\\ //   \\ /\\   \\"<<endl;
	cout<<"\t| |   | |__| |   | || |  /  .--.  \\  | || | |_/ | | \\_|  | || |   | |_  \\_|  | || |   | |__) |   | || |  | |    | |  | |          //\\/ ' ' \\// \\   \\"<<endl;
	cout<<"\t| |   |  __  |   | || |  | |    | |  | || |     | |      | || |   |  _|  _   | || |   |  __ /    | || |  | '    ' |  | |         // '\\ ' ' //   \\___\\"<<endl;
	cout<<"\t| |  _| |  | |_  | || |  \\  `--'  /  | || |    _| |_     | || |  _| |___/ |  | || |  _| |  \\ \\_  | || |   \\ `--' /   | |          | ' ' ' ' ' ' |. .|"<<endl;
	cout<<"\t| | |____||____| | || |   `.____.'   | || |   |_____|    | || | |_________|  | || | |____| |___| | || |    `.__.'    | |          | ' ' ' ' ' ' |. .|"<<endl;
	cout<<"\t| |              | || |              | || |              | || |              | || |              | || |              | |          | ' ' '_' ' ' |. .|"<<endl;
	cout<<"\t| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |          | ' ' / \\ ' ' |. .|"<<endl;
	cout<<"\t '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'           |_'_'_|#|_'_'_|_.-"<<endl;
	
	cout<<""<<endl;
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
}

int date()
{
	int date,date_leave,time_stay,total_stay=0,month,month_leave,year_leave,year,habis=1,month_exit=1,date_exit=1;
	int day_exit=1;

	cout<<"\nWelcome to the Hoteru date reservation Menu"<<endl;
	
	do
	{	
	
	cout<<"Pick your desire reservation year [2001-2099]:";
	cin>>year;
	year_leave=year;
	
	if(year>2000 && year<2100)
	{
		do
		{
		cout<<"Select your desire reservation month [1-12]]:";
		cin>>month;
		month_leave=month;
		
		if(month > 0 && month <=12)
		{
			if(month == 2)
			{
				do
				{
				cout<<"Choose the date you desire to check-in";
				cin>>date;
				month_exit=0;
									
				if(date > 0 && date <=28)
				{
					do
					{
					cout<<"\nReminder: You cannot book more than 30 days else you will need to renew your booking.\nHow many days would you like to check-in?";
					cin>>time_stay;
					date_exit=0;
					
					if(time_stay > 0 && time_stay <=30)
					{
						total_stay = date + time_stay;
						
						if(total_stay > 28)
						{
							date_leave=total_stay-28;
							++month_leave;
						}
						else if(total_stay <=28)
						{
							date_leave=total_stay;
							cout<<endl;
						}	
						cout<<"you will need to check-out on "<<date_leave<<"/"<<month_leave<<"/"<<year;
						day_exit=0;
						habis=0;
						
					}
					else
					{
						cout<<"Invalid Number of day to check-in!\n\nPlease Re-Enter Your Number of Reservation Day."<<endl;
						continue;
					}
					}while(day_exit!=0);
				}
				else
				{
					cout<<"Invalid input for date!\n\nPlease Re-Enter your Reservation Date."<<endl;
					continue;
				}
				}while(date_exit!=0);
			}
			else if(month == 12)
			{
				do
				{
				cout<<"Choose the date you desire to check-in";
				cin>>date;
				month_exit=0;
				
				if(date > 0 && date <=31)
				{
					do
					{
					cout<<"How many days would you like to check-in?\nReminder: You cannot book more than 30 days else you will need to renew your booking.";
					cin>>time_stay;
					date_exit=0;
					
					if(time_stay > 0 && time_stay <=30)
					{
						total_stay = time_stay + date;
						
						if(total_stay >= 32)
						{ 
							date_leave = total_stay-31;
							month_leave = 1;
							++year_leave;
						}
						else if(total_stay < 32)
						{
							date_leave=total_stay;
							cout<<endl;
						}	
						cout<<"you will need to check-out on "<<date_leave<<"/"<<month_leave<<"/"<<year_leave;
						day_exit=0;
						habis=0;
					}
					else
					{
						cout<<"Invalid Number of day to check-in!\n\nPlease Re-Enter Your Number of Reservation Day."<<endl;
						continue;
					}
					}while(day_exit!=0);
				}
				else
				{
					cout<<"Invalid input for date!\n\nPlease Re-Enter your Reservation Date."<<endl;
					continue;
				}
				}while(date_exit!=0);
			}
			else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
			{
				do
				{
				
				cout<<"Choose the date you desire to check-in";
				cin>>date;
				month_exit=0;
				
				if(date > 0 && date <= 31)
				{
					do
					{
					cout<<"How many days would you like to check-in?\nReminder: You cannot book more than 30 days else you will need to renew your booking.";
					cin>>time_stay;
					date_exit=0;
					
					if(time_stay > 0 && time_stay <=30)
					{
						total_stay=date+time_stay;
						
						if(total_stay >= 32)
						{
							date_leave=total_stay-31;
							++month_leave;
						}
						else if(total_stay < 32)
						{
							date_leave=total_stay;
							cout<<endl;
						}						
						cout<<"you will need to check-out on "<<date_leave<<"/"<<month_leave<<"/"<<year;
						day_exit=0;
						habis=0;
					}
					else
					{
						cout<<"Invalid Number of day to check-in!\n\nPlease Re-Enter Your Number of Reservation Day."<<endl;
						continue;
					}
					}while(day_exit!=0);
				}
				else 
				{
					cout<<"Invalid input for date!\n\nPlease Re-Enter your Reservation Date."<<endl;
					continue;
				}
				}while(date_exit!=0);
			}
		else if(month == 4 || month == 6 || month == 9 || month == 11)
			{
				do
				{
				
				cout<<"Choose the date you desire to check-in";
				cin>>date;
				month_exit=0;
				
				if(date > 0 && date <= 30)
				{
					do
					{
					cout<<"How many days would you like to check-in?\nReminder: You cannot book more than 30 days else you will need to renew your booking.";
					cin>>time_stay;
					date_exit=0;
					
					if(time_stay > 0 && time_stay < 31)
					{
						total_stay=date+time_stay;
						
						if(total_stay > 30)
						{
							date_leave=total_stay-30;
							++month_leave;
						}
						else if(total_stay < 31)
						{
							date_leave=total_stay;
							cout<<endl;
						}						
						cout<<"you will need to check-out on "<<date_leave<<"/"<<month_leave<<"/"<<year;
						day_exit=0;
						habis=0;
					}
					else
					{
						cout<<"Invalid Number of day to check-in!\n\nPlease Re-Enter Your Number of Reservation Day."<<endl;
						continue;
					}
					}while(day_exit!=0);
				}
				else 
				{
					cout<<"Invalid input for date!\n\nPlease Re-Enter your Reservation Date."<<endl;
					continue;
				}
				}while(date_exit!=0);
			}
		}
		else
		{
			cout<<"Invalid input for Month!\n\nPlease Re-Enter your Reservation Month."<<endl;
			continue;
		}
		}while(month_exit!=0);
		
	}
	else
	{
		cout<<"Invalid input for year!\n\nPlease Re-Enter your Reservation Year.";
		{
			habis=1;
		}
	}
	}while(habis!=0);
	
	return 0;
}

float facilities()
{
	int loop=1;
	char amenities, exit='Y' , Facilities;
	float sumPrice=0.00;
	string Hi_Internet="High speed Internet Access", Laundry="Laundry Service", valet="Valet Service", Business_Cntr="Business Center";
	string Local_Trans="Local Area Transportation", Fax="Fax Service", Photo_copy="Photo Copying Service", Room="Room Service", Keluar="You have not chosen anything." ;
	
	do
	{
		cout<<"Welcome to the Hoteru Facilities and Amenities Services!\n\n";
		cout<<"Select the Character for facilities that you want to subscribe"<<endl;
		cout<<"Here we provide a few facilities and amenities to ease our customers need:"<<endl<<endl;
		cout<<"A - High speed Internet Access\t[RM10]\t\tB - Laundry Service\t[RM20]\nC - Valet Service\t\t[RM20]\t\tD - Business Center\t[RM20]\n";
		cout<<"E - Local Area Transportation\t[RM100]\t\tF - Fax Service\t\t[RM5]\nG - Photo Copying Service\t[RM5]\t\tH - Room Service\t[RM30]\nI - Exit Menu\n\n>>";
		cin>>amenities;
		
		if(amenities =='A' || amenities =='a' || amenities =='B' || amenities =='b' || amenities =='C' || amenities =='c' || amenities =='D' || amenities =='d' || amenities =='E' || amenities =='e' || amenities =='F' || amenities =='f' || amenities =='G' || amenities =='g' || amenities =='H' || amenities =='h' || amenities == 'I' || amenities == 'i')
		{
		switch(amenities)
		{
			case 'A': case 'a': sumPrice+=10;
								cout<<Hi_Internet<<endl;
								break;
			case 'B': case 'b': sumPrice+=20;
								cout<<Laundry<<endl;
								break;	
			case 'C': case 'c': sumPrice+=20;
								cout<<valet<<endl;
								break;
			case 'D': case 'd': sumPrice+=20;
								cout<<Business_Cntr<<endl;
								break;	
			case 'E': case 'e': sumPrice+=100;
								cout<<Local_Trans<<endl;
								break;
			case 'F': case 'f': sumPrice+=5;
								cout<<Fax<<endl;
								break;
			case 'G': case 'g': sumPrice+=5;
								cout<<Photo_copy<<endl;
								break;
			case 'H': case 'h': sumPrice+=30;
								cout<<Room<<endl;
								break;		
			case 'I': case 'i': sumPrice+=0;
								cout<<Keluar<<endl;
								break;		
		}
				
		cout<<"\nAre there any services that you want to add anymore?\nEnter [Y] - Yes or [N] - No:";
		cin>>exit;
		system("cls");
		
		}
		else
		{
			cout<<"\nInvalid Input!\n\nPlease Re-Enter the Correct Character for Input\n\n";
			system("pause");
			system("cls");
			continue;
		}
		
	}while(exit!='N' && exit!='n');

		cout<<"\n\nTotal Price For Utilities:"<<setprecision(2)<<sumPrice<<endl;

	return sumPrice;
}

float food()
{
	int exit=1,out=1,menuNum,breakfast,lunch,dinner,keluar=1,extra,add_onType;;
	float sumFood=0;
	char  cater_type;
	
	while(exit==1)
	{
		cout<<"Welcome to the Hotel Catering Plan Service\n\n";
		cout<<"Food Catering: \nA - Breakfast Dish\nB - Breakfast and Lunch Dish\nC - Breakfast, Lunch and Dinner Dish";
		cout<<"\nChoose the Food Catering Type by Entering [A] or [B] or [C]:";
		cin>>cater_type;
		system("pause");

		
		if(cater_type =='A' || cater_type=='B' || cater_type=='C')
		{
		switch(cater_type)
		{
			
			case 'A' : sumFood+=20;
						do
						{
							cout<<"\nYou have Chosen The Breakfast Dish!\nDo you want to add extra add-on in your breakfast dish?\nEnter [1] - Yes or [2] - No:";
							cin>>extra;	
							
							switch(extra)
							{
								case 1: do
										{
										cout<<"\nWhat kind of add-on type do you want to add?:\nEnter [1] - Drinks Types of Dessert or [2] - Food Types of Dessert:";
										cin>>add_onType;
										
										
										if(add_onType==1)
										{
											sumFood+=3;
											keluar=0;
										}
										else if(add_onType==2)
										{
											sumFood+=5;
											keluar=0;
										}
										else
										{
											cout<<"Invalid Input!\n\nPlease Re-Enter Your add-on Type.";
											system("pause");
											system("cls");
											keluar=1;
											continue;
										}
										}while(keluar!=0);
										out=0;
									
										break;
								case 2: out=0;
										
										break;
								default: out=1;
										cout<<"Invalid Input!\n\nPlease Re-Enter the correct value.\n\n";
										system("pause");
										system("cls");
										break;
							}
						}while(out!=0);
						break;
			
			case 'B' : sumFood+=60;
						do
						{
							cout<<"\nYou have Chosen The Breakfast Dish!\nDo you want to add extra add-on in your breakfast dish?\nEnter [1] - Yes or [2] - No:";
							cin>>extra;	
							
							switch(extra)
							{
								case 1: do
										{
										cout<<"\nWhat kind of add-on type do you want to add?:\nEnter [1] - Drinks Types of Dessert or [2] - Food Types of Dessert:";
										cin>>add_onType;
										
										
										if(add_onType==1)
										{
											sumFood+=5;
											keluar=0;
										}
										else if(add_onType==2)
										{
											sumFood+=10;
											keluar=0;
										}
										else
										{
											cout<<"Invalid Input!\n\nPlease Re-Enter Your add-on Type.";
											system("pause");
											system("cls");
											keluar=1;
											continue;
										}
										}while(keluar!=0);
										out=0;
										
										break;
								case 2: out=0;
									
										break;
								default: out=1;
										cout<<"Invalid Input!\n\nPlease Re-Enter the correct value.\n\n";
										system("pause");
										system("cls");
										break;
							}
						}while(out!=0);
						break;
						
			case 'C' : sumFood+=45;
						do
						{
							cout<<"\nYou have Chosen The Breakfast Dish!\nDo you want to add extra add-on in your breakfast dish?\nEnter [1] - Yes or [2] - No:";
							cin>>extra;	
							
							switch(extra)
							{
								case 1: do
										{
										cout<<"\nWhat kind of add-on type do you want to add?:\nEnter [1] - Drinks Types of Dessert or [2] - Food Types of Dessert:";
										cin>>add_onType;
										
										
										if(add_onType==1)
										{
											sumFood+=7;
											keluar=0;
										}
										else if(add_onType==2)
										{
											sumFood+=12;
											keluar=0;
										}
										else
										{
											cout<<"Invalid Input!\n\nPlease Re-Enter Your add-on Type.";
											system("pause");
											system("cls");
											keluar=1;
											continue;
										}
										}while(keluar!=0);
										out=0;
										
										break;
								case 2: out=0;
										break;
								default: out=1;
										cout<<"Invalid Input!\n\nPlease Re-Enter the correct value.\n\n";
										system("pause");
										system("cls");
										break;
							}
						}while(out!=0);
						break;
		}
		exit=0;
		}
		else
		{
			cout<<"\n\nInvalid Input!\n\nPlease Enter the Correct Character and in Uppercased Word.\n\n";
			system("pause");
			system("cls");
			continue;
		}
		
		cout<<"\nThe additional amount of hotel fee will be added in your bill is RM"<<sumFood<<endl;
		system("pause");
	}
	
	return sumFood;
}

int rate()
{
	int rate1,rate2,rate3,rate4,rate5, i, rateChoice,outside=1,KELUAR=1,exit1=1,exit2=1,exit3=1,exit4=1,exit5=1;
	
	while(outside!=0)
	{
		cout<<"Do you want to rate our hotel by your staying experience? [1] - Yes or [2] - No:";
		cin>>rateChoice;
		
		if(rateChoice==1)
		{
			do
			{
			cout<<"\n\nPlease Insert value scale from 1 until 5 to rate us!"<<endl<<endl;
			
			do
			{
			cout<<"\nRate our Overall Services:";
			cin>>rate1;
			
			if(rate1>0 && rate1<=5)
			{
			outside=0;
			exit1=0;
			}
			else
			{
				cout<<"\n\nInvalid Input!\n\nPlease Re-Enter the input correctly.";
				system("pause");
				system("cls");
			}
			}while(exit1!=0);
			
			do
			{
			cout<<"\nRate our Pantry Services:";
			cin>>rate2;
			
			if(rate2>0 && rate2<=5)
			{
			outside=0;
			exit2=0;
			}
			else
			{
				cout<<"\n\nInvalid Input!\n\nPlease Re-Enter the input correctly.";
				system("pause");
				system("cls");
			}
			}while(exit2!=0);
			
			do
			{
			cout<<"\nRate our Room Services:";
			cin>>rate3;
			
			if(rate3>0 && rate3<=5)
			{
			outside=0;
			exit3=0;
			}
			else
			{
				cout<<"\n\nInvalid Input!\n\nPlease Re-Enter the input correctly.";
				system("pause");
				system("cls");
			}
			}while(exit3!=0);
			
			do
			{
			cout<<"\nRate our Accessibility:";
			cin>>rate4;
			
			if(rate4>0 && rate4<=5)
			{
				outside=0;
				exit4=0;
			}
			else
			{
				cout<<"\n\nInvalid Input!\n\nPlease Re-Enter the input correctly.";
				system("pause");
				system("cls");
			}
			}while(exit4!=0);
			
			do
			{
			cout<<"\nRate our Worker Serving Services:";
			cin>>rate5;
			
			if(rate5>0 && rate5<=5)
			{
				outside=0;
				exit5=0;
			}
			else
			{
				cout<<"\n\nInvalid Input!\n\nPlease Re-Enter the input correctly.";
				system("pause");
				system("cls");
			}
			}while(exit5!=0);
			
			cout<<"\nSummary of Rating\n";
			cout<<"\nOverall Services:";
			for(i=0;i<rate1;i++)
			{
				cout<<"*";
			}
			
			cout<<"\nPantry Services:";
			for(i=0;i<rate2;i++)
			{
				cout<<"*";
			}
			
			cout<<"\nRoom Services:";
			for(i=0;i<rate3;i++)
			{
				cout<<"*";
			}
			
			cout<<"\nAccessibility:";
			for(i=0;i<rate4;i++)
			{
				cout<<"*";
			}
			
			cout<<"\nWorker Friendliness:";
			for(i=0;i<rate5;i++)
			{
				cout<<"*";
			}
			
			outside=0;
			KELUAR=0;
			}while(KELUAR!=0);
			
		}
		else if(rateChoice==2)
		{
			break;
		}
		else
		{
			cout<<"Invalid Input!\n\nPlease Re-Enter the correct input.";
			system("pause");
			system("cls");
			continue;
		}
	}	
			cout<<"\n\n\nThank you for Visiting Us!.\n\nPlease do come again!\n\n";
			system("pause");
}

void loading()
{
	int i,j;
	
	system("cls");
	
	frontcover();
	
	char a=177, b=219;
	cout<<"\n\n\n\t\t\t\tInitializing the BIOS....";
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t";
	
	for(i=0;i<=70;i++)
	{
		cout<<b;
		Sleep(70);
	}
	
	cout<<endl<<"\n\t\t\t\t\t\t\t\t\t\t\t";
	system("pause");
	system("cls");

	
}

int payment()
{
	float price, cash_give,exit=1;
	int  paymentType;
	
		
	do
	{
		cout<<"\n\n\t\t\t\t\t\tChoose how will you pay the fees:\n\t\t\t\t\t\t[1]-Cash\t[2]-Debit/Credit Card\n\n\t\t\t\t\t\t>>>>>>>>>>";
		cin>>paymentType;
		cout<<"\t\t\t\t\t\t";
		system("pause");
		system("cls");
		
		switch(paymentType)
		{
			case 1: cash(paymentType);
					exit=0;
					break;
			case 2: card(paymentType);
					exit=0;
					break;
			default: cout<<"\n\t\t\t\t\t\tInvalid Input!\n\nPlease Re-Enter the correct value.\n";
					cout<<"\t\t\t\t\t\t";
					system("pause");
					system("cls");
					continue;
					
		}
	}while(exit!=0);
}

float cash(float duit)
{
	int exit=1;
	float bayar,balance;
	
	do
	{
		
	cout<<("\t\t\t\t\t\t    __   ____  _____ __ __      ____   ____  __ __  ___ ___    ___  ____   ______ \n");
 	cout<<("\t\t\t\t\t\t   /  ] /    |/ ___/|  |  |    |    \\ /    ||  |  ||   |   |  /  _]|    \\ |      |\n");
 	cout<<("\t\t\t\t\t\t  /  / |  o  (   \\_ |  |  |    |  o  )  o  ||  |  || _   _ | /  [_ |  _  ||      |\n");
 	cout<<("\t\t\t\t\t\t /  /  |     |\\__  ||  _  |    |   _/|     ||  ~  ||  \\_/  ||    _]|  |  ||_|  |_|\n");
 	cout<<("\t\t\t\t\t\t/   \\_ |  _  |/  \\ ||  |  |    |  |  |  _  ||___, ||   |   ||   [_ |  |  |  |  |  \n");
 	cout<<("\t\t\t\t\t\t\\     ||  |  |\\    ||  |  |    |  |  |  |  ||     ||   |   ||     ||  |  |  |  |  \n");
 	cout<<("\t\t\t\t\t\t \\____||__|__| \\___||__|__|    |__|  |__|__||____/ |___|___||_____||__|__|  |__|  \n");
 	
	cout<<"\n\n\t\t\t\t\t\tTotal Price : RM"<<setprecision(2)<<fixed<<duit;
	cout<<"\n\t\t\t\t\t\tThe amount paid: RM";
	cin>>bayar>>setprecision(2)>>fixed;
	
	if(bayar<duit)
	{
		cout<<"\n\nInsufficient amount of money!";
		cout<<"\n\nPlease pay with the right amount of money.\n\n";
		system("pause");
		system("cls");
	}
	
	else if(bayar>=duit)
	{
		balance=bayar-duit;
		exit=0;
		cout<<"Balance : RM"<<balance<<endl;
		system("pause");
		continue;
	}
	}while(exit!=0);
}

float card(float duit)
{
	
	int bank,cukup,account;
	float bayar,balance=0;
	do
	{
		
	//FrontCover();
	
	cout<<("\t\t\t\t\t ___      ___  ____   ____  ______      ____   ____  __ __  ___ ___    ___  ____   ______ \n");
	cout<<("\t\t\t\t\t|   \\    /  _]|    \\ |    ||      |    |    \\ /    ||  |  ||   |   |  /  _]|    \\ |      |\n");
	cout<<("\t\t\t\t\t|    \\  /  [_ |  o  ) |  | |      |    |  o  )  o  ||  |  || _   _ | /  [_ |  _  ||      |\n");
	cout<<("\t\t\t\t\t|  D  ||    _]|     | |  | |_|  |_|    |   _/|     ||  ~  ||  \\_/  ||    _]|  |  ||_|  |_|\n");
	cout<<("\t\t\t\t\t|     ||   [_ |  O  | |  |   |  |      |  |  |  _  ||___, ||   |   ||   [_ |  |  |  |  | \n");
	cout<<("\t\t\t\t\t|     ||     ||     | |  |   |  |      |  |  |  |  ||     ||   |   ||     ||  |  |  |  | \n");
	cout<<("\t\t\t\t\t|_____||_____||_____||____|  |__|      |__|  |__|__||____/ |___|___||_____||__|__|  |__|  \n");
	
	cout<<("\n\n\t\t\t\t\tSelect the type of bank that you want to use : \n\n");
	cout<<("\t\t\t\t\t\t\t =============================================\n");
	cout<<("\t\t\t\t\t\t\t||   No.     ||     Type of Bank account     ||\n");
	cout<<("\t\t\t\t\t\t\t =============================================\n");
	cout<<("\t\t\t\t\t\t\t||    [1]    ||         BANK ISLAM           ||\n");
	cout<<("\t\t\t\t\t\t\t||    [2]    ||         MAYBANK              ||\n");
	cout<<("\t\t\t\t\t\t\t||    [3]    ||         BANK RAKYAT          ||\n");
	cout<<("\t\t\t\t\t\t\t||    [4]    ||         CIMB BANK            ||\n");
	cout<<("\t\t\t\t\t\t\t||    [5]    ||         HONG LEONG BANK      ||\n");
	cout<<("\t\t\t\t\t\t\t||    [6]    ||         AFFIN BANK           ||\n");
	cout<<("\t\t\t\t\t\t\t||___________||______________________________||\n\n");
	cout<<("\t\t\t\t\t\t\tEnter The Type of Bank Number: ");
	cin>>(bank);
	
	if(bank>=1 && bank<=6)
	{
		switch(bank)
		{
		cout<<("\t\t\t\t\t\t\tEnter Your Bank Account Number : ");
		cin>>account;
		
			case 1: cout<<"\t\t\t\t\t\t\tBank Islam Debit\n";
					cukup=0;
					break;
			case 2: cout<<"\t\t\t\t\t\t\tMaybank Debit\n";
					cukup=0;
					break;
			case 3: cout<<"\t\t\t\t\t\t\tBank Rakyat Debit\n";
					cukup=0;
					break;
			case 4: cout<<"\t\t\t\t\t\t\tCIMB Bank Debit\n";
					cukup=0;
					break;
			case 5: cout<<"\t\t\t\t\t\t\tHong Leong Bank Debit\n";
					cukup=0;
					break;
			case 6: cout<<"\t\t\t\t\t\t\tAffin Bank Debit\n";
					cukup=0;
					break;
			default: cout<<"\t\t\t\t\t\t\tInvalid Input!\n";
					break;
		}
		
		cout<<"\t\t\t\t\t\t\tTotal price = RM"<<setprecision(2)<<fixed<<duit;
		cout<<"\n\t\t\t\t\t\t\tBalance : RM"<<setprecision(2)<<fixed<< balance<<endl;
		bayar=duit;
		cout<<"\t\t\t\t\t\t\t";
		system("pause");	
	}
	
    else
    {
    	cout<<("\t\t\t\t\t\t\tInvalid type of bank account\n\t\t\t\t\t\t\t");
    	system("pause");
    	cukup=1;
    	system("cls");
	}
	
    }
    while(cukup);
}

float roomreservation(){

	int day,typeofroom;
	string room;
	float p1=100,p2=130,p3=136,p4=200,p5=180,sum=0,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0;

	cout<<"		Type Of Rooms Available : "<<endl;
	cout<<"		1 = Standard Single	: RM100"<<endl;
	cout<<"		2 = Standard Double	: Rm130"<<endl;
	cout<<"		3 = Deluxe Double	: RM136"<<endl;
	cout<<"		4 = Superior		: RM200"<<endl;
	cout<<"		5 = Suite Family	: RM180"<<endl;

	cout<<"		Enter type of room (enter 0 to stop ) :";
	cin>>typeofroom;
	cout<<endl;

	while (typeofroom!=0){

		if (typeofroom==1) {
			cout<<"		Standard Single	: RM100"<<endl;
			cout<<"		Area of room : 69 sqft"<<endl;
			cout<<"		Single Bed "<<endl;
			cout<<"		Free Wifi"<<endl;
			cout<<"		Aircond"<<endl;
			cout<<"		Television"<<endl<<endl;

			cout<<"		Would you choose this room? "<<endl;
			cout<<"		Press Y for YES, N for NO :";
			cin>>room;

			while(room !="Z" || room!="z" ){
				if(room=="Y" || room=="y"){
					r1++;
					break;
				}

				else if(room=="N" || room=="n"){
					break;
				}

				else{
					cout<<"		Invalid Code Entered, please enter it again!"<<endl;
					cout<<"		Press Y for YES, N for NO :";
					cin>>room;
				}
			}
			if(room=="Y" || room=="y"){
			}
			else{
				cout<<"\n		Please enter another room code :";
				cin>>typeofroom;
				cout<<endl;
			}
			
			cout<<"\n		Want to book some more room?";
			cout<<"\n		Press Y for YES, N for NO :";
			cin>>room;
			
			if(room=="Y" || room=="y"){
				cout<<"		Enter type of room (enter 0 to stop ) :";
				cin>>typeofroom;
				cout<<endl;	
			}
			else{
				break;	
			}
		}

		else if (typeofroom==2){
			cout<<"		Standard Double	: Rm130"<<endl;
			cout<<"		Area of room : 98 sqft"<<endl;
			cout<<"		Queen Sized Bed "<<endl;
			cout<<"		Free Wifi"<<endl;
			cout<<"		Aircond"<<endl;
			cout<<"		Television"<<endl<<endl;

			cout<<"		Would you choose this room? "<<endl;
			cout<<"		Press Y for YES, N for NO :";
			cin>>room;

			while(room !="Z" || room!="z" ){
				if(room=="Y" || room=="y"){
					r2++;
					break;
				}

				else if(room=="N" || room=="n"){
					break;
				}

				else{
					cout<<"		Invalid Code Entered, please enter it again!"<<endl;
					cout<<"		Press Y for YES, N for NO :";
					cin>>room;
				}
			}			
			if(room=="Y" || room=="y"){
			}
			else{
				cout<<"\n		Please enter another room code :";
				cin>>typeofroom;
				cout<<endl;
			}
			
			cout<<"\n		Want to book some more room?";
			cout<<"\n		Press Y for YES, N for NO :";
			cin>>room;
			
			if(room=="Y" || room=="y"){
				cout<<"		Enter type of room (enter 0 to stop ) :";
				cin>>typeofroom;
				cout<<endl;	
			}
			else{
				break;	
			}
		}

		else if (typeofroom==3){
			cout<<"		Deluxe Double	: RM150"<<endl;
			cout<<"		Area of room : 195 sqft"<<endl;
			cout<<"		Queen Sized Bed"<<endl;
			cout<<"		Free Wifi"<<endl;
			cout<<"		Aircond"<<endl;
			cout<<"		Television"<<endl<<endl;

			cout<<"		Would you choose this room? "<<endl;
			cout<<"		Press Y for YES, N for NO : ";
			cin>>room;

			while(room !="Z" || room!="z" ){
				if(room=="Y" || room=="y"){
					r3++;
					break;
				}

				else if(room=="N" || room=="n"){
					break;
				}

				else{
					cout<<"		Invalid Code Entered, please enter it again!"<<endl;
					cout<<"		Press Y for YES, N for NO :";
					cin>>room;
				}
			}
			if(room=="Y" || room=="y"){
			}
			else{
				cout<<"\n		Please enter another room code :";
				cin>>typeofroom;
				cout<<endl;
			}
			
			cout<<"\n		Want to book some more room?";
			cout<<"\n		Press Y for YES, N for NO :";
			cin>>room;
			
			if(room=="Y" || room=="y"){
				cout<<"		Enter type of room (enter 0 to stop ) :";
				cin>>typeofroom;
				cout<<endl;	
			}
			else{
				break;	
			}
		}

		else if (typeofroom==4){
			cout<<"		Superior	: RM200"<<endl;
			cout<<"		Area of room : 312 sqft"<<endl;
			cout<<"		Queen Sized Bed"<<endl;
			cout<<"		Single Bed"<<endl;
			cout<<"		Free Wifi"<<endl;
			cout<<"		Aircond"<<endl;
			cout<<"		Television"<<endl<<endl;

			cout<<"		Would you choose this room? "<<endl;
			cout<<"		Press Y for YES, N for NO :";
			cin>>room;

			while(room !="Z" || room!="z" ){
				if(room=="Y" || room=="y"){
					r4++;
					break;
				}

				else if(room=="N" || room=="n"){
					break;
				}

				else{
					cout<<"		Invalid Code Entered, please enter it again!"<<endl;
					cout<<"		Press Y for YES, N for NO :";
					cin>>room;
				}
			}
			if(room=="Y" || room=="y"){
			}
			else{
				cout<<"\n		Please enter another room code :";
				cin>>typeofroom;
				cout<<endl;
			}
			
			cout<<"\n		Want to book some more room?";
			cout<<"\n		Press Y for YES, N for NO :";
			cin>>room;
			
			if(room=="Y" || room=="y"){
				cout<<"		Enter type of room (enter 0 to stop ) :";
				cin>>typeofroom;
				cout<<endl;	
			}
			else{
				break;	
			}
		}

		else if (typeofroom==5){
			cout<<"		Superior	: RM180"<<endl;
			cout<<"		Area of room : 231 sqft"<<endl;
			cout<<"		Queen Sized Bed"<<endl;
			cout<<"		Single Bed"<<endl;
			cout<<"		Free Wifi"<<endl;
			cout<<"		Aircond"<<endl;
			cout<<"		Television"<<endl<<endl;

			cout<<"		Would you choose this room? "<<endl;
			cout<<"		Press Y for YES, N for NO :";
			cin>>room;

			while(room !="Z" || room!="z" ){
				if(room=="Y" || room=="y"){
					r5++;
					break;
				}

				else if(room=="N" || room=="n"){
					break;
				}

				else{
					cout<<"		Invalid Code Entered, please enter it again!"<<endl;
					cout<<"		Press Y for YES, N for NO :";
					cin>>room;
				}
			
			}
			if(room=="Y" || room=="y"){
			}
			else{
				cout<<"\n		Please enter another room code :";
				cin>>typeofroom;
				cout<<endl;
			}
			
			cout<<"\n		Want to book some more room?";
			cout<<"\n		Press Y for YES, N for NO :";
			cin>>room;
			
			if(room=="Y" || room=="y"){
				cout<<"		Enter type of room (enter 0 to stop ) :";
				cin>>typeofroom;
				cout<<endl;	
			}
			else{
				break;	
			}
		}

		else {
		cout<<"		Invalid Code Entered, please enter it again :";
		cin>>typeofroom;
		}
		
		
	}
	sum=(p1*r1)+(p2*r2)+(p3*r3)+(p4*r4)+(p5*r5);
	cout<<"\n		Price : RM"<<sum<<endl;
	
	return sum;

}


void receipt(float HargaFood,float HargaRoom,float HargaFac){
	
		cout<<"\n		Receipt"<<endl;
		cout<<"\n	Facilities			: RM"<<HargaFac;
		cout<<"\n	Food				: RM"<<HargaFood;
		cout<<"\n	Room Reservation	: RM"<<HargaRoom;
	
}

