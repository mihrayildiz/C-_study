#include <iostream>
using namespace std;

struct Employee { // stuct olusturuldu.

int id;
string name;
string deparment;
Adress adress;

};
struct Adress {
	string cityName;
	int No;
	
};

void showEmployee(Employee employee){
	cout << employee.deparment <<endl;
	cout << employee.id <<endl;
	cout << employee.name << endl;
	
};

void show(Employee* employee){
	cout << employee ->id << endl;
};


int main (){
	Employee employee1 = {12,"mihra","bilisim"}; //Employee strut i�in employee1 objesi olu�turulu.
	
	cout << employee1.name <<endl;
	
	Employee* ptr = &employee1; //structure-ponter ili�kisi
	
	cout << ptr->deparment << endl;
	
	showEmployee(employee1) //employee1 objesi fonksiyona verildi.
	show(&employe1);
	
	Employee employee2 = {15,"deneme","bilisim", {"bursa",5}};
	cout << employee2.deparment <<endl;
	cout << employee2.name << endl;
	cout << employee2.adress.No <<endl;
	
	
	//employee2.adress ={"adana",5} == employee2.adress.No �eklindede atama yap�labilirdi.
	
	//sizeof = bellekte ne kadar yer kaplad���m�z� ��renmek.
	
	cout << sizeof(int)<<endl ;
	cout << sizeof(char)<<endl ;
	cout << sizeof(double)<<endl ;
	cout << sizeof(float)<<endl ;
	cout << sizeof(Employee)<<endl ;
	
	//dinamik llk y�netimi
	
	int *ptr = new int; //bellekten int bir yer ay�r ve pointer onu g�stersin.
	*ptr =5; // i�erisine be� de�erini koy
	delete ptr;
	
	//bellekten yer ay�rma
	
	int *ptr2;
	int size;
	cout <<"Ne kadar yer ay�rmak istrsiniz: " <<endl;
	cin >> size;
	
	ptr2 = new int[size]; //bellekte girilen size kada yer ay�rd�k.
	for ( int i=0; i<size; i++)
		{
			cout << "Deger : " << endl; //degerlri girdik.
			cin >> ptr [i];
			
		}
		
		for (int j=0; j<size; j++){  //degerleri yazd�rd�k.
			cout << "i : " << ptr[i] << endl;
			
		}
		
		delete [] ptr; //yeri bo�ald�k.al�nan alanlar belle�e geri verildi.
		
		
		int *ptr = nullptr; //�u an pointer bir yeri g�stermiyor.
		ptr = new int;
		*ptr = 10;
		delete ptr ; //dangling referans 
		
		//dangling referans = �u an bellekte ge�erli olmayan bir yeri g�steriyor olmas� durumu.
		
		//�rnek dangling:
		
		int *ptr1 =nullptr;
		int *ptr2 = nullptr;
		
		ptr1 =new int;
		*ptr1 =10;
		
		ptr2=ptr1; //ayn� yeri g�steriyorlar.
		
		delete ptr1;
		
		*ptr2 =20; //runtime hatas� verir ��nk� delete ptr1 ile bellekteki alan bo�ald�.yani dangling durumu.
		cout << *ptr2 << endl;
		
		//foreach 
		
		int a [] = {10,20,30,40};
		for (int item:a){
			cout << item <<endl;
			
		}
		
		
		
		
	return 0;
	
}
