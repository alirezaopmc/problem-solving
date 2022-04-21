bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  03
  Day     =  31
  Hour    =  19
  Minute  =  25
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
set<int> st;

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
  st.clear();
  string s;
  cin >> s;
  int n = s.size();

  // to remove
  int ans = 0;

  for(int i=0; i<n; i++) {
    char c = s[i];

    if (st.find(c) != st.end()) {
      ans += st.size() - 1;
      st.clear();
    } else if (i == n-1) {
      ans += st.size() + 1;
      st.clear();
    } else {
      // not found
      st.insert(c);
    }
  }

  cout << ans;

}