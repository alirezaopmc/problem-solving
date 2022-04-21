bool TESTCASE = true;
bool DEBUG = false;

/*
  Handle  =  alirezaopmc
  Year    =  2022
  Month   =  04
  Day     =  21
  Hour    =  19
  Minute  =  15
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
	// For Division 1: 1900≤rating
  // For Division 2: 1600≤rating≤1899
  // For Division 3: 1400≤rating≤1599
  // For Division 4: rating≤1399

  int rating;
  cin >> rating;

  if (rating <= 1399) {
    cout << "Division 4";
  } else if (rating <= 1599) {
    cout << "Division 3";
  } else if (rating <= 1899) {
    cout << "Division 2";
  } else {
    cout << "Division 1";
  }
}