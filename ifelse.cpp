
    string password = "password";
	string input;
	
	cout << "Parola giriniz :" << endl;
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
	
}
