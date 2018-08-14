#include<iostream>
#include<cstdio>
 
using namespace std;
 
int main(int argc, char **argv)
{
    void lu(float[][10], float[][10], float[][10], int n);
    void output(float[][10], int);
    float matriz[10][10], l[10][10], u[10][10];
    int n = 0, i = 0, j = 0;
    
    
    cout << "Algoritmo de Fatoracao LU" <<endl<<endl;
    
    
    cout << "Digite o tamanho da sua matriz quadrada : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Digite o valor da celula [ " << i << " , " << j << " ]: ";
            cin >> matriz[i][j];
        }
    }
    lu(matriz, l, u, n);
    cout << "\nL Fatoracao\n\n";
    output(l, n);
    cout << "\nU Fatoracao\n\n";
    output(u, n);
    return 0;
}
void lu(float matriz[][10], float l[][10], float u[][10], int n)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < i)
                l[j][i] = 0;
            else
            {
                l[j][i] = matriz[j][i];
                for (k = 0; k < i; k++)
                {
                    l[j][i] = l[j][i] - l[j][k] * u[k][i];
                }
            }
        }
        for (j = 0; j < n; j++)
        {
            if (j < i)
                u[i][j] = 0;
            else if (j == i)
                u[i][j] = 1;
            else
            {
                u[i][j] = matriz[i][j] / l[i][i];
                for (k = 0; k < i; k++)
                {
                    u[i][j] = u[i][j] - ((l[i][k] * u[k][j]) / l[i][i]);
                }
            }
        }
    }
}
void output(float x[][10], int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%f ", x[i][j]);
        }
        cout << "\n";
    }
}
