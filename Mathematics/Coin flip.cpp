/*
In this game the player will use N coins numbered from 1 to N, and all the coins will be facing in "Same direction" (Either Head or Tail),which will be decided by the player
before starting of the game.
The player needs to play N rounds.In the k-th round the player will flip the face of the all coins whose number is less than or equal to k. That is, the face of coin
will be reversed, from Head to Tail, or, from Tail to Head, for i ≤ k.
Elephant needs to guess the total number of coins showing a particular face after playing N rounds. Elephant really becomes quite fond of this game COIN FLIP,
so Elephant plays G times. Please help the Elephant to find out the answer.

Input:
1
2
1 5 1
1 5 2

Output:
2
3
Explanation:
In the 1st game in Example: I=1, so initial arrangement of coins are H H H H H, and now Elephant will play 5 rounds and coin faces will be changed as follows
After the 1st Round: T H H H H
After the 2nd Round: H T H H H
After the 3rd Round: T H T H H
After the 4th Round: H T H T H
After the 5th Round: T H T H T

Finally Q=1, so we need to find the total number of coins showing Head, which is 2.

In the 2nd game in Example: This is similar to the 1st game, except Elephant needs to find the total number of coins showing Tail. So the Answer is 3. (Please see the final state of the coins in the 1st game)

*/

/*
NAIVE APPROACH
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T = 0;
    cin >> T;
    while (T--) {
        int G = 0;
        cin >> G;
        while (G--) {
            int I = 0, N = 0, Q = 0;
            cin >> I >> N >> Q;
            char arr[10000000];

            if (I == 1) {
                for (int i = 0; i < N; i++) {
                    arr[i] = 'H';
                }
            }
            else if (I == 2) {
                for (int i = 0; i < N; i++) {
                    arr[i] = 'T';
                }
            }
            for (int i = 1; i < N; i++) {
                int j = i - 1;
                while (j >= 0) {
                    if (arr[j] == 'H')
                        arr[j] = 'T';
                    else
                        arr[j] = 'H';
                    j--;
                }
            }
            //fixing the last character for last round 
            if (arr[N - 1] == 'H')
                arr[N - 1] = 'T';
            else
                arr[N - 1] = 'H';

            //count characters T or H 
            int count_ans = 0;
            if (Q == 1) {
                for (int i = 0; i < N; i++) {
                    if (arr[i] == 'H') {
                        count_ans++;
                    }
                }
            }
            else {
                for (int i = 0; i < N; i++) {
                    if (arr[i] == 'T') {
                        count_ans++;
                    }
                }
            }
            cout << count_ans << endl;

        }
	}
	return 0;
}

/*
SMART APPROACH
/*
/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T = 0;
	cin>>T;
	while(T--)
	{
		int G = 0, ans = 0;
		cin>>G;
		while(G--)
		{
			int I, N, Q;
			cin>>I>>N>>Q;
			if(I == Q)
			    ans = N/2;
			else
			{
				if(N%2 != 0)
				    ans = (N+1)/2;
				else
				    ans = N/2;
				
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
*/
