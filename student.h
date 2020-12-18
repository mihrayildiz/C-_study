#include <iostream>
using namespace std;

class Student{ //student class�
	public: //de�erlere her yerden eri�ilsin bu sebeple public
	string name;
	void tellName (){
			
           cout << "benim ad�m" << name << endl;
		
	}
};
class Employee {
	private :
		string name;
		int age;
		
Employee (string isim, int yas){ //constructor
	name= isim;
	age=yas;
	
}



Employee (string isim){ // constructor'da overloadig, 
	name = isim; //this kullan�lmad� dikkat.

}

/*		
Employee (string name, int age){ //constructor
	this->name= isim; class i�indeki deger ile constructor ad� ayn� bu y�zden this pointer� kullan�ld�.
	this->age=yas;
	
}
*/
~Employee(){ //destructor metod. classimi ileayn� isimde olmal�.
	cout << "construct cagr�ld�." << endl;
}

	public:
		void setName(string isim){ //setname ile a�a��da name degerine ula��lma� sa�lan�r.
			name=isim;
			
		}
		string getName(){ //degeri al�p ekrana basabilmek i�in
			return name;
		}
		void setAge(int yas){
			if (yas<0){
				cout << "B�yle bir deger girilemez." endl;
			
				
			}else{
				age=yas;
			}
		}
		int getAge(){
			return age;
			}
};

friend class Test;  // test cass� private de�erlei ula�ss�n diye

class Test { //employee class�n�n hemen alt�na verilmeli onun de�erlerini kullancak.
public:
		static void showInfoss(Employee employee){
		cout << employee.name << employee.age<< endl;
		}
}

};
	

friend showInfos(Employee emloyee); //dersek private olan de�erlere ula��l�r.

void showInfos(Employee emloyee){
	cout << employee.name << " " << emloyee.age << endl; //�al��maz ��nk� de�erler pivate ve sadece clss i�inde kullanlabilir.
}

int main (){
	
	Student student1;
	student1.name = "ali";
	
	cout << "Name : "  << student1.name <<endl;
	student1.tellName();
	
	Employee employee;
//	employee.name = "veli"; denemez hata verir ��nk� deger private.
	employee.setName("veli");
	cout << employee.getName() << endl;
	employee.setAge(25); //s�f�dan k���k bir de�er yas i�in verilemez.
	cout << employee.getAge() << endl;
	
	Employee* employee = new Employee(); //pointer
	
	employee->setName(""ayse"");
	employee->setAge(25);7
	
	cout << employee->getAge()<<endl;
	cout << employee->getName()<< endl;
	
	Employee employe1("fatma", 20); //constructor oldu�u i�in de�erleri vobject olu�tururken verdik.
	
	Employee employee3; //parametresi olmayan bir contructor i�in �retilen obje.
	Employee employee4("mehmet"); //constructor overloading
	
	
	Employee *emp = new Employee();
	delete emp; //sildigimiz i�in destructor metod �al���r.
	
	showInfos(employee1);
	Test::showInfoss(employee);// hata verir ��nk� test class� employeenin private de�erlerine ula�mak itiyor.
	
	
	
}
