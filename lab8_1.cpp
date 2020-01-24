#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include <cmath>
using namespace std;

int main(){
	float x;
	float y;
	float z;
	float newbalance;
	float payment;
	float total;
	cout <<"Enter initial loan:\n";
    cin >> x;
    cout <<"Enter interest rate per year (%):\n";
    cin >> y;
    cout <<"Enter amount you can pay per year:\n";
    cin >> z;
    cout <<"Enter initial loan:" << x << "\n";
    cout <<"Enter interest rate per year:" << y << "\n";
    cout <<"amount you can pay per year:" << z << "\n";
    
    
    
    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	
    cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i=1;
	
	newbalance = x;
	while(newbalance>0)
	{ 
	
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 	
	
	cout << setw(13) << left << x;
	cout << setw(13) << left << x*y/100;
	cout << setw(13) << left << x+(x*y/100);
    cout << setw(13) << left << z;
    if(x+(x*y/100) < z)
	{
	z= x+(x*y/100);
	}
    newbalance=x+(x*y/100)-z;
    
	cout << setw(13) << left << newbalance;
    x = newbalance ;
	

	
