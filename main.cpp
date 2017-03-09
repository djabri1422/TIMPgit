#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	int n=0,m=0,r=4;
	string name_1,name_2;
	string buff_1,buff_2;
	
	cout<<"Please enter file_1 name:";
	getline(cin,name_1);
	ifstream file_1(name_1);
	cout<<"Please enter file_2 name:";
	getline(cin,name_2);
	ifstream file_2(name_2);
	
	while(getline(file_1,buff_1)){
		n++;
	}		
	while(getline(file_2,buff_2)){
		m++;
	}	
	file_1.clear();
	file_1.seekg(0, ios_base::beg);
	file_2.clear();
	file_2.seekg(0, ios_base::beg);
	if (n==m)
	{
		string *array=new string [n];
		string *mass=new string [n];
		for(int count_1=0;count_1<n;count_1++){
			file_1>>array[count_1];
			for(int count_2=0;count_2<n;count_2++){
				file_2>>mass[count_2];
				while(r%4==0){
					if(array[count_1]==mass[count_2]){
						break;
					}else{
						cout<<count_1<<setw(5)<<array[count_1]<<setw(10)<<count_2<<setw(5)<<mass[count_2]<<endl;
						break;
						}
					}
				}
			}
	}else{
		cout<<"Different number of lines in files,Please try again.";
	}
	cout<<endl;
	system("pause");
}
