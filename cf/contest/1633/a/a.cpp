bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  02
  Day     =  06
  Hour    =  01
  Minute  =  42
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

  int ans = n;

  if (n % 7 != 0) {
    if (n - n%7 < 10) ans = n + 7 - n%7;
    else
    if (n + 7 - n%7 > 999) ans = n - n%7;
    else {
      int dahgan_n = (n / 10) % 10;

      int m = n - n%7;

      int dahgan_m = (m / 10) % 10;

      if (dahgan_m == dahgan_n) {
        ans = m;
      } else {
        ans = n + 7 - n%7;
      }
    }
  };

  cout << ans;
}
