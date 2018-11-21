//Programmer Charalambos Philassides 
//What this program do ?
//Program Assignment Description
//Let’s assume that you have some extra cash and you are interested to invest it. After
//making your initial inquiries, you decide to invest your money in a savings account with
//a fixed rate. However, you would like to know how many years it will take your initial
//investment to reach a target amount. For example, you would like to know how many
//years it would take 100 Euro to grow to 300 Euro at a yearly interest rate of 7.5%.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 
 int initial=0, target=0, w=0, i=0, c=0, e, f;
 float rate;
 bool pass;
 char contin;
 
 cout <<"Welcome to Charalambos Philassides Interest Calculator!"<<endl;
 cout <<"";
 cout <<"";
 

   do
    {
      
      do
       {
      
        do
          {
               
   cout <<"Enter initial amount: ";
   cin >> initial;
   
   if ( initial < 0 )
   {
   pass=true;
   cout <<"The initial amount must be positive" << endl;
   }
   else
   pass=false;
   
   }
   while(pass);
    
    do 
        {
   cout <<"Enter target amount: ";
   cin >> target;
   
   if ( target < 0 ) 
   {
   pass=true;
   cout << "Only Positive Numbers" << endl;
   i++;
   }
  else
   {
   pass=false;
   c++;
   }
   }
   while(pass);
 
  if (initial >= target)
    {
    pass=true;
    cout <<"Target amount must be greater than the initial amount!!" <<endl;
    i++;
    }
  else
   pass=false;
   }
  while(pass);
 
  cout <<"Enter rate amount: ";
  cin >> rate;
 
 
   if ( rate < 0 ) 
    cout<<"The rate must be positive number!"<<endl;
    else
	{
     rate=(rate/100);
     cout<<"YEAR   START AMOUNT   INTEREST  END AMOUNT"<<endl;
     cout<<"====   ============   ========  =========="<<endl;
        
        do
        {
		{
		
         e=initial*rate;   
         f=e+initial;  
         initial=f;
         w++;   
             
         cout<<w<<"         "<<initial-e<<"             "<<e<<"          "<<f<<endl;
         
		}
	   }
	 while ( initial <= target );
     }
     
     cout <<" You will reach your target amount in " << w << " years" << endl;
 
     
    do 
      {
      
      cout<<"Continue for another set of value? ";
      cin>>contin;
      
     if ( ( ( contin == 'y' ) or ( contin == 'Y' ) ) or ( ( contin == 'n' ) or ( contin == 'N' ) ) )
       {
       pass=false;
       cout<<"Wrong Character please put Y for Yes or N for No to Continue!"<<endl;
       }
     else
       pass =true;       }
     while (pass);
     }
   while ( ( contin == 'y' ) or ( contin == 'Y' ) );  
    
    cout << " Your program has performed " << c << " sets of interest calculations " << endl;
    cout << " There Where " << i <<" User Errors " << endl;
    cout << " Good Bye!"<< endl;
    
    return 0;
 }
     
     
     
     
     
