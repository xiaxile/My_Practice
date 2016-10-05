#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
const int rn[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},pn[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
struct dates
{
	int year;
	int month;
	int day;
};
bool r(int year)
{
	if(year%100)
	{
		if(year%4)
			return false;
		else
			return true;
	}
	else
		if(year%400)
			return false;
		else
			return true;
}
int main()
{
	dates d;
	int da=0;
	cin>>d.year>>d.month>>d.day;
	if(r(d.year))
		for(int i=0;i<d.month;++i)
			da+=rn[i];
	else
		for(int i=0;i<d.month;++i)
			da+=pn[i];
	da+=d.day;
	cout<<da;
	return 0;
}
