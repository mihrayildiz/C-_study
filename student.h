#include <iostream>
using namespace std;

class Student{ //student classý
	public: //deðerlere her yerden eriþilsin bu sebeple public
	string name;
	void tellName (){
			
           cout << "benim adým" << name << endl;
		
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
	name = isim; //this kullanýlmadý dikkat.

}

/*		
Employee (string name, int age){ //constructor
	this->name= isim; class içindeki deger ile constructor adý ayný bu yüzden this pointerý kullanýldý.
	this->age=yas;
	
}
*/
~Employee(){ //destructor metod. classimi ileayný isimde olmalý.
	cout << "construct cagrýldý." << endl;
}

	public:
		void setName(string isim){ //setname ile aþaðýda name degerine ulaþýlmaý saðlanýr.
			name=isim;
			
		}
		string getName(){ //degeri alýp ekrana basabilmek için
			return name;
		}
		void setAge(int yas){
			if (yas<0){
				cout << "Böyle bir deger girilemez." endl;
			
				
			}else{
				age=yas;
			}
		}
		int getAge(){
			return age;
			}
};

friend class Test;  // test cassý private deðerlei ulaþssýn diye

class Test { //employee classýnýn hemen altýna verilmeli onun deðerlerini kullancak.
public:
		static void showInfoss(Employee employee){
		cout << employee.name << employee.age<< endl;
		}
}

};
	

friend showInfos(Employee emloyee); //dersek private olan deðerlere ulaþýlýr.

void showInfos(Employee emloyee){
	cout << employee.name << " " << emloyee.age << endl; //çalýþmaz çünkü deðerler pivate ve sadece clss içinde kullanlabilir.
}

int main (){
	
	Student student1;
	student1.name = "ali";
	
	cout << "Name : "  << student1.name <<endl;
	student1.tellName();
	
	Employee employee;
//	employee.name = "veli"; denemez hata verir çünkü deger private.
	employee.setName("veli");
	cout << employee.getName() << endl;
	employee.setAge(25); //sýfýdan küçük bir deðer yas için verilemez.
	cout << employee.getAge() << endl;
	
	Employee* employee = new Employee(); //pointer
	
	employee->setName(""ayse"");
	employee->setAge(25);7
	
	cout << employee->getAge()<<endl;
	cout << employee->getName()<< endl;
	
	Employee employe1("fatma", 20); //constructor olduðu için deðerleri vobject oluþtururken verdik.
	
	Employee employee3; //parametresi olmayan bir contructor için üretilen obje.
	Employee employee4("mehmet"); //constructor overloading
	
	
	Employee *emp = new Employee();
	delete emp; //sildigimiz için destructor metod çalýþýr.
	
	showInfos(employee1);
	Test::showInfoss(employee);// hata verir çünkü test classý employeenin private deðerlerine ulaþmak itiyor.
	
	
	
}
