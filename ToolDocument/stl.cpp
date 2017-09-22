#ifndef _ITERATOR_DEBUG_LEVEL
#define _ITERATOR_DEBUG_LEVEL 0
#else
#undef _ITERATOR_DEBUG_LEVEL
#define _ITERATOR_DEBUG_LEVEL 0
#endif

#include <iostream>
#include <string>
#include <algorithm> //�㷨

using namespace std;

//STL standard template libary ��׼ģ(mu)��� C++һ���֣��������Դ�
//Android NDK֧��
//java.lang java.util����API��java��һ����

//string��ʼ��

void main()
{
	//string��c�ַ�������������
	string s1 = "craig david";
	string s2("7 days");
	string s3 = s2;
	string s4(10,'a');

	cout << s4 << endl;

	system("pause");
}

//string����
void main()
{
	string s1 = "craig david";
	//			 ^
	//1 ���鷽ʽ
	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << endl;
	}
	//2 ������ָ��
	for (string::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//3 at����(charAt)
	// ���ܻ��׳��쳣
	try
	{
		for (int i = 0; i < s1.length() + 3; i++)
		{
			cout << s1.at(i) << " ";
		}
	}
	catch (...)
	{
		cout << "�쳣" << endl;
	}


	system("pause");
}


//string�ַ���->c�ַ���ת��
void main()
{
	//string -> char*
	string s1 = "walking away";
	const char* c = s1.c_str();
	printf("%s\n",c);

	//
	string s2 = c;

	//string->char[]
	//��string�и�ֵ�ַ���char[]
	char arr[50] = {0};
	s1.copy(arr,4,0);
	
	cout << arr << endl;

	system("pause");
}


//�ַ���ƴ��
void main()
{
	string s1 = "alan";
	string s2 = "jackson";
	
	//1.
	string s3 = s1 + s2;

	string s4 = " pray";

	//2.
	s3.append(s4);

	cout << s3 << endl;

	system("pause");
}

//�ַ��������滻
void main()
{
	string s1 = "apple google apple iphone";
	//��0��ʼ����"google"��λ��
	int idx = s1.find("google", 0);
	cout << idx << endl;

	//ͳ��apple���ֵĴ���
	int idx_app = s1.find("apple",0);
	//npos�����κ���Ч�±��ֵ
	int num = 0;
	while (idx_app != string::npos)
	{
		num++;
		cout << "�ҵ�������:" << idx_app << endl;
		idx_app+=5;
		idx_app = s1.find("apple", idx_app);
	}

	cout << num << endl;
	system("pause");
}

void main()
{
	string s1 = "apple google apple iphone";
	//0-5��������5���滻Ϊjobs
	s1.replace(0, 5, "jobs");
	cout << s1 << endl;

	//����apple�滻Ϊjobs
	int idx = s1.find("apple", 0);
	while (idx != string::npos)
	{
		s1.replace(idx, 5, "jobs");
		idx += 5;
		idx = s1.find("apple", idx);
	}

	cout << s1 << endl;
	system("pause");
}

//ɾ������ȡ���Ͳ���
void main()
{
	string s1 = "apple google apple iphone";
	//ɾ��a���ҵ�a���ڵ�ָ��
	string::iterator it = find(s1.begin(),s1.end(),'g');
	//ֻ��ɾ��һ���ַ�
	s1.erase(it);
	
	//��ͷĩβ�����ַ���
	s1.insert(0, "macos");
	s1.insert(s1.length(), " facebook");

	cout << s1 << endl;
	system("pause");
}

//java StringBuffer�ſɱ�
//String ���ɱ�
//��Сдת��
void main()
{
	string s1 = "JASON";
	//ԭʼ�ַ�������ʼ��ַ��ԭʼ�ַ����Ľ�����ַ, Ŀ���ַ�������ʼ��ַ, ��������
	transform(s1.begin(), s1.end()-1,s1.begin(), tolower);
	cout << s1 << endl;


	transform(s1.begin(), s1.end() - 1, s1.begin(), toupper);
	cout << s1 << endl;

	system("pause");
}


//����
//Vector
//��ʼ��
#include <vector>
void printVector(vector<int> &v)
{
	//ͨ������ķ�ʽ����
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}
void main()
{
	//1.
	vector<int> v1;
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(15);
	v1.push_back(7);

	//2.
	vector<int> v2 = v1;

	//3.���ָ���
	vector<int> v3(v1.begin(),v1.begin()+2);
	
	printVector(v3);
	

	system("pause");
}

//��� ɾ��
void main()
{
	//��ӵ���β
	vector<int> v1;
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(15);
	v1.push_back(7);

	//����ͷ��
	v1.front() = 11;
	//����β��
	v1.back() = 90;

	//ɾ����β��Ԫ��
	//v1.pop_back();
	while (v1.size() > 0)
	{
		cout << "ĩβ��Ԫ�أ�" << v1.back() << endl;
		v1.pop_back();
	}

	printVector(v1);

	system("pause");
}

//����ķ�ʽ
void main()
{
	vector<int> v1;
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(15);
	v1.push_back(7);

	v1[2] = v1[2] +10;

	//�����ȼ��ڶ�̬����	
	vector<int> v2(10);
	for (int i = 0; i < v2.size(); i++)
	{
		v2[i] = i + 1;
	}

	printVector(v2);

	system("pause");
}

//����������
//�����������ࣨ���򣬷����������
void main()
{
	vector<int> v1;
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(15);
	v1.push_back(7);
	//����
	for (vector<int>::iterator it = v1.begin(); it < v1.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "-----------------" << endl;
	//�������
	for (vector<int>::reverse_iterator it = v1.rbegin(); it < v1.rend(); it++)
	{
		cout << *it << endl;
	}

	system("pause");
}

//ɾ��
void main()
{
	vector<int> v1(10);
	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = i + 1;
	}

	//ɾ��ָ��λ��
	vector<int>::iterator it = v1.begin();
	it += 3;
	v1.erase(it);

	//distance(v1.begin(), it);

	//ɾ������
	v1.erase(v1.begin(), v1.begin() + 3);

	for (vector<int>::iterator it = v1.begin(); it < v1.end(); it++)
	{
		if (*it == 5)
		{		
			printf("%x\n", it);
			vector<int>::iterator tmp = v1.erase(it); //ע���Ժ󿪷��б������汾����
			printf("%x,%x\n",it,tmp);
		}
	}

	//����
	v1.insert(v1.begin() + 2, 100);
	v1.insert(v1.end() - 1, 200);

	printVector(v1);

	system("pause");
}

//˫�����
#include <deque>
void printDeque(deque<int>& q)
{
	for (int i = 0; i < q.size(); i++)
	{
		cout << q[i] << endl;
	}
}

void main()
{
	deque<int> d1;
	//��ӵ�β��
	d1.push_back(2);
	d1.push_back(10);
	//��ӵ�ͷ��
	d1.push_front(-90);
	d1.push_front(-30);	

	//printDeque(d1);

	//cout << d1.front() << endl;
	//cout << d1.back() << endl;

	//�������򵯳�
	//d1.pop_back();
	//d1.pop_front();

	printDeque(d1);

	//���ҵ�һ��-90Ԫ������λ�ã��������
	deque<int>::iterator it = find(d1.begin(),d1.end(),-90);
	if (it != d1.end())
	{
		int idx = distance(d1.begin(), it);
		cout << "����λ��Ϊ��" << idx << endl;
	}


	system("pause");
}

//���ݽṹ �㷨 ����
//Collections.shuff sort