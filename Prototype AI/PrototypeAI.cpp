#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>
#include <map>
using namespace std;


//Outputs each prefab and their 4 values
void outputPrefabs(vector<vector<int>> prefabs) {
    // Display the prefab values
    cout << "Prefab Values:" << endl;
    for (const auto& prefab : prefabs) {
        for (int num : prefab) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << endl;
}


//Generates 4 random values for 30 prefabs
vector<vector<int>> generatePrefabs() {
    // Generate a vector of random prefab values
    vector<vector<int>> prefabs;
    for (int i = 0; i <= 30; i++) {
        vector<int> values;
        for (int j = 0; j <= 3; j++) {
            values.push_back(rand() % 10);
        }
        prefabs.push_back(values);
    }

    outputPrefabs(prefabs);

    return prefabs;
}


//Outputs newLevel which includes the prefabs in the level as well as their values
void outputNewLevel(map<vector<int>, int> newLevel) {
    // Iterate through the map to display its content
    cout << "Generated Levels:" << endl;
    for (const auto& entry : newLevel) {
        cout << "Prefab: ";
        for (int val : entry.first) {
            cout << val << " ";
        }
        cout << " -> Level: " << entry.second << endl;
    }
}


//Calculates the first player skill category
int calculatePlayerSkill() {
    // Generate player attributes
    float playerHealth = rand() % 10 + 1; // Added +1 to avoid zero health
    float playerAccuracy = rand() % 100;
    int playerSkill = (playerHealth * playerAccuracy) / 10;

    cout << "Player Skill: " << playerSkill << endl;

    return playerSkill;
}


//Calculates the second player skill category
int calculatePlayerSkill2() {
    int playerSkill2 = rand() % 100 + 1;

    cout << "Player Skill 2: " << playerSkill2 << endl;

    return playerSkill2;
}


//Calculates the third player skill category
int calculatePlayerSkill3() {
    int playerSkill3 = rand() % 100 + 1;

    cout << "Player Skill 3: " << playerSkill3 << endl;

    return playerSkill3;
}


//Calculates the fourth player skill category
int calculatePlayerSkill4() {
    int playerSkill4 = rand() % 100 + 1;

    cout << "Player Skill 4: " << playerSkill4 << endl;

    return playerSkill4;
}

//Generates the new level based on prefab values
map<vector<int>, int> generateNewLevel(vector<vector<int>> prefabs) {

    int playerSkill = calculatePlayerSkill();
    int playerSkill2 = calculatePlayerSkill2();
    int playerSkill3 = calculatePlayerSkill3();
    int playerSkill4 = calculatePlayerSkill4();

    // Create the level
    map<vector<int>, int> newLevel;
    int count = 1;

    for (int i = 0; i <= 30; i++) {
        if (prefabs[i][0] <= playerSkill && prefabs[i][1] <= playerSkill2 &&
            prefabs[i][2] <= playerSkill3 && prefabs[i][3] <= playerSkill4) {

            // Add the prefab to newLevel
            newLevel[prefabs[i]] = count;
            count++;

            // Decrement player skills by prefab values
            playerSkill -= prefabs[i][0];
            playerSkill2 -= prefabs[i][1];
            playerSkill3 -= prefabs[i][2];
            playerSkill4 -= prefabs[i][3];
            }
        else {
            cout << "End of level" << endl;
            break;
        }
    }

    outputNewLevel(newLevel);

    return newLevel;
}

int main() {
    // Ensure random values are seeded each run
    srand(time(NULL));

    vector<vector<int>> prefabs = generatePrefabs();

    map<vector<int>, int> newLevel = generateNewLevel(prefabs);

    return 0;
}

