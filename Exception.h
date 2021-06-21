#pragma once
#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

//count of weapon of each type of weapon
#define WEAPON_POOL 3
//count of ranks
#define RANK_POOL 7

//global const string array for name of ranks
const string const RanksStr[RANK_POOL] = { "Ordinary", "Sergeant", "Officer", "Ensign", "General", "Admiral", "Marshal" };
 
//global const string array for name of rifles
const string const Rifles[WEAPON_POOL] = { "M4A4", "AK-47", "M4A1-S" };
//global const string array for name of pistols
const string const Pistols[WEAPON_POOL] = { "USP-S", "GLOCK", "DEAGLE" };
//global const string array for name of explosive
const string const Explosion[WEAPON_POOL] = { "C4", "RPG-7", "SMAW" };

//===================================================================================================
//my class exception, whick show message about error and imitates std class exception
class MyException :public exception
{
public:
	//constructor which initialize name of error and type of error
	MyException(string name = "Unknown error", string error = "This is unknown error.");

	//did nothing
	~MyException();

	//show message about arror which have name of error and type of error
	void WhatException() const;
private:
	//name of error
	string name;

	//type of error
	string error;
};
//==================================================================================================
//convert standart type to string to System::String^
String^ StdToSys(string str);

//convert System::String^ type of string to standart string
const string SysToStd(String^ sysStr);

//return index of string rank of string array for int rank of class
int FindIndex(string str);

//read string data in the file and if there is no problem return data, another throw MyException
string CheckString(istream& is);

//read int data in the file and if there is no problem return data, another throw MyException
int CheckInt(istream& is);

#endif