#include<iostream> //�����Լ��
using namespace std;

int gcd(int , int);			//���Լ�� 
int lcm(int , int , int );  //��С����������������Ϊa, b, �����ǵ����Լ�� 

int main() {
	int a, b, gcdNum;
	
	while (scanf("%d %d", &a, &b) != EOF) {
		gcdNum = gcd(a, b);
		cout << lcm(a, b, gcdNum) << endl;
	}	
	
	return 0;
} 

int gcd(int a, int b) {
	int c;
	c = a % b;
	if (c == 0)
		return b;
	else 
		return gcd(b, c);
}

int lcm(int a, int b, int c) {
	return a * b / c;
} 
