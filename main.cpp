#include <iostream>

using namespace std;


int main() {
	cout << "Hello World!" << endl;
	
	cout << "Hello" << endl;
	
// endl = alt satıra geçmek için.
	
	
	int a=32;
	float b = 3.52;
	double c = 4.5656;
	char d = 'A';  // char d =128;
	bool e = false;
	
	cout << "a degiskeninin degeri" << a << endl;
	cout << "e degeri : " << e << endl;
	
	int k,l,m,toplam =0;
	k=1;
	l=2;
	m=3;
	toplam = k+l+m;
	cout << "toplam : " << toplam << endl;
	
	m += 2;
	l--;
	cout << "m'nin yeni degeri " << m<< endl;
    cout << "l'nin yeni degeri " << l << endl;
    
    cout << "Sayi Giriniz : " <<endl;
    int x;
    int y;
    int z;
    cin >> x;
    cout << "Girdiginiz Sayi : " << x << endl;
    
    cout << "Sayilari giriniz :" << endl;
    cin >> x >> y >> z;
    cout << "sayilar :" << x << y << z << endl;
    
    //string 
    string str1 = "Bu bir stringtir.";
    string str2 = "bua bir string";
    string str3= str1 + str2;
    
    cout << "String : " << str1 << endl;
    cout << "String birlesim : " << str3 << endl;
    
    // if 
    string password = "password";
	string input;
	
	cout << "Parola giriniz : "<<endl;
	cin >> input;
	
	if (password == input)
	{
		cout << "Dogru girdiniz";
		
	}
	else {
		cout << "Yanlıs girdiniz";
		
	}
    
    int i ;
	while (i <10)  {
		cout << "i :" << i <<endl;
		i++;
		
	}
	
	string parola = "123456";
	int girdi ;
	
	//do while
	do {
		cout << "Parola giriniz " << ndl;
		cin >>girdi;
		
		if (parola != girdi){
			cout << "yanlıs girdiniz";
			
			}
	}while (parola != girdi );
	
	cout << "Sonunda" << endl ;
	
	
	//for döngüsü
	for ( int j=1; j<6; j++){
		cout << "i degeri " << i << endl;
		
	}
	
	//break
	int j =0;
	while (j<10){
		if (j == 5) {
		break;
		}
		cout << "j degeri" << j <<endl;
		j++;
	}
	
	//continue
	 for (int i=0; i<10; i++){
	 	if (i==3 || i==5){
	 		continue;
		 }
		 cout << "i degeri : " << i << endl;
		 
	 }

// array

int array1[]= {1,2,3};
for (int i = 0; <3; i++){
	cout << "i: " << array1[i]  << endl;
}

/* for (int i =, i<3 ; i++)
{
	cin >> array[i];
}
*/

//çok boyutlu araylar

int array [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//array [0][2] = 3
//array [2][1] = 8

for (int i =0; i<3; i++)
{
	for (int j =0; j<3; j++){
		cout << array[i][j] << " ";
	}
	cout << endl;
	
	return 0;
}






