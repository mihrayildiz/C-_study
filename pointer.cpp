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
	int *ptr = &a; //a'nýn adresi atandý.
	
	cout << "a'nýn adresi" << &a << endl;
	cout << "a'nýn adresi" << ptr << endl;
	cout << "a'nýn adresi" << *ptr  << endl; // a'nýnn deðei yani 5
	
	*ptr = 6; // artýk a =6
	
	int array[]={1,2,3,4}
	cout << array << endl; //arrayin baþlangýç adresini tutar.
	cout << array+1 << endl;// baþlangýç adrinden 4 fazla 
	
    int *ptr2 = array // yine ilk adres pointera atanýr.
    cout << ptr <<endl;
    cout << ptr+1 << endl;
    
    cout << *(ptr+1) << endl ; // cout << ptr[1] << endl;
    
    int a[3]={1,2,3};
    arrayyazdir(a,3); //yukarýda fonksiyon tanýmlandý.
    
    const int b= 3;
    cout <<b << endl;
    b =6; // dersen hata veriri çünkü b const bir deðer
    
    
    
    
    
	
	return 0;
	
	
	
}
