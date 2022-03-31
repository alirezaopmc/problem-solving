bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  03
  Day     =  08
  Hour    =  20
  Minute  =  39
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
  int l, r, a;
  cin >> l >> r >> a;

  int s1 = (r / a) + r % a;
  int s2 = ((r - (r % a) - 1) / a) + a - 1;

  // cout << s1 << s2;

  int ans = s1;

  if (l <= (r - (r % a) - 1)) ans = max(ans, s2);
  cout << ans;
}