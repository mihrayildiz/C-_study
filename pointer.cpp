#include <iostream>
using namespace std;

void arrayyazdir(int array[], size){
	for ( int i=0; i<size; i++){
		cout << array[i] << endl;
	}
}
int main ()
{
	int a = 5;
	int *ptr = &a; //a'n�n adresi atand�.
	
	cout << "a'n�n adresi" << &a << endl;
	cout << "a'n�n adresi" << ptr << endl;
	cout << "a'n�n adresi" << *ptr  << endl; // a'n�nn de�ei yani 5
	
	*ptr = 6; // art�k a =6
	
	int array[]={1,2,3,4}
	cout << array << endl; //arrayin ba�lang�� adresini tutar.
	cout << array+1 << endl;// ba�lang�� adrinden 4 fazla 
	
    int *ptr2 = array // yine ilk adres pointera atan�r.
    cout << ptr <<endl;
    cout << ptr+1 << endl;
    
    cout << *(ptr+1) << endl ; // cout << ptr[1] << endl;
    
    int a[3]={1,2,3};
    arrayyazdir(a,3); //yukar�da fonksiyon tan�mland�.
    
    const int b= 3;
    cout <<b << endl;
    b =6; // dersen hata veriri ��nk� b const bir de�er
    
    
    
    
    
	
	return 0;
	
	
	
}
