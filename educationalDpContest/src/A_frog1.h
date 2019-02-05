/*
 * A_frog1.h
 *
 *  Created on: 05-Feb-2019
 *      Author: abhimanyu
 */

#ifndef A_FROG1_H_
#define A_FROG1_H_

#include <bits/stdc++.h>
#define SUBMIT_A_FROG1 0
#define fo(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
using namespace std;

typedef vector<int> vi;

class Frog1{
private:
	int n;
	vi  stoneHeight;
public:
	Frog1(void);
	void takeInput(void);
	void solve(void);
	~Frog1(void);
};

/**
 * Constructor
 */
Frog1::Frog1(void){
	n = 0;
}

/**
 * Read input from stdin
 */
void Frog1::takeInput(void){
	cin>>n;
	stoneHeight.resize(n);
	fo(i,0,n){
		cin>>stoneHeight[i];
	}
}

/**
 * Solve problems
 */
void Frog1::solve(void){
	this->takeInput();
	int dp[n];
	dp[0] = 0;
	dp[1] = abs(stoneHeight[1] - stoneHeight[0]);
	fo(i,2,n){
		dp[i] = min(dp[i-1] + abs(stoneHeight[i] - stoneHeight[i-1]), dp[i-2] + abs(stoneHeight[i] - stoneHeight[i-2]));
	}
	cout<<dp[n-1]<<endl;
}

/**
 * Desctructor
 */
Frog1::~Frog1(void){

}

#if SUBMIT_A_FROG1
int main(){
	Frog1 a_frog1_obj; a_frog1_obj.solve();
	return 0;
}
#endif


#endif /* A_FROG1_H_ */
