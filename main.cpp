#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

//number of players on a team is constant
const int SIZE = 30;

int main(){
    vector<double> heights;

    cout << "There are " << SIZE << "people on this team" << endl;
    cout << "please enter the heights for the players" << endl; 
    cout << "For example, entering 6 or 6.0 = the player is 6 ft tall" << endl;
    //reads data to get player heights
    for(int i = 0; i < SIZE; i++) {
        int temp;
        cout << "player " << i+1 << " : " << endl;
        cin >> temp;
        heights.push_back(temp);
    }

    cout << endl << "Outputting details: " << endl;
    if (heights.empty() == 0){
        cout << "The first player's height was " << heights.front() << endl;
        cout << "The last player's height was " << heights.back() << endl;
    }
    else{
        cout << "No player heights have been entered" << endl;
    }
    return 0;
}