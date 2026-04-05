#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
struct student{
	char name[20],roll[20];
	int marks,random;
};
student st;
void cpp(){
    int i=0,arr[6];
	st.marks=0;
	char choice;
	while(i<5){
		back:
	st.random=rand()%6;
	for(int j=0;j<=6;j++){
		if(st.random==arr[j]){
			goto back;
		}
	}
	 arr[i]=st.random;
	switch(st.random)
	{
	case 0:
cout<<i+1<<") What is correct syntax to output \"Hello world\" in c++";
cout<<"A. system.out.println(\"Hello world\");"<<endl;
cout<<"B. Console.writeline(\"Hello world\");"<<endl;
cout<<"C. print(\"Hello world\");"<<endl;
cout<<"D. cout<<\"Hello world\";"<<endl;
	choice==getch();
	if(choice=='d'||choice=='d'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	 else{
	 	cout<<"Your answer is incorrect"<<endl;
	 	cout<<"Correct answer is d"<<endl;
	 }
      break;
      case 1:
	 cout<<i+1<<") which of the following is called address operator?"<<endl;
cout<<"a) *"<<endl;
cout<<"b) &"<<endl;
cout<<"c) _"<<endl;
cout<<"d) %"<<endl;
	choice==getch();
	if(choice=='B'||choice=='b'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	 else{
	 	cout<<"Your answer is incorrect"<<endl;
	 }
	 break;
	 case 2:
	 cout<<i+1<<") which of the following is used for comments in c++?"<<endl;
cout<<"a) // comment"<<endl;
cout<<"b) /* comment */"<<endl;
cout<<"c) both // comment or /* comment */"<<endl;
cout<<"d) // comment */"<<endl;
	choice==getch();
	if(choice=='c'||choice=='C'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	 else{
	 	cout<<"Your answer is incorrect"<<endl;
	 }
	 break;
	 case 3:
	 cout<<i+1<<") Who created c++?"<<endl;
	 cout<<"a) Bjarne Stroustrup"<<endl;
	 cout<<"b) Dennis Ritchie"<<endl;
	 cout<<"c) Ken Thompson"<<endl;
	 cout<<"d) Brian Kernighan"<<endl;
	 choice=getch();
	 if(choice=='A'||choice=='a'){
	 cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	 else{
	 	cout<<"Your answer is incorrect"<<endl;	
	 }
	 break;
	 case 4:
cout<<i+1<<") A language which has the capability to generate new data"<<endl;
cout<<"a) Extensible"<<endl;
cout<<"b) Overloaded"<<endl;
cout<<"c) Encapsulated"<<endl;
cout<<"d) Reprehensible"<<endl;
	choice==getch();
	if(choice=='A'||choice=='a'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	 else{
	 	cout<<"Your answer is incorrect"<<endl;
	 }
	 break;
	 case 5:
	 cout<<i+1<<") Which of the following is called insertion/put to operator"<<endl;
cout<<"a) <"<<endl;
cout<<"b) >"<<endl;
cout<<"c) <<"<<endl;
cout<<"d) >>"<<endl;
	choice==getch();
	if(choice=='c'||choice=='C'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	 else{
	 	cout<<"Your answer is incorrect"<<endl;
	 }
	 break;
	 case 6:
	 cout<<i+1<<") Which of the following is called extraction/get to operator"<<endl;
cout<<"a) <"<<endl;
cout<<"b) >"<<endl;
cout<<"c) <<"<<endl;
cout<<"d) >>"<<endl;
	choice=getch();
	if(choice=='d'||choice=='D'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	 else{
	 	cout<<"Your answer is incorrect"<<endl;
	 }
	 break;
}
  i++;
  
}
}
void java(){
	
}
void html(){
	
}
void result(){
	 int per=0;
     cout<<"student name: "<<st.name<<endl;
     cout<<"Roll no: "<<st.roll<<endl;
     cout<<"Marks: "<<st.marks<<" out of 6"<<endl;	
      per=100*st.marks/6;
	  cout<<"percentage: "<<per<<"%"<<endl;
	  if(per>=50){
	  	cout<<"status: pass"<<endl;
	  	
	  } 
	   else{
	   	cout<<"status: Fail"<<endl;
	   }  
}
main(){
	char press,select;
	do{
		system("CLS");
		cout<<"\n\n\t\t****************"<<endl;
		cout<<"\t\t QUIZ SYSTEM"<<endl;
		cout<<"\t\t**************"<<endl;
		cout<<"\t\tEnter name: ";
		gets(st.name);
		cout<<"\t\tRoll no: ";
		gets(st.roll);
		system("CLS");
		cout<<"\t\tMarks less than 50% will be fail"<<endl<<endl;
		cout<<"Select which subject quiz you want to perform"<<endl;
		cout<<"1) c++"<<endl;
		cout<<"2) Java"<<endl;
		cout<<"3) Html"<<endl;
		select=getch();
		system("CLS");
		switch(select){
			case '1' :
				cout<<"\t\tC++ QUIZ"<<endl;
				cpp();
				system("CLS");
				cout<<"\t\tC++ Quiz Result"<<endl;
				result();
				break;
			case '2' :
				cout<<"\t\tJava QUIZ"<<endl;
				java();
				break;				
			case '3' :
				cout<<"\t\tHTML QUIZ"<<endl;
				html();
				break;
			default:
				cout<<"Invalid input"<<endl;
				break;				
	}
		cout<<"press y to continue or any key to terminate"<<endl;
		press=getch();		
	}while(press=='y'||press=='y');
}
