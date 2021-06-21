#pragma once
#include "Exception.h"

//class have information about soldier and methods to work with file and dataGridView
class Soldier
{
public:
	//constructor which initialize information about soldiers by default parametrs and increase count of soldiers
	Soldier();
	//constructor which initialize information about soldiers by parametrs and increase count of soldiers
	Soldier(string surname, string name, int age, int bloodType, pair<int, string> rank, int countWeapon, string* ammunition);
	//constructor which initialize information about soldiers by default parametrs of another class and increase count of soldiers
	Soldier(const Soldier& other);
	//delete memory of ammunition array and decrement count of soldiers
	~Soldier();

	//operator which print information about soldier to file
	ostream& operator<<(ostream& os) const;
	//operator which safety read information about soldier from file and throw exception if there is a mistake
	istream& operator>>(istream& is);
	//operator which take information about soldier from another soldier
	Soldier& operator=(const Soldier& other);

	//read information about soldier from dataGridView
	void ReadData(DataGridView^ data, int row);
	//read information about soldier to dataGridView
	void PrintData(DataGridView^ data, int row) const;
	//return age of soldier
	int GetAge() const;
	//return blood type of soldier
	int GetBloodType() const;
	//return int rank of soldier
	int GetRank() const;
	//return count weapon of soldier
	int GetCountWeapon() const;
	//initialize array by ammunition of soldier
	void GetAmmunition(string* arr) const;

	//static method which return count of soldiers
	static int GetCountSoldiers();

private:
	//surname of soldier
	string surname;
	//name of soldier
	string name;
	//age of soldier
	int age;
	//blood type of soldier
	int bloodType;
	//pair which has int and string type rank of soldier
	pair<int, string> rank;
	//count of weapon which soldier have
	int countWeapon;
	//string array which have ammunition of soldier
	string* ammunition;
	
	//static field which has count of soldier
	static int countSoldiers;
};

//sort vector of soldiers from lower rank rank to higher
void SortSoldiers(vector<Soldier>& arr);