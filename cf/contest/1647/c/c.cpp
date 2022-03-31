bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  03
  Day     =  11
  Hour    =  19
  Minute  =  36
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

#define l(i, n) for(int i=0; i<n; i++)
#define D(s) if (DEBUG) { s; }

typedef vector<int>     Array;
typedef vector<Array>   Matrix;
typedef long long       ll;
typedef pair<int, int>  pii;

const int MAX_N =
  // 1e3;
  // 1e4;
  1e5;
  // 1e6;


/**
 * @brief Global Variables
 */
int t = 1;

void test_case();

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  if (TESTCASE) {
    cin >> t;
  }

  while(t--) {
    test_case();
  }
}

void test_case() {
  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  for(int i=0; i<n; i++) {
    cin >> s[i];
  }

  if (s[0][0] == '1') {
    cout << -1 << endl;
    return;
  }

  int cnt = 0;
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if (s[i][j] == '0') continue;
      cnt++;
    }
  }
  cout << cnt << endl;
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if (s[i][j] == '0') continue;
      if (i-1 >= 0) cout << i << " " << j+1 << " " << i+1 << " " << j+1 << endl;
      else if (j-1 >= 0) cout << i+1 << " " << j << " " << i+1 << " " << j+1 << endl;
    }
  }
}