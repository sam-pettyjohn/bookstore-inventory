// library import
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

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

int main()	{
	book *B[20];
	int i=0,r,t,choice;
	char titlebuy[20],authorbuy[20];
	while(1)	{
		cout<<"\n\n\t\tINVENTORY MENU"
		<<"\n1. Add New Book"
		<<"\n2. Sell Book(s)"
		<<"\n3. Search For Book"
		<<"\n4. Edit Details of Book Entry"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
		cin>>choice;

    }
}