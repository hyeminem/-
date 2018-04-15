#include"stdio.h"
#include<iostream>

int main()
{
	using std::cout;
	using std::endl;
	for(int i=0;i<100000;++i)
	{
		float value = i;
		for(int j=0;j<5;++j)	//对任意一个1到10000的数按照题目的规则来分配五次，分配五次后的值赋给value 
		{
			value = (value-1) * 4/5;
		}
		int temp = (int)value; //判断value经过5次分配后是否是一个整数，也就是如果有第六只猴子，到他分的时候是否能刚好分成5份 
		if(temp==value)
		{
			cout<<i<<"	"<<value<<endl;
		}
	}
	return 0;
 } 
