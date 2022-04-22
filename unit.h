#include <iostream>
#include <string>
using namespace std;

class unit{
protected:
	string name;
	int atk;
	int def;
	int hp;

public:
	unit(string name, int atk, int def, int hp){
		this->name = name;
		this->atk = atk;
		this->def = def;
		this->hp = hp;
	}

	~unit(){
		cout<<name<<" is dead..."<<endl;
	}

	void printInfo(){
		cout<<"Name : "<<name<<endl;
		cout<<"Attack : "<<atk<<endl;
		cout<<"Defence : "<<def<<endl;	
		cout<<"hp : "<<hp<<endl;
	}

	void Attack(unit& enemy){
		cout<<name<<" attacks to "<<enemy.name<<endl;
		int damage = atk - enemy.def;
		if(damage < 0 ) damage = 0;
		cout<<enemy.name<<" is damaged for "<<damage<<endl;
		enemy.hp -= damage;
	}

	virtual void speak(){
		cout<<"We don't know who he is"<<endl;
	}
};

class knight : public unit{
public:
	knight() : unit("knight",20,5,100) {}
	virtual void speak(){
		cout<<"You are already dead!"<<endl;
	}
};

class devil : public unit{
public:
	devil() : unit("devil",15,10,100) {}
	virtual void speak(){
		cout<<"Do you want to go to hell?"<<endl;
	}
};	
