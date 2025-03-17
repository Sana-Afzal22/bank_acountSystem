#include<iostream>
#include<vector>
using namespace std;
vector<int>idVec;
vector<string>pwVec;
vector<string>nameVec;
vector<int>balanceVec;
void openAc(){
string name,pw;
int id;
cout<<"Enter user name=";
cin >>name;
cout<<"Enter user ID=";
cin >>id;
cout<<"Enter user password=";
cin >> pw;
nameVec.push_back(name);
idVec.push_back(id);
pwVec.push_back(pw);
cout<<"your account open successfully\n";
}
void depFun(){
int id,amount;
cout<<"Enter the value of ID=";
cin >>id;
cout<<"Enter the value of amount =";
cin >>amount ;
bool found=false;
for(int i=0; i<idVec.size();i++){
if(id==idVec[i]){
found=true;
balanceVec.push_back(amount);
cout<<"Cash deposited successfully\n";
cout<<" \n";
break;
}}
if(! found){
cout<<"Invaliduser ID=\n";
cout<<" \n";
}
}
void wdFun(){
int id,amount;
string pw;
cout<<"Enter the value of ID=\n";
cin >>id;
cout<<"Enter the password=\n";
cin >>pw;
bool idfound=false;
bool pwfound=false;
bool balavail=false;
for(int i=0; i<idVec.size(); i++){
if(id==idVec[i]){
idfound=true;
if(pw==pwVec[i]){
pwfound=true;
cout<<"Enter amount=\n";
cin >>amount;
if(amount <= balanceVec[i]){
balavail = true;
balanceVec[i]=balanceVec[i]-amount;
cout<<"Operation was successful\n";
cout<<" ";
}
}
}
}if(! idfound){
cout<<"invalid user ID\n";
cout<<" ";
}
else if(! pwfound){
cout<<"Incorrect user name\n";
cout<<" ";
}
else if(! balavail)
{
cout<<"Insufficient balance\n";
cout<<" ";
}}
void balinq(){
string pw;
int id;
cout<<"Enter the ID\n";
cin >>id;
cout<<"Enthe pass password\n";
cin>>pw;
bool idfound=false;
bool pwfound=false;
for(int i=0; i<idVec.size(); i++){
if(id==idVec[i]){
idfound =true;
if(pw==pwVec[i]){
pwfound =true;
cout <<"Mr/Mrs!"<<nameVec[i]<<"Your available amount\n"<<balanceVec[i]<<endl;
cout<<" ";
break;
}
}
}
if(! idfound){
cout<<"Invalid user ID\n";
cout<<" ";
}
else if(! pwfound){
cout<<"Incorrect password\n";
}
}
int main (){
while(true){
cout<<"Bank account management\n";
cout<<"======================\n";
cout<<"1.open account:\n";
cout<<"2.deposit cash:\n";
cout<<"3.withdraw cash:\n";
cout <<"4.balance inquiry: \n";
cout<<"5. Exit\n";
int choice ;
cout<<"Enter the value of choice=";
cin >>choice;
if(choice==1){
//open account
system ("cls");
openAc();
}
else if(choice==2){ 
//deposit cash
system ("cl1");
depFun();
}
else if(choice==3){
//withdrawcash
system ("cl1");
wdFun();
}

else if(choice==4){
//balance inquiry 
system ("cl1");
balinq();
} 
else if(choice==5){
system ("c1s");
cout<<"Best of luck\n";
break;
} 
else{
cout<<"invalid output\n";
}
}
return 0;
}