#include "Soldier.h"

//static field which has count of soldier initialize by 0
int Soldier::countSoldiers = 0;

//constructor which initialize information about soldiers by default parametrs and increase count of soldiers
Soldier::Soldier()
{
	surname = "No surname";
	name = "No name";
	age = 18;
	bloodType = 0;
	rank.first = 0;
	rank.second = RanksStr[rank.first];
	countWeapon = 0;
	ammunition = new string[countWeapon];
	countSoldiers++;
}

//constructor which initialize information about soldiers by parametrs and increase count of soldiers
Soldier::Soldier(string surname, string name, int age, int bloodType, pair<int, string> rank, int countWeapon, string* ammunition)
{
	this->surname = surname;
	this->name = name;
	this->age = age;
	this->bloodType = bloodType;
	this->rank = rank;
	this->countWeapon = countWeapon;
	this->ammunition = new string[this->countWeapon];
	for (int i = 0; i < this->countWeapon; i++)
	{
		this->ammunition[i] = ammunition[i];
	}
	countSoldiers++;
}

//constructor which initialize information about soldiers by default parametrs of another class and increase count of soldiers
Soldier::Soldier(const Soldier& other)
{
	this->surname = other.surname;
	this->name = other.name;
	this->age = other.age;
	this->bloodType = other.bloodType;
	this->rank = other.rank;
	this->countWeapon = other.countWeapon;
	this->ammunition = new string[this->countWeapon];
	for (int i = 0; i < this->countWeapon; i++)
	{
		this->ammunition[i] = other.ammunition[i];
	}
	countSoldiers++;
}

//delete memory of ammunition array and decrement count of soldiers
Soldier::~Soldier()
{
	countSoldiers--;
	delete[] ammunition;
}

//===================================================================================================
//operator which print information about soldier to file
ostream& Soldier::operator<<(ostream& os) const
{
	os << surname << " " << name << " " << age << " " << bloodType << " " << rank.second << " " << countWeapon;
	for (int i = 0; i < countWeapon; i++)
	{
		os << " " << ammunition[i];
	}
	
	return os;
}

//operator which safety read information about soldier from file and throw exception if there is a mistake
istream& Soldier::operator>>(istream& is)
{
	try
	{
		surname = CheckString(is);
		name = CheckString(is);
		age = CheckInt(is);
		if (age < 18 || age > 60)
		{
			throw MyException("Reading File", "Age must be 18 << 60.\nCheck age and try again later.");
		}
		bloodType = CheckInt(is);
		if (bloodType < -4 || bloodType > 4 || !bloodType)
		{
			throw MyException("Reading File", "Blood type must be -4 << 4, not 0.\nCheck blood type and try again later.");
		}
		rank.second = CheckString(is);
		bool check = false;
		for (int i = 0; i < RANK_POOL; i++)
		{
			if (rank.second == RanksStr[i])
			{
				check = true;
				break;
			}
		}
		if (!check)
		{
			throw MyException("Reading File", "Incorrect rank.\nCheck rank and try again later.");
		}
		rank.first = FindIndex(rank.second);
		countWeapon = CheckInt(is);
		if (countWeapon < 0 || countWeapon > 3)
		{
			throw MyException("Reading File", "Count weapon must be 0 << 3.\nPlease check count weapon and try again later.");
		}
		delete[] ammunition;
		ammunition = new string[countWeapon];
		for (int i = 0; i < countWeapon; i++)
		{
			is >> ammunition[i];
			check = false;
			for (int j = 0; j < WEAPON_POOL; j++)
			{
				if (ammunition[i] == Rifles[j] || ammunition[i] == Pistols[j] || ammunition[i] == Explosion[j])
				{
					check = true;
					break;
				}
			}
			if (!check)
			{
				throw MyException("Reading File", "Incorrect weapon.\nPlease check weapon try again later.");
			}
		}
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
		exit(404);
	}
	catch (...)
	{
		MyException unknown_excep("Reading data");
		unknown_excep.WhatException();
		exit(404);
	}
	
	return is;
}

//operator which take information about soldier from another soldier
Soldier& Soldier::operator=(const Soldier& other)
{
	if (this == &other)
	{
		return *this;
	}

	this->surname = other.surname;
	this->name = other.name;
	this->age = other.age;
	this->bloodType = other.bloodType;
	this->rank = other.rank;
	this->countWeapon = other.countWeapon;
	delete[] ammunition;
	this->ammunition = new string[this->countWeapon];
	for (int i = 0; i < this->countWeapon; i++)
	{
		this->ammunition[i] = other.ammunition[i];
	}
}

//===================================================================================================
//read information about soldier from dataGridView
void Soldier::ReadData(DataGridView^ data, int row)
{
	surname = msclr::interop::marshal_as<string>(Convert::ToString(data->Rows[row]->Cells[0]->Value));
	name = msclr::interop::marshal_as<string>(Convert::ToString(data->Rows[row]->Cells[1]->Value));
	age = Convert::ToInt32(data->Rows[row]->Cells[2]->Value);
	bloodType = Convert::ToInt32(data->Rows[row]->Cells[3]->Value);
	rank.second = msclr::interop::marshal_as<string>(Convert::ToString(data->Rows[row]->Cells[4]->Value));
	countWeapon = Convert::ToInt32(data->Rows[row]->Cells[5]->Value);
	delete[] ammunition;
	ammunition = new string[this->countWeapon];
	for (int i = 0; i < this->countWeapon; i++)
	{
		ammunition[i] = msclr::interop::marshal_as<string>(Convert::ToString(data->Rows[row]->Cells[i + 6]->Value));
	}
	rank.first = FindIndex(rank.second);
}

//read information about soldier to dataGridView
void Soldier::PrintData(DataGridView^ data, int row) const
{
	data->Rows[row]->Cells[0]->Value = StdToSys(surname);
	data->Rows[row]->Cells[1]->Value = StdToSys(name);
	data->Rows[row]->Cells[2]->Value = age;
	data->Rows[row]->Cells[3]->Value = bloodType;
	data->Rows[row]->Cells[4]->Value = StdToSys(rank.second);
	data->Rows[row]->Cells[5]->Value = countWeapon;
	for (int i = 0; i < countWeapon; i++)
	{
		data->Rows[row]->Cells[i + 6]->Value = StdToSys(ammunition[i]);
	}
}

//return age of soldier
int Soldier::GetAge() const
{
	return age;
}

//return blood type of soldier
int Soldier::GetBloodType() const
{
	return bloodType;
}

//return int rank of soldier
int Soldier::GetRank() const
{
	return rank.first;
}

//return count weapon of soldier
int Soldier::GetCountWeapon() const
{
	return countWeapon;
}

//initialize array by ammunition of soldier
void Soldier::GetAmmunition(string* arr) const
{
	for (int i = 0; i < countWeapon; i++)
	{
		arr[i] = ammunition[i];
	}
}

//static method which return count of soldiers
int Soldier::GetCountSoldiers()
{
	return countSoldiers;
}

//===================================================================================================
//sort vector of soldiers from lower rank rank to higher
void SortSoldiers(vector<Soldier>& vect)
{
	sort(vect.begin(), vect.end(), [](Soldier first, Soldier second) {
		return first.GetRank() < second.GetRank();
		});
}