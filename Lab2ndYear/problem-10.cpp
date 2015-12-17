#include<bits/stdc++.h>
using namespace std;
class Warshall
{
  int V[100][100],n;
  public:
  void adj_matrix();
  void path_matrix();
  void find_path();
};
void Warshall::adj_matrix()
{
  cout<<"Nodes=";
  cin>>n;
  for(int i=1;i<=n;i++)
  for(int j=1;j<=n;j++)
  cin>>V[i][j];
}
void Warshall::find_path()
{
  for(int k=1;k<=n;k++)
  {

  for(int i=1;i<=n;i++)
  {
  for(int j=1;j<=n;j++)
  {
  V[i][j]=V[i][j]||(V[i][k]&&V[k][j]);
  cout<<V[i][j]<<" ";
  }
  cout<<endl;
  }
  cout<<"\n\n";
  }
}
void Warshall::path_matrix()
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    cout<<V[i][j]<<"  ";
    cout<<endl;
  }
}
int main()
{
  Warshall a;
  a.adj_matrix();
  a.find_path();
  a.path_matrix();
}
