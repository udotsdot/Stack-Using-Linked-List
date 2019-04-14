//Muhammad Umaruddin Syam
//1857051006

#include <iostream>
using namespace std;

struct node {
	int data;
	node *selanjutnya;
};

node *atas=NULL;

class Tumpukan{
		public:
		void push (int baru){
		node *nodebaru=new node;
		nodebaru->data=baru;
		nodebaru->selanjutnya=atas;
		atas=nodebaru;
}

void pop () {
		node *hapus;
		if (atas==NULL){
			return ;}
		hapus=atas;
	atas=atas->selanjutnya;
	delete hapus;}
	};

void tampilkan () {
	node *bantu=atas;
	if (atas!=NULL){
		do {
		cout<<bantu->data<<" "<<endl;
		bantu=bantu->selanjutnya;}
	while (bantu!=NULL);
	}
	else {
		cout<<"Kosong"<<endl;
	}}

int main(){
	int jumlah_pop,jumlah_push,nilai,opsi;
	char perulangan;
	do{
	cout<<"\tSelamat Datang Di Program Stack Linked List"<<endl<<endl;
	cout<<"1.Push Tumpukan"<<endl;
	cout<<"2.Pop Tumpukan"<<endl;
	cout<<"3.Tampilkan"<<endl<<endl;
	Tumpukan a;
		cout<<"Masukan Pilihan Anda : ";
		cin>>opsi;
if(opsi==1){
	cout<<"Jumlah Tumpukan yang ingin di push = ";
	cin>>jumlah_push;
for(int j=1;j<=jumlah_push;j++){
	cout<<"Masukan Nilai "<<j<<" = ";
	cin>>nilai;
	a.push(nilai);
}
}
if(opsi==2){
	cout<<"Jumlah tumpukan yang ingin di pop = ";
	cin>>jumlah_pop;
	for(int i=1; i<=jumlah_pop; i++){
	a.pop();
}}
if(opsi==3){
	cout<<endl<<endl;
	cout<<"Isi tumpukan = ";
	tampilkan();
}
cout<<"Ketik (y) untuk kembali ke opsi";
cin>>perulangan;
system("cls");}
while(perulangan=='y');

return 0;}
