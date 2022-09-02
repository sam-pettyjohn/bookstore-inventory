// library import
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

// int main() {}

// code 
class book {
    private:
        char *author,*title,*publisher;
        float *price;
        int *stock;

    public:
        book() {
            author= new char[30];
            title= new char[30];
            publisher= new char[30];
            price= new float;
            stock= new int;
        }
        void feeddata();
};





void book::feeddata()	{
	cin.ignore();
	cout<<"\nEnter Author Name: ";    cin.getline(author,30);
	cout<<"Enter Title Name: ";       cin.getline(title,30);
	cout<<"Enter Publisher Name: ";   cin.getline(publisher,30);
	cout<<"Enter Price: ";            cin>>*price;
	cout<<"Enter Stock Position: ";   cin>>*stock;   
	
}