#include <iostream>

using namespace std;

float sinOptimizar()
{
    float num = 1.f, temp = 0.f;
    for (int i = 0; i < 10000; i++)
    {
        temp += 0.00001;
    }
    num += temp;
    return num;
}

double mcCracken()
{
    double num = 1.f, temp = 0.f;
    for (int i = 0; i < 10000; i++)
    {
        temp += 0.00001;
    }
    num += temp;
    return num;
}

float agrupamiento()
{
    float num = 1.f;
    for (int i = 0; i < 100; i++)
    {
        float temp = 0.f;
        for (int i = 0; i < 100; i++)
        {
            temp += 0.00001;
        }
        num += temp;
    }
    return num;
}

int main()
{
    cout << "Sin optimizar: " << sinOptimizar() << '\n';
    cout << "McCracken: " << mcCracken() << '\n';
    cout << "Por agrupamiento: " << agrupamiento() << '\n';
    return 0;
}
