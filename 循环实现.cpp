#include"stdio.h"
#include<iostream>

int main()
{
	using std::cout;
	using std::endl;
	for(int i=0;i<100000;++i)
	{
		float value = i;
		for(int j=0;j<5;++j)	//������һ��1��10000����������Ŀ�Ĺ�����������Σ�������κ��ֵ����value 
		{
			value = (value-1) * 4/5;
		}
		int temp = (int)value; //�ж�value����5�η�����Ƿ���һ��������Ҳ��������е���ֻ���ӣ������ֵ�ʱ���Ƿ��ܸպ÷ֳ�5�� 
		if(temp==value)
		{
			cout<<i<<"	"<<value<<endl;
		}
	}
	return 0;
 } 
