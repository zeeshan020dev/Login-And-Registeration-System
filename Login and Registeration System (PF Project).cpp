//                               LOGIN & REGISTERATION SYSTEM
#include<iostream> //preprocessor directive used to perform input & output operation
#include<conio.h> // // // // used for console input & output operation like getch() & screen clearing
using namespace std;
int a=0;// global variable used as a index to maintain number of registered accounts.
struct Register // structure to hold information also known as records.
{
	string id;
	string name,email,password;
}R[25];//R is the name of array and 25 is the size which indicates that it can hold 25 elements.
void registerAccount()//function to register an account.
{
	system("cls");//for clearing screen when flow of control enters in this function
	int ascii=178;
	char ch=ascii,d;
	cout<<"\n ";
	// used for attractive interface (displaying decorative borders)
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	cout<<"LOGIN & REGISTERATION SYSYTEM";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	// getting user information for registeration 
	cout<<"\n\n\n "<<ch<<ch<<" ENTER USER ID -> ";
	cin>>R[a].id;
	cout<<"\n\n\n "<<ch<<ch<<" ENTER USER NAME -> ";
	cin>>R[a].name;
	cout<<"\n\n\n "<<ch<<ch<<" ENTER USER EMAIL -> ";
	cin>>R[a].email;
	cout<<"\n\n\n "<<ch<<ch<<" ENTER YOUR PASSWORD -> ";
	// entering password dynamically.
	do
	{
		d=getch();
		if( isdigit(d) || isalpha(d) || ispunct(d) )
		{
			R[a].password+=d;
			cout<<"*";
		}
	}while(isdigit(d) || isalpha(d) || ispunct(d));
	a++;
	cout<<"\n\n\n "<<ch<<ch<<" ACCOUNT REGISTERED SUCCESSFULLY "<<ch<<ch;
}
void loginAccount()//function to login an account.
{
	system("cls");
	int ascii=178;
	char ch=ascii,d;
	cout<<"\n ";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	cout<<"LOGIN & REGISTERATION SYSYTEM";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	if(a==0)//checking if there are registered accounts.
	{
		cout<<"\n\n\n "<<ch<<ch<<" USER NOT EXISTS "<<ch<<ch;
	}
	else
	{
		int found=0;// for checking if the user data is correct.
		string t_email,t_password;//getting login information.
		cout<<"\n\n\n "<<ch<<ch<<" ENTER USER EMAIL -> ";
		cin>>t_email;
		cout<<"\n\n\n "<<ch<<ch<<" ENTER YOUR PASSWORD -> ";
		do
		{
			d=getch();
			if( isdigit(d) || isalpha(d) || ispunct(d) )
			{
				t_password+=d;
				cout<<"*";
			}
		}while(isdigit(d) || isalpha(d) || ispunct(d));
		//verifying login information:
		for(int k=0;k<a;k++)
		{
			if(t_email==R[k].email && t_password==R[k].password)
			{
				cout<<"\n\n\n "<<ch<<ch<<" USER ID -> "<<R[k].id;
				cout<<"\n\n\n "<<ch<<ch<<" USER NAME -> "<<R[k].name;
				cout<<"\n\n\n "<<ch<<ch<<" USER EMAIL -> "<<R[k].email;
				cout<<"\n\n\n "<<ch<<ch<<" USER PASSWORD -> "<<R[k].password;
				found++;
				break;
			}
		}
		if(found==0)
		{
			cout<<"\n\n\n "<<ch<<ch<<" INVALID USER DATA "<<ch<<ch;
		}
	}
}
void forgotEmail()//function to recover account using password
{
	system("cls");
	int ascii=178;
	char ch=ascii,d;
	cout<<"\n ";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	cout<<"LOGIN & REGISTERATION SYSYTEM";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	if(a==0)//checking if there are any registered account.
	{
		cout<<"\n\n\n "<<ch<<ch<<" USER NOT EXISTS "<<ch<<ch;
	}
	else
	{
		int found=0;
		string t_email,t_password;
		cout<<"\n\n\n "<<ch<<ch<<" ENTER YOUR PASSWORD -> ";
		do
		{
			d=getch();
			if( isdigit(d) || isalpha(d) || ispunct(d) )
			{
				t_password+=d;
				cout<<"*";
			}
		}while(isdigit(d) || isalpha(d) || ispunct(d));
		//searching for account with provided password.
		for(int k=0;k<a;k++)
		{
			if(t_password==R[k].password)
			{
				cout<<"\n\n\n "<<ch<<ch<<" USER ID -> "<<R[k].id;
				cout<<"\n\n\n "<<ch<<ch<<" USER NAME -> "<<R[k].name;
				cout<<"\n\n\n "<<ch<<ch<<" USER EMAIL -> "<<R[k].email;
				cout<<"\n\n\n "<<ch<<ch<<" USER PASSWORD -> "<<R[k].password;
				found++;
				break;
			}
		}
		if(found==0)
		{
			cout<<"\n\n\n "<<ch<<ch<<" INVALID USER DATA "<<ch<<ch;
		}
	}
}
void forgotPassword()//function to recover account using email
{
	system("cls");
	int ascii=178;
	char ch=ascii,d;
	cout<<"\n ";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	cout<<"LOGIN & REGISTERATION SYSYTEM";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	if(a==0)
	{
		cout<<"\n\n\n "<<ch<<ch<<" USER NOT EXISTS "<<ch<<ch;
	}
	else
	{
		int found=0;
		string t_email,t_password;
		//getting email to recover account.
		cout<<"\n\n\n "<<ch<<ch<<" ENTER USER EMAIL -> ";
		cin>>t_email;
		//search for account with provided email.		
		for(int k=0;k<a;k++)
		{
			if(t_email==R[k].email)
			{
				cout<<"\n\n\n "<<ch<<ch<<" USER ID -> "<<R[k].id;
				cout<<"\n\n\n "<<ch<<ch<<" USER NAME -> "<<R[k].name;
				cout<<"\n\n\n "<<ch<<ch<<" USER EMAIL -> "<<R[k].email;
				cout<<"\n\n\n "<<ch<<ch<<" USER PASSWORD -> "<<R[k].password;
				found++;
				break;
			}
		}
		if(found==0)
		{
			cout<<"\n\n\n "<<ch<<ch<<" INVALID USER DATA "<<ch<<ch;
		}
	}
}
//main function to manage the flow of program.
main()
{
	p://Label for goto statement at the end of main function.
	   system("cls");// used for clearing the console screen & moves the cursor to the top left corner. 
	int ascii=178,choice;
	char ch=ascii;
	cout<<"\n";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	cout<<"LOGIN & REGISTERATION SYSYTEM";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	cout<<"\n\n "<<ch<<ch<<"1.   REGISTER ACCOUNT";
	cout<<"\n\n "<<ch<<ch<<"2.   LOGIN ACCOUNT";
	cout<<"\n\n "<<ch<<ch<<"3.   FORGOT EMAIL";
	cout<<"\n\n "<<ch<<ch<<"4.   FORGOT PASSWORD";
	cout<<"\n\n "<<ch<<ch<<"5.   EXIT";
	cout<<"\n\n ";
	for(int i=1;i<=45;i++)
	{
		cout<<ch;
	}
	cout<<"\n\n\n"<<ch<<ch<<" ENTER YOUR CHOICE -> ";
	cin>>choice;
	switch(choice)//performing function calling in switch block based upon user choice.
	{
		case 1:
			registerAccount();
		break;
		case 2:
			loginAccount();
		break;
		case 3:
			forgotEmail();
		break;
		case 4:
			forgotPassword();
		break;
		case 5:
			exit(0);//exit() is a pre-defined function used to terminate the program & 0 indicates successful termination.
		break;
		default:
		cout<<"\n\n"<<ch<<ch<<" INVALID CHOICE "<<ch<<ch;
	}
	getch();// used to display stored data
	goto p;//its a jump statement that directs the flow of execution at the label which is labelled as p:
}