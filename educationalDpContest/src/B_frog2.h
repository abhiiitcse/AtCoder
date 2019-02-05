/*
 * B_frog2.h
 *
 *  Created on: 05-Feb-2019
 *      Author: abhimanyu
 */

#ifndef B_FROG2_H_
#define B_FROG2_H_

#include <bits/stdc++.h>
#define SUBMIT_A_FROG2 1
#define fo(i,a,b) for(int i=a;i<b;i++)
#define foi(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
using namespace std;

typedef vector<int> vi;

class Frog2{
private:
	int n,k;
	vi  stoneHeight;
public:
	Frog2(void);
	void takeInput(void);
	void solve(void);
	~Frog2(void);
};

/**
 * Constructor
 */
Frog2::Frog2(void){
	n = 0;
	k = 0;
}

/**
 * Read input from stdin
 */
void Frog2::takeInput(void){
	cin>>n>>k;
	stoneHeight.resize(n);
	fo(i,0,n){
		cin>>stoneHeight[i];
	}
}

/**
 * Solve problems
 */
void Frog2::solve(void){
	this->takeInput();
	int dp[n];
	dp[0] = 0;
	fo(i,1,n){
		dp[i] = INT_MAX;
		foi(j,i-1,max(0,i-k)){
			dp[i] = min(dp[i], dp[j] + abs(stoneHeight[i] - stoneHeight[j]));
		}
	}
	cout<<dp[n-1]<<endl;
}

/**
 * Desctructor
 */
Frog2::~Frog2(void){

}

#if SUBMIT_A_FROG2
int main(){
	Frog2 b_frog2_obj; b_frog2_obj.solve();
	return 0;
}
#endif




#endif /* B_FROG2_H_ */
