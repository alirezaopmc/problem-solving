bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  02
  Day     =  06
  Hour    =  18
  Minute  =  05
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

bool pal(string s) {
  for(int i=0; i<s.size() / 2; i++) {
    if (s[i] != s[s.size() - 1 - i]) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  if (TESTCASE) {
    cin >> t;
  }

  while(t--) {
    test_case();
    cout << endl;
  }
}

void test_case() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  //cout << s << " - " << pal(s) << endl;

  if (pal(s) || k < 1) cout << 1;
  else cout << 2;
}
