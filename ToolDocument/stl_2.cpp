#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

//���У�û�е�������
/*
void main()
{
	queue<int> q;
	q.push(78);
	q.push(18);
	q.push(20);
	q.push(33);
	
	//q.front();
	//q.back();
	while (!q.empty())
	{
		int tmp = q.front();
		cout << tmp << endl;
		q.pop();
	}	
	system("pause");
}
*/

//���ȼ�����
/*
#include <functional>

void main()
{
	//Ĭ�� ���ֵ���ȼ�
	priority_queue<int> pq1;
	pq1.push(12);
	pq1.push(3);
	pq1.push(40);
	pq1.push(15);

	while (!pq1.empty())
	{
		int tmp = pq1.top();
		cout << tmp << endl;
		pq1.pop();
	}

	cout << "----------" << endl;
	//��Сֵ���ȼ�����
	priority_queue<int, vector<int>,greater<int>> pq2;
	pq2.push(12);
	pq2.push(3);
	pq2.push(40);
	pq2.push(15);

	while (!pq2.empty())
	{
		int tmp = pq2.top();
		cout << tmp << endl;
		pq2.pop();
	}

	system("pause");
}
*/

//ջ
/*
#include <stack>
void main()
{
	stack<int> s;
	for (int i = 0; i < 10; i++)
	{
		s.push(i+1);
	}
	
	while (!s.empty())
	{
		int tmp = s.top();
		cout << tmp << endl;
		s.pop();
	}
	
	system("pause");
}
*/

//list
#include <list>
void printList(list<int>& lst)
{
	//������
	//û�����ء�<�������
	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << endl;
	}
}
//��������
/*
void main()
{
	list<int> lst;
	for (int i = 0; i < 10; i++)
	{
		//β������Ԫ��
		lst.push_back(i);
	}

	//ͷ������Ԫ��
	lst.push_front(80);
	lst.push_front(90);

	list<int>::iterator it = lst.begin();
	it++;
	cout << *it << endl;
	//it = it + 3; ע�⣺��֧���������		

	printList(lst);

	system("pause");
}
*/


//ɾ��
/*
void main()
{
	list<int> lst;
	for (int i = 0; i < 10; i++)
	{
		//β������Ԫ��
		lst.push_back(i);
	}

	list<int>::iterator it = lst.begin();
	//ɾ��
	it++;
	//ɾ���ڶ���Ԫ��
	//lst.erase(it);

	//ɾ�����䣨�Ѿ���ɾ����Ԫ�ز�����ɾ����
	list<int>::iterator it_begin = lst.begin();
	list<int>::iterator it_end = lst.begin();
	it_end++;
	it_end++;
	it_end++;
	lst.erase(it_begin, it_end);

	//ֱ�Ӹ�������ɾ��Ԫ��
	lst.remove(5);

	printList(lst);

	system("pause");
}
*/

//list���루Ӧ�ã�Ƶ�����޸ģ�
//vector��Ӧ�ã��������v[100]��
/*
void main()
{
	list<int> lst;
	for (int i = 0; i < 10; i++)
	{
		//β������Ԫ��
		lst.push_back(i);
	}

	list<int>::iterator it = lst.begin();
	it++;
	lst.insert(it, 100);

	printList(lst);
	system("pause");
}
*/

//set Ԫ��Ψһ Ĭ�ϴ�С����
#include <set>

void printSet(set<int> &s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}
}
/*
void main()
{
	set<int> s;
	//���Ԫ��
	for (int i = 0; i < 10; i++)
	{
		s.insert(i+1);
	}
	s.insert(20);
	s.insert(15);
	s.insert(15);

	//ɾ��
	set<int>::iterator it = s.begin();
	it++;
	s.erase(it);	

	printSet(s);
	system("pause");
}
*/

//Ԫ�ذ��մӴ�С����
/*
#include <functional>
void main()
{
	//ͬJava�У�Map<String,List<String>> 
	set<int,greater<int>> s;
	s.insert(10);
	s.insert(5);
	s.insert(20);
	s.insert(99);

	for (set<int,greater<int>>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}

	system("pause");
}
*/

//Ԫ������ΪTeacher���󣬰�����������
/*
class Teacher
{
public:
	Teacher(char* name, int age)
	{
		this->name = name;
		this->age = age;
	}

	void print()
	{
		cout << name << "," << age << endl;
	}	

public:
	char* name;
	int age;
};

//�Զ����������
//�º���
struct MyAgeSorter
{
	bool operator()(const Teacher &left, const Teacher &right)
	{
		return left.age < right.age;
	}
};

void main()
{
	set<Teacher, MyAgeSorter> s;
	s.insert(Teacher("jack",18));
	s.insert(Teacher("rose", 20));
	s.insert(Teacher("jason", 22));
	s.insert(Teacher("alan", 5));
	//s.insert(Teacher("jimy", 5)); //�������

	for (set<Teacher>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it).name << "," << (*it).age << endl;
	}

	system("pause");
}
*/

//set����
/*
void main()
{
	set<int> s;
	//���Ԫ��
	for (int i = 0; i < 10; i++)
	{
		s.insert(i + 1);
	}

	//printSet(s);

	//����4��Ԫ��ָ��
	set<int>::iterator s_4 = s.lower_bound(4); 
	//cout << *s_4 << endl;
	//����4��Ԫ��ָ��
	set<int>::iterator s_5 = s.upper_bound(4);
	//cout << *s_5 << endl;

	//һ���Ի�ȡ����4��Ԫ��ָ�룬�ʹ���4��Ԫ��ָ��\
	//BasicNameValuePair
	pair<set<int>::iterator, set<int>::iterator> p = s.equal_range(4);
	cout << *p.first << endl;
	cout << *p.second << endl;
	system("pause");
}
*/


//multiset �����ظ���Ԫ��
/*
void main()
{
	multiset<int> s;
	s.insert(2);
	s.insert(8);
	s.insert(2);
	s.insert(8);

	for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout <<  *it << endl;
	}

	system("pause");
}
*/


//map���Ԫ�صķ�ʽ
#include <map>
#include <string>
/*
void main()
{
	//key -> value
	//1.
	map<int, string> map1;
	map1.insert(pair<int, string>(1,"jack"));
	map1.insert(pair<int, string>(2, "rose"));

	//2
	map1.insert(make_pair(3,"jason"));

	//3
	map1.insert(map<int,string>::value_type(4,"alan"));

	//4
	map1[5] = "jimmy"; //map["NO1"] = 90;

	//ǰ���ַ�ʽ�����key�Ѿ����ڣ��ظ���ӻᱨ��
	//�����ַ�ʽ�����key�Ѿ����ڣ��ظ���ӻḲ��
	
	//�������
	for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++)
	{
		cout << it->first << "," << it->second << endl;		
	}


	system("pause");
}

*/

void printMap(map<int, string> &map1)
{
	for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++)
	{
		cout << it->first << "," << it->second << endl;
	}
}

//ɾ��
/*
void main()
{
	map<int, string> map1;
	map1.insert(pair<int, string>(1, "jack"));
	map1.insert(pair<int, string>(2, "rose"));
	map1.insert(pair<int, string>(3, "jason"));	

	map<int, string>::iterator it = map1.begin();
	it++;
	map1.erase(it);

	printMap(map1);

	system("pause");
}
*/

//��ӵĽ��
/*
void main()
{
	map<int, string> map1;
	map1.insert(pair<int, string>(1, "jack"));
	map1.insert(pair<int, string>(2, "rose"));
	map1.insert(pair<int, string>(3, "jason"));
	//��ȡ��ӵĽ����firstԪ��ָ�룬second �Ƿ�ɹ���
	pair<map<int, string>::iterator, bool> res = map1.insert(pair<int, string>(3, "alan"));
	if (res.second)
	{
		cout << "��ӳɹ�" << endl;
	}
	else
	{
		cout << "���ʧ��" << endl;
	}

	printMap(map1);

	system("pause");
}
*/


//����
/*
void main()
{
	map<int, string> map1;
	map1.insert(pair<int, string>(1, "jack"));
	map1.insert(pair<int, string>(2, "rose"));
	map1.insert(pair<int, string>(3, "jason"));	

	printMap(map1);

	cout << "---------" << endl;

	//��ȡkey���ڴ���5��Ԫ�ص�ֵ
	pair<map<int, string>::iterator, map<int, string>::iterator> p = map1.equal_range(2);
	if (p.first != map1.end()){
		//����2��Ԫ��key value
		cout << p.first->first << p.first->second << endl;

		//����2��Ԫ��key value
		cout << p.second->first << p.second->second << endl;
	}

	system("pause");
}
*/

//һ��key��Ӧ���value
//һ�����Ŷ��Ա��
//multimap
/*
class Employee
{
public:
	Employee(char* name,int age)
	{
		this->name = name;
		this->age = age;
	}

public:
	char* name;
	int age;
};

void main()
{
	multimap<string, Employee> map1;
	
	//������
	map1.insert(make_pair("����", Employee("��ǳ", 20)));
	map1.insert(make_pair("����", Employee("���", 20)));

	//����
	map1.insert(make_pair("����", Employee("Сӱ", 16)));
	map1.insert(make_pair("����", Employee("rose", 20)));

	//����
	map1.insert(make_pair("����", Employee("����", 30)));
	map1.insert(make_pair("����", Employee("�Ǻ�", 30)));

	//�������
	for (multimap<string, Employee>::iterator it = map1.begin(); it != map1.end(); it++)
	{
		cout << it->first << "," << it->second.name  << "," << it->second.age << endl;
	}

	cout << "----------------" << endl;
	//ֻ��ȡ�����񡱲���Ա��
	//��ȡ�����񲿡�Ա���ĸ�����key��Ӧ��value�ĸ���
	int num = map1.count("����");
	multimap<string, Employee>::iterator it = map1.find("����");
	int c = 0; //����ѭ���Ĵ���
	while (it != map1.end() && c < num)
	{		
		cout << it->first << "," << it->second.name << "," << it->second.age << endl;
		it++;
		c++;
	}

	system("pause");
}
*/

//�����ǳ����
/*
class Employee
{
public:
	//���캯��
	Employee(char* name, int age)
	{		
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}

	//��������
	~Employee()
	{
		if (this->name != NULL)
		{
			delete[] this->name;
			this->name = NULL;
			this->age = 0;
		}
	}
	//�������캯��
	//Employee e = 
	Employee(const Employee &obj)
	{
		this->name = new char[strlen(obj.name) + 1];
		strcpy(this->name, obj.name);
		this->age = obj.age;
	}

	//����=
	//e1 = e2;
	Employee& operator=(const Employee &obj)
	{
		//�ͷžɵ��ڴ�
		if (this->name != NULL)
		{
			delete[] this->name;
			this->name = NULL;
			this->age = 0;
		}

		//���·���
		this->name = new char[strlen(obj.name) + 1];
		strcpy(this->name, obj.name);
		this->age = obj.age;

		return *this;
	}

public:	
	char* name;
	int age;
};

void func()
{
	vector<Employee> v1;
	Employee e1("jack",20);	
	v1.push_back(e1);
}

void main()
{
	//vector<Employee> v1;
	//Employee e1("jack",20);
	//��e1������vector��
	//v1.push_back(e1);

	func();

	system("pause");
}
*/
