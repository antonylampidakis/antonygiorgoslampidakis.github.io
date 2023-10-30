// ConsoleApplication26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace::std;

class Cpu
{
public:
	Cpu(const string&, const string&, int = 0, int = 0, int = 0);

	void setCompany(const string&);
	string getCompany() const;

	void setCpuId(const string&);
	string getCpuId() const;

	void setCores(int);
	int getCores() const;

	void setThreads(int);
	int getThreads() const;

	void setFrequency(int);
	int getFrequency() const;

	virtual void print() const; // virtual

private:
	string Company;		//cmp
	string CpuId;		//cid
	int Cores;			//cr
	int Threads;		//thr
	int Frequency;	    //frq
};

//constructor
Cpu::Cpu(const string& cmp, const string& cid, int cr, int thr, int frq)
	:Company(cmp), CpuId(cid), Cores(cr), Threads(thr), Frequency(frq)
{
	//empty body
}// end Cpu constructor


// set company
void Cpu::setCompany(const string& cmp)
{
	Company = cmp;
}

//return Company
string Cpu::getCompany() const
{
	return Company;
}

//set CpuId
void Cpu::setCpuId(const string& cid)
{
	CpuId = cid;
}

//Return CpuId
string Cpu::getCpuId() const
{
	return CpuId;
}

//Set cores
void Cpu::setCores(int cr)
{
	Cores = cr;
}

//Return cores
int Cpu::getCores() const
{
	return Cores;
}

//Set Threads
void Cpu::setThreads(int thr)
{
	Threads = thr;
}

//Return Threads
int Cpu::getThreads() const
{
	return Threads;
}

//set Frequnecy
void Cpu::setFrequency(int frq)
{
	Frequency = frq;
}

//Return Frequnecy
int  Cpu::getFrequency() const
{
	return Frequency;
}

void Cpu::print() const
{
	cout << getCompany() << ' ' << getCpuId() << ' ' << getCpuId() << ' ' << getCores() << ' ' << getThreads()
		<< ' ' << getFrequency() << endl;
}


//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

class Plc : public Cpu
{
public:
	Plc(const string&, const string&, int = 0, int = 0, int = 0, int = 0);

	void setSlots(int);
	int getSlots() const;

	virtual void print() const;


private:
	int Slots; //st
};

// constructor
Plc::Plc(const string& cmp, const string& cid, int cr, int thr, int frq, int st)
	:Cpu(cmp, cid, cr, thr, frq)
{
	setSlots(st);
}

// set salary
void Plc::setSlots(int st)
{
	if (st > 0)
		Slots = st;
	else
		throw invalid_argument("Slots must be >0 ");
}

// return slot
int Plc::getSlots() const
{
	return Slots;
}

void Plc::print() const
{
	cout << "Cpu data :";
	Cpu::print();
	cout << " Slots number:" << getSlots();

}


//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

class DKit : public Cpu {
public:
	DKit(const string&, const string&, int = 0, int = 0, int = 0, int = 0);

	void setRom(int);
	int getRom() const;

	virtual void print() const;


private:
	int Rom;   //rm
};


DKit::DKit(const string& cmp, const string& cid, int cr, int thr, int frq, int rm) : Cpu(cmp, cid, cr, thr, frq)
{
	setRom(rm);
}

// set Rom
void DKit::setRom(int rm)
{
	if (rm > 0)
		Rom = rm;
	else
		throw invalid_argument("Rom must be >0 ");
}

// return slot
int DKit::getRom() const
{
	return Rom;
}

void DKit::print() const
{
	cout << "Cpu data :";
	Cpu::print();
	cout << " Rom :" << getRom();

}
//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------
class EmbeddedSys : public  DKit
{
public:
	EmbeddedSys(const string&, const string&, int = 0, int = 0, int = 0, int = 0, int = 0);

	void setSensors(int);
	int getSensors() const;

	virtual void print() const;

	friend ostream& operator<<(ostream& tout, EmbeddedSys i){
    tout<< "Company"<<i.getCompany()<<endl;
    tout<< "CpuId "<<i.getCpuId()<<endl;
    tout<<"Cores"<<i.getCores()<<endl;
    tout<<"Threads"<<i.getThreads()<<endl;
    tout<<"Frequency"<<i.getFrequency()<<endl;
    tout<<"Rom"<<i.getRom()<<endl;
    tout<<"Sensors"<<i.getSensors()<<endl;
    }

    void printf(ofstream& tout){
        tout<< "Company"<<getCompany()<<endl;
        tout<< "CpuId "<<getCpuId()<<endl;
        tout<<"Cores"<<getCores()<<endl;
        tout<<"Threads"<<getThreads()<<endl;
        tout<<"Frequency"<<getFrequency()<<endl;
        tout<<"Rom"<<getRom()<<endl;
        tout<<"Sensors"<<getSensors()<<endl;
    }


private:
	int Sensors; // snr
};


//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------

void virtualViaPointer(const Cpu* const);
void virtualViaReferences(const Cpu&);

//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------

EmbeddedSys::EmbeddedSys(const string& cmp, const string& cid, int cr, int thr, int frq, int rm, int snr)
	: DKit(cmp, cid, cr, thr, frq, rm)
{
	setSensors(snr);


}


// set Sensors
void EmbeddedSys::setSensors(int snr)
{
	if (snr > 0)
		Sensors = snr;
	else
		throw invalid_argument("Sensors must be >0 ");
}

// return Sensors
int EmbeddedSys::getSensors() const
{
	return Sensors;
}

void EmbeddedSys::print() const
{
	cout << "Development kit data ";
	DKit::print();
	cout << "Sensors" << getSensors();
}



//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

void virtualViaPointer(const Cpu* const CpuPtr)
{
	CpuPtr->print();

}

//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

// call Employee virtual functions print and earnings off a
// base-class reference using dynamic binding

void virtualViaReference(const Cpu& CpuRef)
{
	CpuRef.print();

}


// --------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

int main()
{
	Plc plc("Intel", "i9", 16, 8, 4, 2);

	DKit dkit("Amd", "Ryzen", 8, 4, 2, 2);

	EmbeddedSys embeddedsys("Siemens", "587i", 4, 2, 2, 1, 5);

	vector < Cpu*> cpu(3);


	cpu[0] = &plc;
	cpu[1] = &dkit;
	cpu[2] = &embeddedsys;



	cout << "Employees processed polymorphically via dynamic binding:\n\n";



	// call virtualViaPointer to print each Employee's information
	// and earnings using dynamic binding
	cout << "Virtual function calls made off base-class pointers:\n\n";



	for (size_t i = 0; i < cpu.size(); ++i)
		virtualViaPointer(cpu[i]);



	cout << endl;
	cout << "*********************************************************************" << endl;
	cout << "*********************************************************************" << endl;

	for (size_t i = 0; i < cpu.size(); ++i)
		virtualViaReference(*cpu[i]);

	cout << endl;
	cout << "*********************************************************************" << endl;
	cout << "*********************************************************************" << endl;

//-------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------
	ofstream f("Results.txt");
	embeddedsys.printf(f);


//-------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------


}
