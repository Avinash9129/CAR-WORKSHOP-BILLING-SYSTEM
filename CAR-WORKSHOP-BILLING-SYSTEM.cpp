#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include <stdlib.h>
using namespace std;


class vehicle
{
	public:
	char name_c[34],cno,add_c[20],c,ph[10],idno[5];
	
    int chrep,chpp,choice,choice1,chh,tcost=0;
     	 
	string s1;
	  
	    vehicle(){
	      char 	  name_c[]="xyz";
	      char	  add_c[]="new customer";
	      char	  ph[]="xxxxxxxxxx";
	      char	  idno[]="00000";
	    	  
	    	  
		}

  void customer_d()	
    {
    cout<<"\n\t\t\t\t Enter customer's name: \t ";
	cin>>name_c;
	cout<<"\n\t\t\t\t Enter address:       \t";
	cin>>add_c;
	cout<<"\n\t\t\t\t Phone number:       \t";
	cin>>ph;
	cout<<"\n\t\t\t\t Car number :       \t";
	cin>>idno;   	}
	
		void show()
	{
		cout<<"\n\t\t\tcustomer's name:\t ";
	cout<<name_c;
	cout<<"\n\t\t\taddress:\t ";
	cout<<add_c;
	cout<<"\n\t\t\tPhone number:\t ";
	cout<<ph;
	cout<<"\n\t\t\tCar number: ";
	cout<<idno<<endl;
		}
	};
	
	
	class service:public vehicle
	{
		public:
			void services();
			void chosen(int ch);
			void washing();
			void accident();
			void denting();
			void regular();
			void part();
			void billing();
	};
	 
	void service:: services()
	{      flagd:
	   system("cls");
			cout<<"\n\n\n\t\t\t\t___________________________________\n\n";
		 	cout<<"\t\t\t\t\t    SERVICE PAGE  \n";
		 	cout<<"\t\t\t\t___________________________________\n";
			cout<<"\n\n\n\t\t\t\t    WHAT TYPE OF SERVICE YOU WANT "<<endl<<endl;
			cout<<"\n\t\t\t\t      1.Washing\n";
			cout<<"\n\t\t\t\t      2.Accidental Damage serivces\n ";
			cout<<"\n\t\t\t\t      3.Denting painting\n ";
			cout<<"\n\t\t\t\t      4.Regular service\n";
			cout<<"\n\t\t\t\t      5.Part replacement\n";
		    cout<<"\n\t\t\t\t      6. For bill\n";
			cout<<"\n\n\n\t\t ENTER YOUR CHOICE: \t";

		cin>>choice;
		switch(choice)
{     
     case 1: washing();
             break;
     case 2: accident();
	         break;
	 case 3: denting ();
	         break;
     case 4: regular();
             break;	
     case 5: part();
             break;
     case 6:{
     	       billing();
		break;
	 }
    default: {  cout<<"\n\n\t\t\tWRONG INPUT \t Please try again\n\t\t";
	            system("pause");
	            goto flagd;
	            break;       } }
}
	
	void service::accident()
{   flagw:
      system("cls");
	   cout<<"\n\n\t\t\t\t   _____________________________\n\n";
 	 cout<<"\t\t\t\t\t   ACCIDENTAL PAGE  \n";
 	 cout<<"\t\t\t\t   _____________________________\n";
	
		cout<<"\n\n\t\t\tOOPs! Your vehicle got a accidental damage \n\n";
	cout<<"\n\t\t\tOnly these things should be recovered : \n\n";
	cout<<"\n\t\t\t          TYPE\t\t\t\t\t\t COST";
	cout<<"\n\t\t\t __________________________________________________________________\n";
	cout<<"\n\t\t\t      1.liquid leakage                                   $500\n";
	cout<<"\n\t\t\t      2.Electrical fuse                                  $1000\n";
	cout<<"\n\t\t\t      3.Damaged headlight                                $1200\n";
	cout<<"\n\t\t\t      4.Break fail                                       $2000\n";
	cout<<"\n\n\t\t CHARGES will be taken if your vehicle is out of insurancy policy: \n";

	cout<<"\n\n\t\tENTER YOUR CHOICE :\t";
	
	cin>>choice1;
switch(choice1)
{     
     case 1: s1+="\n\t\t\t      liquid leakage                                   $500";
             tcost+=500;
             break;
     case 2: s1+="\n\t\t\t      Electrical fuse                                  $1000";
             tcost+=1000;
	         break;
	 case 3: s1+="\n\t\t\t      Damaged headlight                                $1200";
	          tcost+=1200;
	         break;
     case 4: s1+="n\t\t\t      Break fail                                       $2000";
               tcost+=2000;
               break;	
             default: {
			
			 cout<<"\n\n\t\t\t\tWRONG INPUT\t Please try again!!!!!!!\n\n\t\t\t";
			      system("pause");
			        goto flagw;
                     break;
                     
                     
}  
}
       flagc:
    	cout<<"\n\t\t\t __________________________________________________________________\n";
        cout<<"\n\t\t\t Press 1 to choose once again..........";
         cout<<"\n\t\t\t Press 2 to return to main menu........";
         cout<<"\n\t\t\t Press 0 to exit!!!";
         cin>>chh;
         if(chh==1)
            {  accident(); 	  	}
		else if(chh==2) {    services();  }
		 else { cout<<"wrong input";
		        goto flagc;  
		}
              
}
	
	void service::washing()
{
	do{
  system("cls");

		    cout<<"\n\n\t\t\t\t\t   _____________________________\n\n";
 	 cout<<"\t\t\t\t\t\t   WASHING  PAGE  \n";
 	 cout<<"\t\t\t\t\t   _____________________________\n";
	cout<<"\n\t\t\t\t Welcome:Your car is going to wash soon \n";
	cout<<"\n\t\t\t\t Which type of washing do you want\n";
	cout<<"\n\n\t\t\t          TYPE\t\t\t\t\t\t COST";
	cout<<"\n\t\t\t __________________________________________________________________\n";
	cout<<"\n\t\t\t      1.Standard wash                                   $500";
	cout<<"\n\t\t\t      2.Golden wash                                     $1000";
	cout<<"\n\t\t\t      3.Diamond wash                                    $2000";
	
	cout<<"\n\n\n\t\t\t ENTER THE CHOICE \t";
	cin>>choice1;
	switch (choice1)
	{
	case 1:
				{   s1+="\n\t\t\t      Standard wash                                   $500";
		              tcost+=500;
			     break;  }
    case 2:{   s1+="\n\t\t\t      Golden wash                                     $1000";
			     	tcost+=1000;
				break; }
	case 3:{  s1+="\n\t\t\t      Diamond wash                                    $2000";
			  tcost+=2000;
			break;
		    }
		     default:{
			 cout<<"\n\n\tWRONG INPUT\n\n\t Please try again";
			 system("pause");
		           break;  }
	}
}while(choice1>3);

  flagc:
     	cout<<"\n\t\t\t __________________________________________________________________\n";
        cout<<"\n\t\t\t Press 1 to choose once again..........";
         cout<<"\n\t\t\t Press 2 to return to main menu........";
         cout<<"\n\t\t\t Press 0 to exit!!!";
         cin>>chh;
         if(chh==1)
            {  washing(); 	  	}
		else if(chh==2) {    services();  }
		 else { cout<<"wrong input";
		        goto flagc;  
		}
		              
}

void service::denting()
{     flagp:
        system("cls");
		    cout<<"\n\n\t\t\t\t\t   _____________________________\n\n";
 	 cout<<"\t\t\t\t\t\t   PAINTING  PAGE  \n";
 	 cout<<"\t\t\t\t\t   _____________________________\n";   
	cout<<"\n\n\t\t\tWelcome:Your car is going to be painted soon \n";

	cout<<"\n\n\t\t\t          TYPE\t\t\t\t\t\t COST";
	cout<<"\n\t\t\t __________________________________________________________________\n";
	cout<<"\n\t\t\t       1.Same color                                      $1000\n";
	cout<<"\n\t\t\t       2.Red                                             $1000\n";
	cout<<"\n\t\t\t       3.Black                                           $1000\n";
    cout<<"\n\n\n\t\t\t ENTER THE CHOICE FOR PAINTING \t";
	cin>>chpp;
	if(chpp==1)
	{     s1+="\n\t\t\t       Same color                                      $1000";
	tcost+=1000;}
	else if(chpp==2)
	{   s1+="\n\t\t\t       Red                                             $1000";
	    tcost+=1000;}
	    
	    else if(chpp==3)
	    {
	    	 s1+="\n\t\t\t       Black                                           $1000";
	    tcost+=1000;
	    	
		}
	
	  else { cout<<"\n\n\t\t WRONG INPUT  PLESE TRY AGAIN !!!";
	          goto flagp;	  }
	
	
	  flagc:
	cout<<"\n\t\t\t __________________________________________________________________\n";
        cout<<"\n\t\t\t Press 1 to choose once again..........";
         cout<<"\n\t\t\t Press 2 to return to main menu........";
         cout<<"\n\t\t\t Press 0 to exit!!!";
         cin>>chh;
         if(chh==1)
            {  denting(); 	  	}
		else if(chh==2) {    services();  }
		 else { cout<<"wrong input";
		        goto flagc;  
		}
    }
	
void service::part()
{   flagpar:
system("cls");
		    cout<<"\n\t\t\t\t\t   ___________________________________\n\n";
 	 cout<<"\t\t\t\t\t\t   PART REPLACEMET  PAGE  \n";
 	 cout<<"\t\t\t\t\t   ___________________________________\n";   
		cout<<"\n\t\t\t  Which part you want to replace: ";

	cout<<"\n\n\t\t\t          TYPE\t\t\t\t\t\t COST";
	cout<<"\n\t\t\t __________________________________________________________________\n";

	cout<<"\n\t\t\t       1.Window glass                                    $1000"<<endl;
	cout<<"\n\t\t\t       2.Door                                            $5000"<<endl;
	cout<<"\n\t\t\t       3.Stearing                                        $2000"<<endl;
    cout<<"\n\t\t\t       4.Mirrors                                         $2500"<<endl;
    cout<<"\n\t\t\t       5.Wheel                                           $4000"<<endl;
   cout<<"\n\n\n\t\t ENTER YOUR CHOICE: \t";
    cin>>chrep;
    if(chrep==1)
	{s1+="\n\t\t\t       Window glass                                    $1000";tcost+=1000;}
	else if(chrep==2)
	{ s1+="\n\t\t\t       Door                                            $5000";tcost+=5000;}
		else if(chrep==3)
	{ s1+="\n\t\t\t       Stearing                                        $2000";tcost+=2000;}
		else if(chrep==4)
	{ s1+="\n\t\t\t       Mirrors                                         $2500";tcost+=2500;}
		else if(chrep==5)
	{ s1+="\n\t\t\t       Wheel                                           $4000";tcost+=4000;}

	  else { cout<<"\n\n\t\t WRONG INPUT  PLESE TRY AGAIN !!!";
	       system("pause");
	          goto flagpar;  }
	  	  flagc:
              	cout<<"\n\t\t\t __________________________________________________________________\n";
        cout<<"\n\t\t\t Press 1 to choose once again..........";
         cout<<"\n\t\t\t Press 2 to return to main menu........";
         cout<<"\n\t\t\t Press 0 to exit!!!";
         cin>>chh;
         if(chh==1)
            {  part(); 	  	}
		else if(chh==2) {    services();  }
		 else { cout<<"wrong input";
		        goto flagc;  
		}	  }

void service::regular()
{
  system("cls");
		    cout<<"\n\t\t\t\t\t   ___________________________________\n\n";
 	 cout<<"\t\t\t\t\t\t  REGULAR SERVICE   \n";
 	 cout<<"\t\t\t\t\t   ___________________________________\n";  
	cout<<"\n\n\n\t\t\t We will provide you these services in this PACKAGE:";
	cout<<"\n\n\t\t\t 1.Car washing\n\t\t\t 2.denting painting \n\t\t\t 3.polishing and oiling greesing ";
	cout<<"\n\n\n\t\t\tPress any key to opt this: ";
	cin>>c;
	   s1+="\n\t\t\t    Reg service                                        $5000";

     tcost+=5000;
     
      flagc:
    	cout<<"\n\t\t\t __________________________________________________________________\n";
        cout<<"\n\t\t\t Press 1 to choose once again..........";
         cout<<"\n\t\t\t Press 2 to return to main menu........";
         cout<<"\n\t\t\t Press 0 to exit!!!";
         cin>>chh;
         if(chh==1)
            {  regular(); 	  	}
		else if(chh==2) {    services();  }
		 else { cout<<"wrong input";
		        goto flagc;  
		}
}
void service::billing()
{  system("cls");
   cout<<"\n\t\t\t\t\t\t       YOUR BILL  \n";
   cout<<"\t\t\t\t\t   ___________________________________\n";
 	    show();
 		cout<<"\n\t\t\t          SERVICES\t\t\t\t\t COST";
   cout<<"\n\t\t\t _____________________________________________________________________\n";
	cout<<s1;
	 	cout<<"\n\t\t\t ______________________________________________________________________\n";
	  cout<<"\n\t\t\t\t\t TOTAL COST:\t\t\t$"<<tcost;
	  cout<<"\n\n\t\tThankyou for visiting: ";  
	cout<<"\n\t\tHoping you are satisfied and happy with the service";	
}

	

 int main()
 {    cout<<"\n\n\n\t\t\t\t   _________________________________________\n\n";
 	 cout<<"\t\t\t\t\t    WELCOME TO APNI WORKSHOP         \n";
 	 cout<<"\t\t\t\t   _________________________________________\n";
 	 
	   service s1;
 	s1.customer_d();
 	   s1.services();

 	 return 0;
 	 }
