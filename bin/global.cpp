
#include "global.hpp"

using namespace std;
// using namespace Eigen;

/* Volume */
int L;
int T;
array<int,2> dim;
array<int,4> V;
int APBC;
int kron_delta[4][4]={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};

int eq;

/* Action */
double c1;
double c12;
double c13;
double r;
double csw;
double alpha;
double beta;
int action;

/* External momentum */
// array<double,4> np;
// array<double,4> ap;
double Np0;

vector<array<int,4>> np_list;
vector<array<double,4>> ap_list;
vector<array<double,4>> ap_eq;
vector<int> tag_list;
int moms;
int eqmoms;

/* Loop momentum */
double al;

/* Invariants */
// Vector4d Id(1.0,1.0,1.0,1.0);
