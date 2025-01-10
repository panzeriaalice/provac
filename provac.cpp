#include <iostream>
using namespace std;
int main()
{
int m2[2][2];
int m[2][2];
cout<<"inserisci la prima matrice 2x2"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<"inserisci l'elemento"<<i<<""<<j<<endl;
cin>>m[i][j];
}}

int m1[2][2];
cout<<"inserisci la seconda matrice 2x2"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<"inserisci l'elemento"<<i<<""<<j<<endl;
cin>>m1[i][j];
}}

cout<<"la prima matrice è";
cout<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<m[i][j]<<" ";
}
cout<<endl;
}
cout<<"la seconda matrice è";
cout<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<m1[i][j]<<" ";
}
cout<<endl;
}
cout<<"la terza matrice è";
cout<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
m2[i][j]=m[i][j]*m1[i][j];
cout<<m2[i][j]<<" ";
}
cout<<endl;
}}
