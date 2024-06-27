//                                                                 NON RECURSIVE 

#include <iostream>
#include <stack>
using namespace std;
struct Move {
    int n;
    char source, aux, dest;
};
void iterativeTowerOfHanoi(int numDisks) 
{
    stack<Move> moves;
    Move initialMove = {numDisks, 'A', 'B', 'C'};
    moves.push(initialMove);

    while (!moves.empty()) 
    {
        Move currentMove = moves.top();
        moves.pop();

        if (currentMove.n == 1) {
            cout << "Move disk from peg " << currentMove.source << " to peg " << currentMove.dest << endl;
        } else {
            // Push the next moves in reverse order to the stack
            moves.push({currentMove.n - 1, currentMove.aux, currentMove.source, currentMove.dest});
            moves.push({1, currentMove.source, currentMove.aux, currentMove.dest});
            moves.push({currentMove.n - 1, currentMove.source, currentMove.dest, currentMove.aux});
        }
    }
}
int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    iterativeTowerOfHanoi(numDisks);
    return 0;
}



//                                                               RECURSIVE    

/*
#include <iostream> 
using namespace std; 
void towerOfHanoi(int n, char source, char dest, char aux) 
{ 
    if (n == 0) 
        return; 
    towerOfHanoi(n - 1, source, aux, dest); 
    cout << "Move disk " << n << " from peg " << source << " to peg " << dest << endl; 
    towerOfHanoi(n - 1, aux, dest, source); 
} 
int main() 
{ 
    int N ;
	cout << "Enter no. of disk: ";
	cin >> N;
    towerOfHanoi(N, 'A', 'C', 'B'); 
    return 0; 
}
*/