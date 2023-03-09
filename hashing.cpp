#include<bits/stdc++.h>
using namespace std;
class hashing1{
	public:
		long long hashtable[10];
		hashing1(){
			for(int i=0;i<10;i++){
				hashtable[i]=-1;
			}
		}
		void insert(){
			long long key;
			cout<<"Enter a key:";
			cin>>key;
			int loc=key%10;
			
			for(int i=0;i<10;i++){
			
			if(hashtable[loc]==-1){
				
				hashtable[loc]=key;
				break;
			}
			else{
				
				loc=(loc+1)%10;
				
			}
		}
		
		}
		void display(){
			for(int i=0;i<10;i++){
				if(hashtable[i]==-1){
					cout<<"--"<<endl;
				}
				else{
					cout<<hashtable[i]<<endl;
				}
			}
		}
		void search(){
			long long search;
			cout<<"Enter the key to search:";
			cin>>search;
			int loc=search%10;
			bool flag=false;
			for(int i=0;i<10;i++){
			
			if(hashtable[loc]==-1){
				cout<<"Element Not Found";
			}
			if(hashtable[loc]==search){
				flag=true;
			}
			else{
				loc=(loc+1)%10;
				if(hashtable[loc]==search){
				flag=true;
				}
			}
		}
			if(flag){
				cout<<"Element Found";
			}
			else{
				cout<<"Element Not Found";
			}
		}
};

class node{
	public:
		long long data;
		node* next;
};
class hashing2{
	public:
		node* hashtable[10];
		hashing2(){
			for(int i=0;i<10;i++){
				hashtable[i]=NULL;
			}
		}
		void insert1(){
			long long key;
			cout<<"Enter the telephone number:";
			cin>>key;
			node* newnode=new node();
			newnode->data=key;
			newnode->next=NULL;
			int loc=key%10;
			if(hashtable[loc]==NULL){
				hashtable[loc]=newnode;
			}
			else
			{
				node* temp=hashtable[loc];
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=newnode;
			}
		}
		
		void display1(){
			for(int i=0;i<10;i++){
				node* temp=hashtable[i];
				if(hashtable[i]==NULL){
					cout<<"--"<<endl;
				}
				else{
					while(temp!=NULL){
						cout<<temp->data<<" ";
						temp=temp->next;
					}
					cout<<endl;
				}
			}
		}
		
		void search1(){
			long long search;
			cout<<"Enter the key to search:";
			cin>>search;
			bool found=false;
			int loc=search%10;
			node* temp=hashtable[loc];
			if(temp==NULL){
				cout<<"Element Not Found";
			}
			else{
				while(temp!=NULL){
					if(temp->data==search){
						found=true;
						break;
					}
					temp=temp->next;
					
				}
				if(found){
					cout<<"Element found";
				}
				else{
					cout<<"Element not found";
				}
			}
		}
};

int main(){
	hashing1 obj;
	hashing2 obj1;
	int ch;
	int ch1;
	int ch2;
	while(1){
		cout<<"\n1.Seperate Chaining\n2.Linear Probbing";
		cout<<"\nEnter a choice:";
		cin>>ch;
		if(ch==1){
			
				
				while(1){
				cout<<"\n1.Insert\n2.Display\n3.Search\n4.Exit";
				cout<<"\nEnter a choice:";
				cin>>ch1;
				
				switch(ch1){
					case 1:
						obj1.insert1();
						break;
					case 2:
						obj1.display1();
						break;
					case 3:
						obj1.search1();
						break;
					case 4:
						exit(1);
						break;
					default:
						cout<<"Enter a valid choice";
			
				}
			}
			
		}
		else if(ch==2){
				
				while(1){
					cout<<"\n1.Insert\n2.Display\n3.Search\n4.Exit";
					cout<<"\nEnter a choice:";
					cin>>ch2;
					switch(ch2){
						case 1:
						obj.insert();
						break;
					case 2:
						obj.display();
						break;
					case 3:
						obj.search();
						break;
					case 4:
						exit(1);
						break;
					default:
						cout<<"Enter a valid choice";
			
				}
			}
		}	
		else{
		
			exit(1);
			
		}
	}
	return 0;
}

