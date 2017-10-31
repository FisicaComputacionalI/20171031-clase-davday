#include <iostream>
using namespace std;
int s=0;
int edad[16];
int main()
{
for (int i=0; i<16; i++)
  {
    cout<<"¿qué edad tienes?"<<endl;
    cin>>edad[i];
  }
for (int i=0; i<16; i++)
  {
    s+=(edad[i]+3);
  }
for (int i=0; i<16; i++)
  {
    cout<<edad[i]<<" , ";
    cout<<endl;
  }
cout<<"el promedio al que se graduará este gurpo es de "<<s/16<<endl;
return 0;
}
