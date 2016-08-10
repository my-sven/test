#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

// string���͵�double����
void test_str_to_double(char *arg1, char *arg2)
{
	double x;
	double y;
	int i;
	
	x = atof(arg1);
	y = atof(arg2);
	printf("x=%f, y=%f\n",x,y);
	if(x == y)
	{
		printf("x==y: %f,%f\n",x,y);
	}
	i = strcmp(arg1, arg2);
	printf("i=%d\n",i);
	printf("!i=%d\n",!i);
	if(i)
		printf("i=%d is true\n",i);
}

// string����������Ϊ����
void test_string_zarg(string &str)
{
	str = "AAA";
	cout<<"test_string_zarg:"<<str<<endl;
}

// string������Ϊ����
void test_string_arg(string str)
{
	str = "AAA";
	cout<<"test_string_arg:"<<str<<endl;
}

// string���ͳ�ʼ��
void test_string_init()
{
	string str;
	cout<<"string_init:"<<str<<"zz"<<endl;
}

// �ṹ����Ϊmap��key ʱ������ṹ��Ԫ��
typedef struct stu
{
	int num;
	string name;
	bool operator <(const stu& other) const
	{
		if (num < other.num)        //num����������
		{
			return true;
		}
		else if (num == other.num)  //���num��ͬ����name��������
		{
			return name < other.name;
		}
		return false;
	}
}Student;



int main(int argc, char *argv[])
{
	int i;
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}	
	
	if(argc>2)
	{
		test_str_to_double(argv[1], argv[2]);
	}
	
	if(argc>1)
	{
		string str = argv[1];
		test_string_zarg(str);
		cout<<"&str:"<<str<<endl;
		
		str = argv[1];
		test_string_arg(str);
		cout<<"str:"<<str<<endl;
	}
	
	test_string_init();
	
	
	return 0;
}

// this is test 1

