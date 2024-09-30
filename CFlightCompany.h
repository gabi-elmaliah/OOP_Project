#pragma once
#include <string>
#include "CCrewMember.h"
#include "CPlane.h"
#include "CFlight.h"
using namespace std;
class CFlightCompany
{
public:
	static const int MAX_CREW = 18;
	static const int MAX_PLANES = 18;
	static const int MAX_FLIGHTS = 18;


private :
	string name;
	CCrewMember* crewMembers[MAX_CREW];
	int numOfCrewMembers;
	CPlane* planes[MAX_PLANES];
	int numOfPlanes;
	CFlight* flights[MAX_FLIGHTS];
	int numOfFlights;
	


public:

	CFlightCompany(string name);
	CFlightCompany(CFlightCompany& other);
	~CFlightCompany();


	string getCompanyName()const;
	void SetName(string name);
	bool AddCrewMember(const CCrewMember& p);
	bool AddPlane(const CPlane& p);
	bool AddFlight(const CFlight& p);
	void  AddCrewToFlight(int flightNumber, int crewMemberId);
	const CPlane* GetPlane(int i)const ;
	void Print(std::ostream& os)const;

	friend ostream& operator<<(ostream& os, const CFlightCompany& p);
	const CFlightCompany& operator=(const CFlightCompany& p);

private:
	CFlight* getFlight(int crewMemberNum) const;
	CCrewMember* getCrewMember(int crewMemberNum)const;



};

