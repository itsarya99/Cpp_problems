#include <bits/stdc++.h>
using namespace std;

void solve(int n, char source, char destination, char auxiliary){
    if(n == 1){
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    solve(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    solve(n - 1, auxiliary, destination, source);

}
int main(){
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
   if(n <= 0){
        cout << "Number of disks must be a positive integer." << endl;
        return 0;
    }
    int total_moves = pow(2, n) - 1;
    cout << "The sequence of moves involved in the Tower of Hanoi are:" << endl;
   solve(n, 'A', 'C', 'B');
    cout << "Total moves required: " << total_moves << endl;
    return 0;
}