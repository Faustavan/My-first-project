#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;


#include "mylib.hpp"

struct duom{
  string var;
  string pav;
  int paz[20];
  int egz;
};
duom ivedimas(int &n);
void isvedimas(duom temp, int n);

int main(){
  duom asmuo1, masyvas[25];
  int n, m;
  cout<<"Iveskite studentu kieki: "; cin>>n;
  for (int i=0;i<n;i++){
       masyvas[i]=ivedimas(m);
       isvedimas (masyvas[i], m);
    }
  
  
}


duom ivedimas(int &n){
  duom asmuo;
  cout<<"Iveskite varda: "; cin>>asmuo.var;
  cout<<"Iveskite pavarde: "; cin>>asmuo.pav;
  cout<<"Iveskite egzamino paz.: "; cin>>asmuo.egz;
  
  cout<<"Iveskite semestro pazymiu kieki:"; cin>>n;
  if (n <0 || n >=20) cin>>n;
  for (int kint=0;kint<n; kint++)
    {
      cout<<"Iveskite "<<kint+1<<" pazymi: ";
      cin>>asmuo.paz[kint];
    }
  return asmuo;
}

void isvedimas(duom temp, int n){
/*  cout<<std::left<<std::setw(20)<<temp.var<<std::left<<std::setw(20)<<temp.pav;
  for (int a=0;a<n;a++) cout<<std::right<<std::setw(5)<<temp.paz[a];
  cout<<std::right<<std::setw(5)<<temp.egz<<endl;
*/
  printf("|%-20s|%-20s|", temp.var.c_str(), temp.pav.c_str());
  for (int a=0;a<n;a++) printf("%5d|",temp.paz[a]);
  printf("%*d|\n",5,temp.egz);
}
