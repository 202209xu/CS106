#include<iostream>
#include<math.h>
#include<string>
using namespace std;

/* void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 17;
	int y = 35;
	swap(x, y);
	cout << x << y << endl;
	return 0;
}
*/

/*void quadratic(int a, int b, int c, double& root1, double& root2) {
	double d = sqrt(b * b - 4 * a * c);
	root1 = (-b + d) / (2 * a);
	root2 = (-b - d) / (2 * a);

}


int main() {
	double root1, root2;
	quadratic(1, -3, -4, root1, root2);
	cout << root1 << root2;
	return 0;

	
	

}
*/

/*void mystery(string a, string& b) {
	a.erase(0, 1);//删除从Index=0开始的第一个字符；
	b += a[0];
	b.insert(3, "FOO");

}

int main() {
	string a = "marty";
	string b = "stepp";
	mystery(a, b);
	cout << a << " " << b << endl;
	return 0;
}
*/

/*void nameDiamond(string name) {
	for (int i = 0; i < name.length(); i++) {
		cout << name.substr(0, i + 1)<<endl;
	}
	for (int i = 1; i < name.length(); i++) {
		for (int j = 0; j < i; j++) {
			cout << " " ;
		}
		cout << name.substr(i) << endl;
	}

}

int main() {
	nameDiamond("MARTY");

	return 0;
}
*/

/*double function(double& x) {
	double a;
	a = x * x + 1;
	cout << a << endl;
	return 0; //非void类型的函数必须返回值；
}

int main() {
	double x;
	cin >> x ;
	function(x);
	return 0;
}
*/

/*void Gcd(int& x, int& y) {
	int r;
	r = x % y;
	while (r != 0) {
		x = y;
		y = r;
		r = x % y;
	}
	r = y;
	cout << r << endl;
}

int main() {
	int x , y;
	cin >> x >>y;
	Gcd(x, y);
	return 0;
}
*/

/*int combinations(int n, int k);
int fact(int n); // 多个函数的时候加上prototype；
int combinations(int n,int k) {
	return fact(n) / (fact(k) *fact(n - k));
}
int fact(int n) {
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << combinations(n, k) << endl;
	return 0;
}
*/
//01
/*void transferF(int C) {
	int F;
	F = C * 1.832;
	cout << F << endl;
}
void transferC(int F) {
	int C;
	C = (F - 32) * 1.8;
	cout << C << endl;
}
int main() {
	int C;
	cin >> C ;
	transferF(C);
	int F;
	cin >> F;
	transferC(F);
	
	return 0;
}
*/
//03
/*void roundToNearestInt(int x) {
	int c;
	if (x > 0) {
		c = round(x);
		cout << c << endl;
	}
	int  m;
	if (x < 0) {
		m = round(x);
		cout << m << endl;
	}
}
int main() {
	int x;
	cin >> x;
	roundToNearestInt(x);
	return 0;
}
*/
//04
/*void windChill(double t, double v) {
	double wC;
	if (v == 0) {
		wC = t;
	}
	else if (t > 40) {
		cout << "error" << endl;
	}
	else {
		wC = 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);
	}
	cout << wC << endl;
}
int main() {
	double t, v;
	cin >> t >> v;
	windChill(t, v);
	return 0;
}
*/
//05
/*void isPerfect(int x) {
	int sum = 0;
	for (int i = 1; i < x; i++) {
		if (x % i == 0) {
			sum += i;
		}
	}
	if (sum == x) {
		cout << "true" << endl;
		cout << x << endl;
	}
}
int main() {
	int x=2;
	for (x = 2; x < 9999; x++) {
		isPerfect(x);
	}
	
	return 0;
}
*/
//06 
//快速幂写法
/*int power(int x, unsigned int y, int p) {
	int res = 1;
	x = x % p;
	while (y > 0) {
		if (y & 1) {
			res = (res * x) % p;
		}
		y = y >> 1;//y=y/2
		x = (x * x) % p;
	}
	return res;

}
bool millerTest(int d, int n) {
	int a = 2 + rand() % (n - 4);
	int x = power(a, d, n); //计算a的d次方处于n的余数
	if (x == 1 || x == n - 1) {
		return true;
	}
	while (d != n - 1) {
		x = (x * x) % n;
		d *= 2;
		if (x == 1) {
			return false;
		}
		if (x == n - 1) {
			return true;
		}
	}
	return false;
}
bool isPrime(int n, int k) {
	if (n <= 1 || n == 4) return false;
	if (n <= 3)return true;
	int d = n - 1;
	while (d % 2 == 0) {
		d /= 2;
	}
	for (int i = 0; i < k; i++) {
		if (!millerTest(d, n))
			return false;
	}
	return true;

}
int main() {
	int k = 4;
	for (int n = 1; n <= 100; n++) {
		if (isPrime(n, k)) {
			cout << n << " " << endl;
		}
	}
	return 0;
}
*/
//07
/*void searchSqrt(double x) {
	double g = x / 2;
	double m = x / g;
	double mean = (g + m) / 2;
	while (mean != g and mean != m) {
		g = mean;
		m = x/ g;
		mean = (g + m) / 2;
	}
	if (mean == g || mean == m) {
		cout << mean << endl;
	}

}
int main() {
	double x;
	cin >> x ;
	searchSqrt(x);

	return 0;
}
*/
//08
/*void findEaster(int year) {
	string month;
	int day;
	int a = year % 19;
	int b = year % 4;
	int c = year % 7;
	int d;
	int e{};
	if (a == b == c) {
		d = 0;
	}
	else {
		d = (19 * a + 13) % 30;
	}
	if (year >= 1700 and year <= 1799) {
		e = (2 * b + 4 * c + 6 * d + 3) % 7;
	}
	if (year >= 1800 and year <= 1899) {
		e = (2 * b + 4 * c + 6 * d + 4) % 7;
	}
	if (e > 9) {
		day = d + e - 9;
		month = "April";
	}
	
	if (e <= 9) {
			day = 22 + d + e;
			if (day > 31) {
				day = day - 31;
			}
			month = "April";
	}
	cout << year << month << day << endl;
	
}
int main() {
	int year;
	cin >> year;
	findEaster(year);
	
	return 0;
}
*/
//常用求Easter day
/*void findEaster(int year) {
	float a,b,c,p,q,m,n,d,e;
	a = year % 19;
	b = year % 4;
	c = year % 7;
	p = floor((float) year/100.0);
	q = float ((float) (13+8*p)/25.0);
	m = (int)(15-q+p-(floor)(p/4)) % 30;
	n = (int)(4+p-(floor)(p/4)) % 7;
	d = (int)(19 * a + m) % 30;
	e = (int)(2 * b + 4 * c + 6 * d + n) & 7;
	int days = (int)(22 + d + e);
	if ((d == 29) && (e == 6)) {
		cout << year << "-04-19";
		return;
	}
	else if ((d == 28) && (e == 6)) {
		cout << year << "-04-18" << endl;
		return;
	}
	else {
		if (days > 31) {
			cout << year << "-04-" << (days - 31) << endl;
			return;
		}
		else {
			cout << year << "-03-" << days;
			return;
		}

	}
}
int main() {
	int y;
	cin >> y ;
	findEaster(y);
	return 0;
}
*/
//09
/*int power(int x) {
	int ans = 1;
	while (x >= 1) {
		ans *= x;
		x = x - 1;
	}
	return ans;
}
void permutations(int m, int k) {
	int q = power(m);
	int p = power(m-k);
	int res = q / p;
	cout << res << endl;
}
int main() {
	int a, b;
	cin >> a >> b;
	permutations(a, b);
	return 0;
}
*/
//10
