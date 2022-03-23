
#include <fstream>

using namespace std;

ifstream fin("int.in");
ofstream fout("int.out");
int n,m,a[101][101],x,y;

struct suma
{
    int interior,exterior;
}s[101];

int main()
{
    fin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        fin >> x >> y;
        a[x][y] = 1;
    }
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1;j<=n;j++)
        {
            s[i].interior = s[i].interior + a[i][j];
            s[i].exterior = s[i].exterior + a[j][i];
        }
    }
    for (int i = 1; i <= n;i++)
        if (s[i].interior == s[i].exterior)
            cnt++;
    fout << cnt << '\n';
    for (int i = 1; i <= n; i++)
        if (s[i].interior == s[i].exterior)
         fout << i << " ";

}
