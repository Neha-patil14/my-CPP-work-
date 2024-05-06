#include<iostream>
using namespace std;
class matrix
{
private:
int a[10][10], x, y, i, j;
public:
matrix();
void getmatrix();
void printMatrix();
friend void operator<<(ostream &output,
matrix &m);
friend void operator>>(istream &input, matrix&m);
int operator==(matrix c);
matrix operator+(matrix c);
matrix operator-(matrix c);
matrix operator*(matrix c);
};
matrix::matrix()
{
for (int i = 0; i < x; i++)
{
for (int j = 0; j < y; j++)
a[i][j] = 0; 
void matrix::getmatrix()
{
cout << "Enter the rows"; cin >> x;
cout << "Enter the columns"; cin >> y;
cout << "Enter elements of first matrix\n\n";
for (i = 0; i < x; i++)
{
for (j = 0; j < y; j++)
{ cin >> a[i][j];
}
}
};
void operator<<(ostream &output, matrix &m)
{
for (m.i = 0; m.i < m.x; m.i++) {
for (m.j = 0; m.j < m.y; m.j++)
output << setw(5) << m.a[m.i][m.j];
output << endl; } }
void operator>>(istream &input, matrix &m)
{
cout << "Enter the rows";
input >> m.x;
cout << "Enter the columns";
input >> m.y;
cout << "Enter elements of first matrix\n\n";
for (m.i = 0; m.i < m.x; m.i++) {
for (m.j = 0; m.j < m.y; m.j++) {
input >> m.a[m.i][m.j]; 
}
}
}
void matrix::printMatrix()
{
for (i = 0; i < x; i++)
{
for (int j = 0; j < y; j++)
cout << setw(5) << a[i][j];
cout << endl;
}
}
int matrix::operator==(matrix c)
{
int cnt = 0;
if (x == c.x && y == c.y)
{
for (i = 0; i < x; i++)
{
for (j = 0; j < y; j++)
{
if (a[i][j] != c.a[i][j])
{
cnt=1;
break;
}
} 
}
else {
 cnt=2; 
 }
return cnt==0; 
}
matrix matrix::operator+(matrix c)
{
matrix m = c;
if (x == c.x && y == c.y)
{
for (i = 0; i < x; i++)
{
for (j = 0; j < y; j++)
{
m.a[i][j] = a[i][j] + c.a[i][j];
}
} }
else
{ m.x = m.y = 0;
cout << "Matrix Addition not possible\n";
}
return m; }
matrix matrix::operator*(matrix c)
{
matrix m = c; int k;
if (x != c.y)
{ m.x = m.y = 0;
cout << "Matrix Multiplication not possible\n";
}
else
{
for (i = 0; i < x; ++i)
{ for (j = 0; j < c.y; ++j)
{ m.a[i][j] = 0;
for (k = 0; k < y; ++k)
m.a[i][j] += a[i][k] * c.a[k][j];
} 
} 
}
return m;
}
int main()
{
matrix m1, m2, m3;
cin >> m1;
cin >> m2;
cout << "\nMatrix Number 1 :\n";
cout << m1;
cout << "\nMatrix Number 2 :\n";
cout << m2;
cout << "\nMatrix Addition : " << endl;
m3 = m1 + m2;
cout << m3;
cout<<"\nMatrix Substraction : "<< endl;
m3 = m1 - m2;
cout << m3; 
cout<<"\nMatrix Multiplication : "<< endl;
m3 = m1 * m2;
cout << m3;
if (m1 == m2)
{
cout << "\n\nTwo matrices are equal"<<endl;
}
else
{
cout << "\n\nTwo matrices are notequal"<<endl;
}
return 0;
}
