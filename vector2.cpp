//otro tipo de vector
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int s=0;
    size_t ta=1;

    cout<<"¿Cúantos alumnos son?"<<endl;
    cin>>ta;

    vector<int>edad(ta);
    for (int i=0; i<ta; i++)
      {
	cout<<"¿qué edad tienes?"<<endl;
	cin>>edad[i];
      }
    for (int i=0; i<ta; i++)
      {
	s+=(edad[i]+3);
      }
    for (int i=0; i<ta; i++)
      {
	cout<<edad[i]<<" , ";
	cout<<endl;
      }
 cout<<"El promedio al que se graduará este gurpo es de "<<s/ta<<" años"<<endl;
    return 0;
  }
  
