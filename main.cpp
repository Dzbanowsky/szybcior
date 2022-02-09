#include <iostream>

using namespace std;

int ngr(char tab[], int N)
{
    int a;
    int b;
    int suma=0;
    for(int i=0;i<N;i++)
  {
      a=(int)tab[i]-48;
      if(a>=0&&a<10)
      suma=suma+a;
  }
  return suma;
}
void ngr2(char tab[], int N)
{
    for(int i=N;i>N;i--)
  {
      cout<<tab[i];
  }
  //  int L;
  //  int a;
  //  int suma=0;
  //  for(int i=0;i<N;i++)
 // {
   //    a=(int)tab2[i];
  //     //cout<<a<<endl;
   //    if(a>=65&&a<=90)
  //  { suma=suma+a;
  //    L++;
   //   cout<<tab2[i];
   // }
//    return tab2[a];
}

int main()
{
    //int L;
    //char tab2[L];
    int a=0;
    int suma=0;
    const int N=8;
    char tab[N];
     for(int i=0;i<N;i++)
  {
      cin>>tab[i];
  }



   for(int i=N;i>=0;i--)
  {
      cout<<tab[i]<<endl;
  }
  /*for(int i=0;i<N;i++)
  {
       a=(int)tab[i];
       //cout<<a<<endl;
       if(a>=65&&a<=90)
      {suma=suma+a;
      L++;
      cout<<tab[i];


    }

      //cout<<i<<": "<<tab[i]<<endl;
  }
*/
//ngr2(tab2, L)
 //ngr2(tab, N);
 //suma=ngr(tab,N);
 //cout<<suma;
 return 0;
}

