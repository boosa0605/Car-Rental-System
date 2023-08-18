#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>

using namespace std;
class customer
{
	private:
	public:
	string customername;
    string carmodel;
    string carnumber;
    char data;

};
class rent : public customer
{
	public:
	int days=0,rentalfee=0;
	void data()
	{
		int login();
	login();
	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout << "\tPlease Enter your Name: ";
    cin >> customername;
    cout<<endl;
    do
    {
    	cout <<"\n________________________________________"<<endl;
        cout <<"\tPlease Select a Car"<<endl;
        cout<<"\tEnter 'A' for Maruthi Suzuki 2011."<<endl;
        cout<<"\ttEnter 'B' for Hyundai 2015."<<endl;
        cout<<"\tEnter 'C' for Tata 2017."<<endl;
        cout<<"\n-----------------------------------------"<<endl;
        cout<<endl;
        cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
        cout<<"\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A")
 {
 	system("CLS");

		cout<<"You have choosed Maruthi Suzuki model 2011"<<endl;
		 ifstream inA("A.txt");
         char str[200];
         while(inA) {
         inA.getline(str, 200);
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");

		cout<<"You have choosed Hyundai model 2015"<<endl;
		 ifstream inB("B.txt");
         char str[200];
         while(inB) {
         inB.getline(str, 200);
         if(inB) cout << str << endl;

     }
     sleep(2);
 }
 if(carmodel=="C")
 {
 	system("CLS");
	     cout<<"You have choosed Tata model 2017"<<endl;
		 ifstream inC("C.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
     }
     sleep(2);
}
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )

      cout<<"Invaild Car Model. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;

    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*456;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*360;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*575;
    }
void showrent()
    {
    cout << "   ___________________________________________________________"<<endl;
    cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout << "	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout << "	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "	| Caution Money :"<<"----------------|"<<setw(10)<<"500"<<" |"<<endl;
    cout << "	| Advanced :"<<"---------------------|"<<setw(10)<<"1000"<<" |"<<endl;
    cout << "	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee+500+1000<<" |"<<endl;
    cout << "	 ________________________________________________________"<<endl;
    cout << "	 # This is a computer generated invoce and it does not"<<endl;
    cout << "	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout << "	You are advised to pay up the amount before due date."<<endl;
    cout << "	Otherwise penelty fee will be applied"<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout << "   *****************************************************************"<<endl;
    cout << "   your caution money will be refunded if vehiccle returned safely."<<endl;
    cout << "   *****************************************************************"<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("thanks.txt");


  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
class welcome{;
	public:
	int welcum()
	{
 ifstream in("welcome.txt");

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
  sleep(1);
  system ("CLS");
  return 0;
}

};
int main()
{
welcome obj1;
obj1.welcum();
rent obj2;

obj2.data();
obj2.calculate();
obj2.showrent();

return 0;
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
   cout<<"\t------------------------------";
   cout<<"\n\tLOGIN \n";
   cout<<"\t------------------------------\n\n";
   cout << "\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "manish"){
      cout << "\n\n\n\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\tAccess Aborted...\n\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   return 0;
}
