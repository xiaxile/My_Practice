#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
char a[10001],b[10001];
int tm(int x,int y)
{
	if(x>y) return x; else return y;
}
int mystr(char *s1,char *s2)
{
	for(int i=0;i<tm(strlen(a),strlen(b));++i)
	{
		if(s1[i]-s2[i]!=0)
			return s1[i]-s2[i];
	}
	return 0;
}
int main()
{
	gets(a);gets(b);
	cout<<mystr(a,b);
	return 0;
}
