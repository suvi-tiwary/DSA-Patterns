#include <iostream>
#include <vector>
using namespace std;
#include <queue>

int x[4] = {-1, 1, 0, 0};
int y[4] = {0, 0, -1, 1};
bool isvalid(int i, int j, int m, int n)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int rotten_oranges(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size(); // columns
    queue<pair<int, int>> q;
    int fresh = 0;
    int time = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                fresh++;
            }
            else if (a[i][j] == 2)
            {
                q.push({i, j});
                a[i][j] = -2;
            }
        }
    }

    while (!q.empty() and fresh > 0)
    {
        int s = q.size();
        while (s--)
        {
            pair<int, int> p = q.front();
            q.pop();
            int r = p.first;
            int c = p.second;
            for (int k = 0; k < 4; k++)
            {
                int row = r + x[k];
                int col = c + y[k];

                if (isvalid(row, col, m, n) and a[row][col] == 1)
                {
                    q.push({row, col});
                    a[row][col] = -2;
                    fresh--;
                }
            }
        }
        time++;
    }

    if (fresh > 0)
    {
        return -1;
    }
    else
    {
        return time;
    }
}

int main()
{
    vector<vector<int>> a = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}};

    cout << rotten_oranges(a) << endl;

    return 0;
}
