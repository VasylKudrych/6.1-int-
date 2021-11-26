// 6.1.cpp - ітераційний

#include <iostream>
#include<iomanip>

using namespace std;

void print1(int* p, const int n)
{
    cout << setw(3) << "p[] = ";
    for (int i = 0; i < n; i++)       
        cout << setw(3) << p[i];
        cout << '\n';
}

void format_mas(int* p, int& sum, int& k, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((p[i] > 0) || p[i] % 2 == 0) 
        {
            k++;
            sum += p[i];
            p[i] = 0;
        }
    }
}

void print0(int* p, const int n)
{
    cout << setw(3) << "p[]= ";
    for (int i = 0; i < n; i++)
        cout << setw(3) << p[i];
    cout << '\n';

}

void create(int* p, const int Low, const int High, const int n)
{
    srand(unsigned(time(0)));
    for (int i = 0; i < n; i++)
        p[i] = Low + rand() % (High - Low + 1);
}

int main()
{    
    const int n = 24;
    int p[n];
        create(p, -10, 14, n);
        print0(p, n); 
    int sum = 0;
    int k = 0;
        format_mas(p, sum, k, n);
        print1(p, n);
}