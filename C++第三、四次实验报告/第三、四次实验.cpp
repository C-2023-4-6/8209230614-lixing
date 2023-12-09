/*#include<iostream>
using namespace std;
int m_1(int a, int b)
{
	int z;
	for (int i = 1; i < a && i < b; i++)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			z = i;
		}
	}
	return z;
}
int main()
{
	int m, n;
	cin >> m;
	cin >> n;
	int rel = m_1(m,n);
	cout << "m和n的最大公约数是：" << rel << endl;
	cout << "m和n的最小公倍数是："<<(m/rel)*(n/rel)*rel<<endl;
	system("pause");
	return 0;
}*/     //第三次实验第一题




/*#include<iostream>
using namespace std;
bool is_prime(int num);
bool is_prime(int num)
{
	int z;
	if (num == 1) 
	{ 
		z = 0;
	}
	else if (num == 2)
	{
		z = num;
	}
	else
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				z = 0;
				break;
			}
			else 
			{
				z = num;
			}
		}
	}
	if (z == 0) { return false; }
	else  { return true; }
}
int main()
{
	int m = 0;
	cout << "素数有：";
	for (int i = 1; m<i; i++)
	{
		if (is_prime(i)==1)
		{
			cout << i << " ";
			m++;
			if (m % 10 == 0)
			{
				cout << endl;
			}
			if(m==200)
			{
				break;
			}
		}
		
	}
	cout << endl;
	system("pause");
	return 0;
}*/       //第三次实验第二题




/*#include<iostream>
using namespace std;
#include "mytriangle.h"
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	bool m = is_valid(a, b, c);
	if (m == 1)
	{
		cout << "面积为：" << _area(a, b, c) << endl;
	}
	else
	{
		cout << "输入不合法" << endl;
	}
	system("pause");
	return 0;
}*/      //第三次实验第四题




/*#include<iostream>
using namespace std;
int f(int x)
{
	    int t;
		if (x == 1)
		{
			t = 1;
		}
		else
		{
			t = (f(x - 1) + 1) * 2;
		}
		return t;
}
int main()
{
	cout << "第一天摘的桃子个数:" << f(10) << endl;
	system("pause");
	return 0;
}*/       //第三次实验第五题





/*#include<iostream>
using namespace std;
int main()
{
	const int max = 10;
	int arr[max];
	cout << "Enter ten numbers:";
	for ( int i = 0; i < max; i++)
	{
		 cin>> arr[i];
	}
	cout << "The distinct numbers are:";
	cout << arr[0] << " ";
	for (int j = 1; j<max; j++)
	{
		for (int k = 0; k <j; k++)
		{
			if (arr[j] != arr[k])
			{
				if (k == j - 1)
				{
					cout << arr[j] << " ";
				}
				else
				{
					continue;
				}
			}
			else
			{
				break;
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}*/       //第四次实验（一）第一题




/*#include<iostream>
using namespace std;
void order(double arr[])
{
	for (int j = 0; j < 9; j++)
	{
		for (int k = 0; k < 9-j; k++)
		{
			double m;
			if (arr[k] > arr[k+1])
			{
				m = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = m;
			}
			else
			{
				continue;
			}
		}
	}
	for (int l = 0; l < 10; l++)
	{
		cout << arr[l] << " ";
	}
}
int main()
{
	double arr[10];
	cout << "排序前：";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "排序后：";
	order(arr);
	system("pause");
	return 0;
}*/         //第四次实验（一）第二题





/*#include<iostream>
using namespace std;
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int k = j; k < 100; k += j + 1)
		{
			if (arr[k])
			{
				arr[k] = false;
			}
			else
			{
				arr[k] = true;
			}
		}
	}
	for (int m = 0; m < 100; m++)
	{
		if (arr[m])
		{
			cout << m + 1 << " ";
		}
		else
		{
			continue;
		}
	}
	system("pause");
	return 0;
}*/         //第四次实验（一）第三题





/*#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int k = 0; k < size1; k++)
	{
		list3[k] = list1[k];
	}
	for (int l = 0; l < size2; l++)
	{
		list3[size1 + l] = list2[l];
	}
	int size3 = size1 + size2;
	for (int m = 1; m < size3; m++)
	{
		for (int n = 0; n < size3 - m; n++)
		{
			if (list3[n] > list3[n + 1])
			{
				int temp = list3[n];
				list3[n] = list3[n + 1];
				list3[n + 1] = temp;
			}
		}
	}
	for (int p = 0; p < size3; p++)
	{
		cout << list3[p] << " ";
	}
}
int main()
{
	 int size1, size2, size3;
	cout << "Enter list1:";
	cin >> size1;
	int list1[80];
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	int list2[80];
	for (int j = 0; j< size2; j++)
	{
		cin >> list2[j];
	}
	size3 = size1 + size2;
	int list3[80];
	cout << "The merged list is:";
	merge( list1,  size1,  list2,  size2, list3);
	system("pause");
	return 0;
}*/        //第四次实验（一）第四题







/*#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int a, b,index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool s3[10086];
	for (int  m= 0;  m< a; m++)
	{
		s3[m] = false;
	}
	for (int i = 0; i < b - a + 1; i++)
	{
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)
		{
			if (s1[j] == s2[k])
			{
				index = i;
				s3[j] = true;
			}
			int h = 0;
			for (int n = 0; n < a; n++)
			{
				if (s3[n] == false && i == b - a)
				{
					return -1;
					
				}
				if (s3[n])
				{
					h++;
				}
			}
			if (h == a)
			
				return index;
			
		}
	}

}

int main()
{
	const int size = 10086;
	char s1[size];
	char s2[size];
	cout << "Enter the first string: ";
	cin.getline(s1, size);
	cout << "Enter the second string:";
	cin.getline(s2, size);
	cout << "indexOf(\""<<s1<<"\",\""<<s2<<"\") is:" << indexOf(s1, s2) << endl;
	system("pause");
	return 0;
}*/         //第四次实验（一）第五题






/*#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int a = strlen(s);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (((int)s[i] == (65+j)) || ((int)s[i] == (97+j)))
			{
				counts[j]++;
			}
		}
	}
	for (int k = 0; k < 26; k++)
	{
		if (counts[k] != 0)
		{
			cout << (char)(k + 65) << ":  " << counts[k] << "  times" << endl;
		}
	}
}
int main()
{
	int counts[26] = {};
	cout << "Enter a string:";
	char s[10086];
	cin.getline(s, 10086);
	count(s, counts);
	system("pause");
	return 0;
}*/          //第四次实验（一）第六题




/*#include<iostream>
using namespace std;
int indexOf(const char * s1, const char * s2)
{
	int a, b, index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool s3[10086];
	for (int m = 0; m < a; m++)
	{
		s3[m] = false;
	}
	for (int i = 0; i < b - a + 1; i++)
	{
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)
		{
			if (s1[j] == s2[k])
			{
				index = i;
				s3[j] = true;
			}
			int h = 0;
			for (int n = 0; n < a; n++)
			{
				if (s3[n] == false && i == b - a)
				{
					return -1;

				}
				if (s3[n])
				{
					h++;
				}
			}
			if (h == a)

				return index;

		}
	}

}

int main()
{
	const int size = 10086;
	char s1[size];
	char s2[size];
	cout << "Enter the first string: ";
	cin.getline(s1, size);
	cout << "Enter the second string:";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is:" << indexOf(s1, s2) << endl;
	system("pause");
	return 0;
}*/         //第四次实验（二）第2.（1）题






/*#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int a = strlen(hexString);
	int b = 0;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < 6; k++)
		{
			if (((int)hexString[a - 1 - i] - 65) == k)
			{
				b = (10 + k) * pow(16,i) + b;
			}
		}
	}      //算字母部分
	
	for (int j = 0; j < a; j++)
	{
		for (int h = 0; h < 10; h++)
		{
			if (((int)hexString[a - 1 - j]-48) == h)
			{
				b = h * pow(16,j) + b;
			}
		}
	}      //算数字部分
	return b;
}
int main()
{
	cout << "请输入十六进制的数：";
	char hexString[10086];
	cin.getline(hexString, 10086);
	cout << "输出的十进制数为：" << parseHex(hexString) << endl;
	system("pause");
	return 0;
}*/              //第四次实验（二）第2.（2）题






/*#include<iostream>
using namespace std;
void arrange(int p[],int size)
{
	for (int k = 0; k < size; k++)
	{
		for (int j = 0; j < size-1-k; j++)
		{
			if (*(p+j) > *(p +j + 1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}
int main()
{
	int size;
	cout << "请输入数组元素个数: ";
	cin >> size;
	int* p = new int[size];
	cout << "请输入数组元素： ";
	for (int i = 0; i < size; i++)
	{
		cin >> *(p + i);
	}
	int a;
	cout << "请输入想要观察的指针： ";
	cin >> a;
	cout << "指针指向内容为： " << "p[" << a - 1 << "]" << "=" << *(p+a-1) << endl;
	cout << "排序后输出： ";
	arrange(p, size);
	for (int h = 0; h < size; h++)
	{
		cout << *(p + h)<<" ";
	}
	cout << endl;
	delete p;
	system("pause");
	return 0;
}*/               //第四次实验（二）第2.（3）题

