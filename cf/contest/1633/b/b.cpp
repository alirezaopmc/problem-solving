bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  02
  Day     =  06
  Hour    =  02
  Minute  =  23
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
  string s;
  cin >> s;

  int zc=0, zf=-1, zl;
  int oc=0, of=-1, ol;

  for(int i=0; i<s.size(); i++) {
    if (s[i] == '0') {
      if(zf == -1) zf = i;
      zl = i;
      zc++;
    }

    if (s[i] == '1') {
      if(of == -1) of = i;
      ol = i;
      oc++;
    }
  }

  if (zc != oc) {
    cout << min(zc, oc);
  } else {
    if (s.length() == 2) {
      cout << 0;
    } else {
      cout << zc-1;
    }
  }
}
