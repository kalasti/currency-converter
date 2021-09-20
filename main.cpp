// Currency Converter 
// Version 1.0.0
// Developed by Kourosh Alasti 
// September 14, 2021

#include <iostream>
#include <fstream>
#include <string> 
 
using namespace std;

double convert_currency(double money, double conversionRate){
    double conversion = money * conversionRate; 
    return conversion; 
}
 
int main(){

    string currency; 
    string stringRates; 
    double rates; 

    ifstream currencyList; 
    currencyList.open("currency_list.txt");

    if (currencyList.is_open()) {
        while(getline(currencyList, currency) ){
            while(getline(currencyList, stringRates)){
                cout << stringRates; 
                //rates = stod(stringRates);
                //cout << currency; 
                //cout << rates;
            }
        }
    }
    currencyList.close(); 

    cout << "\nWhat Currency are you trying to convert to?" << endl; 

    string user_choice; 
    cin >> user_choice; 

    return 0; 
}