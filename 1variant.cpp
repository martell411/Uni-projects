#include <iostream>
#include <sstream>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;
int main ()
{
	//1.1 Перерозподілити значення змінних x і y так, щоб в x опинилось більше з цих значень, а в y – менше
	float x, y, t;
	cout << "Please enter x-value : ";
	cin >> x;
	cout << "Please enter y-value : ";
	cin >> y;
	if (x > y);
	else
	{
		t = x; x = y; y = t;
	}
	cout << "then x = " << x << endl;
	cout << "and y = " << y << endl;

	//1.2 Обчислити значення функції
	float x;
	float y;
	cout << "Please enter x-value : ";
	cin >> x;
	if (x <= 3)
	{
		y = pow(x, 2) - 3 * x + 9;
	}
	else if (x > 3)
	{
		y = 1 / (pow(x, 3) + 6);
	}
	cout << "f(" << "" << x << ")=" << y << endl;
	
	//2.1 Протабулювати функцію y=x-sinx на проміжку [a,b] з кроком h. Вивести таблицю з парами чисел x,y. Знайти суму максимального і мінімального значень функції
	int a, b, h;    
	float c = 200.0;
	float* fx = new float[c];
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter step : ";
	cin >> h;
	float max;
	float min;
	float sum;
	float maximum = 0;
	float minimum = 0;
	for (int x = a, i = 0; x <= b, i <= (b - a) / h; x += h, i++)
	{
	 fx[i] = x - sin(x);
	 cout << "x = " << x << "  " << "y = " << fx[i] << endl;
	}
	cout << endl;
	min = fx[0];
	max = fx[0];
	for (int j = 1; j <= (b - a) / h; j++)
	{
	 if (max < fx[j])
	  max = fx[j];
	 if (min > fx[j])
	  min = fx[j];
	}
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	sum = max + min;
	cout << "sum = " << sum << endl;

	//2.2 Задано натуральне число n. Обчислити 2/1 + 3/2 + 4/3 + ... + (n+1)/n
	double a = 0;
	int n;
	cout << "Please enter n-value --> ";
	cin >> n;
	for (double i = 0; i < n; i++)
	{
		a += (i + 2) / (i + 1);
	}

	cout << "sum = " << a << endl;

	//3 Задано масив дійсних чисел розмірності n. Обчислити кількість додатних, від’ємних і нульових елементів у масиві
	int n;
	cout << "How many numbers?" << endl;
	cout << '-';
	cin >> n;

	cout << endl;

	cout << "Please enter the value of these numbers:" << endl;

	int negative = 0, zero = 0, positive = 0;
	float*mas;
	mas = new float[n];
	for (int i = 0; i < n; i++) cin >> mas[i];

	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0) negative++;
		else if (mas[i] == 0) zero++;
		else if (mas[i] > 0) positive++;
	}

	cout << endl;

	cout << "Negative : " << negative << endl;
	cout << "Zeros : " << zero << endl;
	cout << "Positive : " << positive << endl;

	cout << endl;

	delete[]mas; 

	//4 Задана матриця n*m. Визначити кількість особливих (більших за суму решти елементів свого стовпця) елементів
	srand(time(0)); // рандомні значення
	int**a, n, m;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;

	a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 100;
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;

	int s = 0;
	int* b = new int[m]; //допоміжний масив для всіх сум
	for (int j = 0; j < m; j++)
	{
		s = 0;
		for (int i = 0; i < n; i++)
		{
			s += a[i][j];
		}
		//cout << "S=" << s << endl;
		b[j] = s;
	}
	int special = 0;
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i][j] > b[j] - a[i][j])
			{
				//cout << a[i][j] << endl;
				special++;
			}
		}
	}
	cout << "Number of special elements: " << special << endl;

	for (int i = 0; i < n; i++)
	delete[]a[i];
	delete[]a;
	delete[]b;

	system("pause");
	return 0;
}

//5 Знайти всі чотиризначні числа виду abcd, де a,b,c,d - різні цифри i ab-cd=a+b+c+d
void sp_number(int& a, int& b, int& c, int& d)
{
	int n, x;
	n = 10000;
	for (int i = 0; i < n; i++)
	{
		x = i;
		a = (x % 10000) / 1000;
		b = (x % 1000) / 100;
		c = (x % 100) / 10;
		d = x % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d)
		if ((a * 10 + b) - (c * 10 + d) == a + b + c + d)
		cout << "Special number = " << a << b << c << d << endl;
	}
}
int main()
{
	int q, w, e, r;
	sp_number(q, w, e, r);
	system("pause");
	return 0;
}

//6 Задано інфу про n футбольних клубів (назва, рік заснування, місто). Посортувати дані за назвою і вивести на екран. Вивести інфу про найстаріший клуб
struct club
{
	string name;
	int year;
	string city;

};
void input(club& s)
{
	cout << "Enter name : ";
	cin >> s.name;
	cout << "Enter year : ";
	cin >> s.year;
	cout << "Enter city : ";
	cin >> s.city;
}
void output(club& s)
{
	cout << "Member club information : " << s.name << " " << s.year << " " << s.city << endl;
}
void sortbyname(club* c, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (c[j].name > c[j + 1].name)
			{
				club t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
			}
		}
	}
}
club oldest(club* c, int n)
{
	int min = c[0].year;
	club t = c[0];
	for (int i = 0; i < n; i++)
	{
		if (min > c[i].year)
		{
			min = c[i].year;
			t = c[i];
		}
	}
	return t;
}
int main()
{
	int n;
	cout << "Enter the number of clubs : ";
	cin >> n;
	cout << endl;
	club* s;
	s = new club[n];
	for (int i = 0; i < n; i++)
	{
		input(s[i]);
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		output(s[i]);
	}
	cout << endl;

	sortbyname(s, n);
	cout << "Sorted by club name : " << endl;
	for (int i = 0; i < n; i++)
	{
		output(s[i]);
	}
	cout << endl;
	club min;
	min = oldest(s, n);
	cout << "The oldest club is : " << endl;
	output(min);

	system("pause");
	return 0;
}
//7 Дано послідовність слів, відокремлених пропусками, в кінці крапка. Поміняти місцями найдовше і найкоротше слово
int main()
{
	string s, min, max, word;
	stringstream str;
	int i = 0, j, k;
	cout << "Input string: ";
	getline(cin, s);
	s = s.erase(s.find_last_of('.') + 1);
	s = s.substr(0, s.find('.', s.size() - 1));
	str << s;
	cout << "String before: " << str.str() << "." << '\n';
	str >> min;
	max = min;
	while (str >> word)
	{
		if (min.length() > word.length())
			min = word;
		if (max.length() < word.length())
			max = word;
	}
	j = s.find(min);
	k = s.find(max);
	if (j < k) {
		s.replace(k, max.length(), min);
		s.replace(j, min.length(), max);
	}
	else {
		s.replace(j, min.length(), max);
		s.replace(k, max.length(), min);
	}
	cout << "After replace: " << s << "." << "\n";
	system("pause");
	return 0;
}
//8 Автомобіль. Виведення століття в якому виготовлено і найдорожчий автомобіль
class car
{
private:
	string name;
	int year;
	double price;

public:
	car() {}
	car(string n, int y, double p)
	{
		name = n;
		year = y;
		price = p;
	}
	car(car& c)
	{
		name = c.name;
		year = c.year;
		price = c.price;
	}
	void output(car& c)
	{
		cout << "Name : " << c.name << "\tYear of production : " << c.year << "\tEnter price : " << c.price << endl;
	}
	void input(car& c)
	{
		cout << "Enter name : ";
		cin >> c.name;
		cout << "Enter year of production : ";
		cin >> c.year;
		cout << "Enter price : ";
		cin >> c.price;
	}

	string get_name()
	{
		return name;
	}
	int get_year()
	{
		return year;
	}
	float get_price()
	{
		return price;
	}
	void set_name(string n)
	{
		name = n;
	}
	void set_amount(int y)
	{
		year = y;
	}
	void set_average(double p)
	{
		price = p;
	}

	void century(car& c)
	{
		if (c.year >= 1801 && c.year <= 1900)
		{
			cout << " 19 century" << endl;
		}
		else if (c.year >= 1901 && c.year <= 2000)
		{
			cout << " 20 century" << endl;
		}
		else if (c.year >= 2001 && c.year <= 2100)
		{
			cout << " 21 century" << endl;
		}
	}

	car the_most_expensive(car* c, int n)
	{
		int max = c[0].price;
		car t = c[0];
		for (int i = 0; i < n; i++)
		{
			if (max < c[i].price)
			{
				max = c[i].price;
				t = c[i];
			}
		}
		cout << "The most expensive car is " << t.name << " that cost " << max << endl;
		return t;
	}
};

int main()
{
	int n;
	cout << "Enter amount of cars : ";
	cin >> n;
	car* s = new car[n];
	for (int i = 0; i < n; i++)
	{
		s[i].input(s[i]);
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		s[i].output(s[i]);
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Car number " << i + 1 << " is produced in";
		s[i].century(s[i]);
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		s[i].the_most_expensive(s, n);
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}