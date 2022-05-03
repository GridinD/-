#include <iostream>
#include <locale.h>
using namespace std; 

class Software {
protected:
	string maker; 
	string name; 

	public:
		string GetMaker() {
			return this->maker;
		}
		string GetName() {
			return this->name;
		}
		void SetMaker(string make) {
			this->maker = make; 
		}
		void SetName(string nm) {
			this->name = nm;
		}

		void GetInfoAll() {
			cout << "Производитель: " << this->maker << endl;
			cout << "Название программы: " << this->name << endl;
		}
}; 

class VisualStudio : public Software {
private: 
	int lastversion;
public:
	VisualStudio(int last, string make, string nm) {
		this->lastversion = last;
		this->maker = make;
		this->name = nm;
	}
	int GetVers() {
		return this->lastversion;
	}
	void SetVers(int last) {
		this->lastversion = last;
	}

	void GetInfo() {
		GetInfoAll();
		cout << "Последняя версия: " << this->lastversion << endl;
		cout << endl;
	}

}; 

class NetBeans : public Software {
private:
	int lastversion;
public:
	NetBeans(int last, string make, string nm) {
		this->lastversion = last;
		this->maker = make;
		this->name = nm;
	}
	
	int GetVers() {
		return this->lastversion;
	}

	void SetVers(int last) {
		this->lastversion = last;
	}
	void GetInfo() {
		GetInfoAll();
		cout << "Последняя версия: " << this->lastversion << endl;
		cout << endl;
	}
}; 

class Eclipse : public Software {
private:
	int lastversion;
public:
	Eclipse(int last, string make, string nm) {
		this->lastversion = last;
		this->maker = make;
		this->name = nm;
	}

	int GetVers() {
		return this->lastversion;
	}

	void SetVers(int last) {
		this->lastversion = last;
	}
	void GetInfo() {
		GetInfoAll();
		cout << "Последняя версия: " << this->lastversion << endl;
		cout << endl;
	}
};

int main() {
	setlocale(LC_CTYPE, "Russian");
	VisualStudio prog1 = VisualStudio(17, "Microsoft Corporation", "Visual Studio");
	NetBeans prog2 = NetBeans(13, "	Apache Software Foundation", "NetBeans");
	Eclipse prog3 = Eclipse(4, "Eclipse Foundation", "Eclipse");

	prog1.GetInfo();
	prog2.GetInfo();
	prog3.GetInfo();
}
