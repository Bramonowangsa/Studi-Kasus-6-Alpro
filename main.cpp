#include <iostream>
#include <string.h>
using namespace std;

class mahasiswa{
  private:
    string nama;
    string dosen;
    string matkul;
    int nilai[50];
    int n;
    int min;
    int max;
    float rata;
  public:
    void input();
    void proses();
    void output();
};
void mahasiswa::input(){
  cout<<"Masukan Nama Dosen : ";getline(cin, dosen);
  cout<<"Masukan Mata Kuliah : ";getline(cin, matkul);
  cout<<"Masukan Jumlah mahasiswa : ";cin>>n;
  cout<<"===========================\n";
  for (int i=0; i < n; i++){
    cout<<"Nilai Mahasiswa ke-"<<i+1<<" = ";cin>>nilai[i];
  }
    cout<<"===========================\n";
}
void mahasiswa::proses()
{
  min=nilai[0];
  max=nilai[0];
  for (int k=0; k < n; k++)
  {
    if(nilai[k]<min)
    {
      min=nilai[k];
    }else
    {
      max=nilai[k];
    }
  }
  for (int i = 0; i < n; i++)
  {
    rata+=nilai[i];
  }
  rata=rata/n;
}
void mahasiswa::output()
{
  cout<<"---------------------------------"<<endl;
  cout<<"|\t\tDaftar Nilai Alpro\t\t |"<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"|Nama Dosen : "<<dosen<<"\t\t\t |"<<endl;
  cout<<"|Mata Kuliah : "<<matkul<<"\t\t\t |"<<endl;
  cout<<"|Jumlah Mahasiswa : "<<n<<"\t\t\t |"<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"|Nilai Mahasiswa : "<<"\t\t\t\t |"<<endl;
  for (int i=0; i < n; i++)
  {
    cout<<"|Nilai Mahasiswa ke-"<<i+1<<" "<<nilai[i]<<"\t\t |"<<endl;
  }
  cout<<"---------------------------------"<<endl;
  cout<<"|Nilai Minimal Mahasiswa   : "<<min<<"\t |"<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"|Nilai Maksimal Mahasiswa  : "<<max<<"\t |"<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"|Nilai Rata-rata Mahasiswa : "<<rata<<"\t |"<<endl; 
  cout<<"---------------------------------"<<endl;
}
int main()
{
  mahasiswa x;
  x.input();
  x.proses();
  x.output();
}