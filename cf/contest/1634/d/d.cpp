bool TESTCASE = true;
bool DEBUG = true;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  02
  Day     =  06
  Hour    =  23
  Minute  =  50
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

int n;
//vector<bool> a;
set<int> a;
int ns;

int aCalled = 0;

void pv(vector<int> &v) {
  if (! DEBUG) return;

  for(int e : v) {
    cout << e << " ";
  }
  cout << endl;
}

int A(vector<int> locs) {
  aCalled++;

  int i = locs[0];
  int j = locs[1];
  int k = locs[2];

  printf("? %d %d %d\n", i+1, j+1, k+1);
  cout.flush();

  int ans;
  //cin >> ans;
  scanf("%d", &ans);

  return ans;
}

void F(vector<int> locs) {
  vector<int> q;

  // Ask 4 queries
  for(int i=0; i<4; i++) {
    vector<int> aLoc;
    
    for(int j=0; j<4; j++) {
      if(i != j) {
        aLoc.push_back(locs[j]);
      }
    }
    
    int answer = A(aLoc);

    q.push_back(answer);
  }

  int M = -1;

  for(int i=0; i<4; i++) {
    M = max(M, q[i]);
  }

  int q1 = -1, q2 = -1;

  for(int i=0; i<4; i++) {
    if (q[i] == M) {
      if (q1 == -1) {
        q1 = locs[i];
      } else {
        q2 = locs[i];
        break;
      }
    }
  }


  if (a.find(q1) != a.end()) {
    a.erase(q1);
    ns -= 1;
  }

  if (a.find(q2) != a.end()) {
    a.erase(q2);
    ns -= 1;
  }
  /*
  for(int z=0; z<4; z++) {
    if (z != q1 && z != q2) {
      if (a[z] == true) {
        a[z] = false;
        ns -= 1;
      }
    }
  }
  */

  // Delete two incdices that we are sure they are not zero
  /*
  for(int i=0; i<4; i++) {
    for(int j=i+1; j<4; j++) {
      if (q[i] == q[j]) {
        for(int z=0; z<4; z++) {
          if (z != i && z != j) {
            if (a[z] == true) {
              a[z] = false;
              ns -= 1;
            }
          }  
        }
      }
    }
  }
  */
}

void solve(int n) {
  ns = n;

  for(int i=0; i<n; i++) {
    a.insert(i);
  }


  while(ns > 2) {
    vector<int> q;

    
    for(int i=0; i<n; i++) {
      if (a.find(i) != a.end()) {
        q.push_back(i);
      }

      if (q.size() == 4) break;
    }

    // Gaurd if q has not 4 elements
    int i=0;
    while(q.size() < 4) {
      while(a.find(i) != a.end()) i++;
      q.push_back(i);
    }

    F(q);
  }

  int ans1 = -1, ans2 = -1;
  for(int i=0; i<n; i++) {
    if(a.find(i) != a.end()) {
      if (ans1 == -1) {
        ans1 = i;
      } else {
        ans2 = i;
        break;
      }
    }
  }
  
  if (ans2 == -1) ans2 = ans1;

  printf("! %d %d\n", ans1+1, ans2+1);
  cout.flush();
}

void test_case() {
  //cin >> n;
  scanf("%d", &n);
  solve(n);
}

int main() {
  if (TESTCASE) {
    //cin >> t;
    scanf("%d", &t);
  }

  while(t--) {
    test_case();
  }
}
