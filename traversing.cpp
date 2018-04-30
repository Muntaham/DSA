#include<iostream>
using namespace std;
int main(){
	int x=-1,y=0;
	int array[100];
	char oppp;
	cout<<"press 1.to Traversing linear array"<<endl;
	cout<<"2.to insert element"<<endl;
	cout<<"enter your choice"<<endl;
	line:
		cin>>oppp;
		switch(oppp){
			case '1':
				cout<<"enter element to insert"<<endl;
				x++;
				cin>>array[x];
				cout<<"inserted at location"<<x<<endl;
				break;
				
		
		case '2':
			cout<<"traversing a linear array"<<endl;
			for(int b=0;b<=x;b++){
				cout<<array[b]<<endl;
			}
			break;
		}
		goto line;
		
}
