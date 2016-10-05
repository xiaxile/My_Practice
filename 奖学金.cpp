#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
struct student
{
	int sun;
	int chi;
	int num;
};
int main()
{
	int n,a,b,c;
	student stu[601],t;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a>>b>>c;
		stu[i].sun=a+b+c;
		stu[i].chi=a;
		stu[i].num=i;
	}
	for(int i=1;i<n;++i)
		for(int j=i+1;j<=n;++j)
			if(stu[i].sun<stu[j].sun)
				t=stu[i]; stu[i]=stu[j]; stu[j]=t;
	for(int i=1;i<n;++i)
		for(int j=i+1;j<=n;++j)
			if(stu[i].sun==stu[j].sun&&stu[i].chi<stu[j].chi)
				t=stu[i]; stu[i]=stu[j]; stu[j]=t;
	for(int i=1;i<=5;++i)
		cout<<stu[i].num<<" "<<stu[i].sun<<endl;
	return 0;
}
