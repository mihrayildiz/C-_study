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
	Employee employee1 = {12,"mihra","bilisim"}; //Employee strut için employee1 objesi oluþturulu.
	
	cout << employee1.name <<endl;
	
	Employee* ptr = &employee1; //structure-ponter iliþkisi
	
	cout << ptr->deparment << endl;
	
	showEmployee(employee1) //employee1 objesi fonksiyona verildi.
	show(&employe1);
	
	Employee employee2 = {15,"deneme","bilisim", {"bursa",5}};
	cout << employee2.deparment <<endl;
	cout << employee2.name << endl;
	cout << employee2.adress.No <<endl;
	
	
	//employee2.adress ={"adana",5} == employee2.adress.No þeklindede atama yapýlabilirdi.
	
	//sizeof = bellekte ne kadar yer kapladýðýmýzý öðrenmek.
	
	cout << sizeof(int)<<endl ;
	cout << sizeof(char)<<endl ;
	cout << sizeof(double)<<endl ;
	cout << sizeof(float)<<endl ;
	cout << sizeof(Employee)<<endl ;
	
	//dinamik llk yönetimi
	
	int *ptr = new int; //bellekten int bir yer ayýr ve pointer onu göstersin.
	*ptr =5; // içerisine beþ deðerini koy
	delete ptr;
	
	//bellekten yer ayýrma
	
	int *ptr2;
	int size;
	cout <<"Ne kadar yer ayýrmak istrsiniz: " <<endl;
	cin >> size;
	
	ptr2 = new int[size]; //bellekte girilen size kada yer ayýrdýk.
	for ( int i=0; i<size; i++)
		{
			cout << "Deger : " << endl; //degerlri girdik.
			cin >> ptr [i];
			
		}
		
		for (int j=0; j<size; j++){  //degerleri yazdýrdýk.
			cout << "i : " << ptr[i] << endl;
			
		}
		
		delete [] ptr; //yeri boþaldýk.alýnan alanlar belleðe geri verildi.
		
		
		int *ptr = nullptr; //þu an pointer bir yeri göstermiyor.
		ptr = new int;
		*ptr = 10;
		delete ptr ; //dangling referans 
		
		//dangling referans = þu an bellekte geçerli olmayan bir yeri gösteriyor olmasý durumu.
		
		//örnek dangling:
		
		int *ptr1 =nullptr;
		int *ptr2 = nullptr;
		
		ptr1 =new int;
		*ptr1 =10;
		
		ptr2=ptr1; //ayný yeri gösteriyorlar.
		
		delete ptr1;
		
		*ptr2 =20; //runtime hatasý verir çünkü delete ptr1 ile bellekteki alan boþaldý.yani dangling durumu.
		cout << *ptr2 << endl;
		
		//foreach 
		
		int a [] = {10,20,30,40};
		for (int item:a){
			cout << item <<endl;
			
		}
		
		
		
		
	return 0;
	
}
