bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  02
  Day     =  12
  Hour    =  01
  Minute  =  38
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
    cout << endl;
  }
}

void test_case() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  
  if (n > 2) {}
  cout << (n <= 2 && s[0] != s[1] ? "YES" : "NO");
}
