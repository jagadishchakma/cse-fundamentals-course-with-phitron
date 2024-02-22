#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

// Function to perform DFS on the matrix
int dfs(vector<vector<char>>& matrix, int row, int col) {
    // Define directions for moving to neighboring cells (up, down, left, right)
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    // Mark the current cell as visited
    matrix[row][col] = 'X';

    // Initialize count for the current apartment
    int count = 1;

    // Explore neighbors
    for (int i = 0; i < 4; ++i) {
        int newRow = row + dr[i];
        int newCol = col + dc[i];

        // Check if the new cell is within bounds and represents a room in the current apartment
        if (newRow >= 0 && newRow < matrix.size() && newCol >= 0 && newCol < matrix[0].size() && matrix[newRow][newCol] == '.') {
            // Mark the new cell as visited and continue DFS
            count += dfs(matrix, newRow, newCol);
        }
    }

    return count;
}

// Function to count rooms in each apartment in ascending order
vector<int> countRooms(vector<vector<char>>& matrix) {
    vector<int> roomCounts;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            if (matrix[i][j] == '.') {
                // If the current cell represents a room, perform DFS to mark and count the apartment
                int roomCount = dfs(matrix, i, j);
                roomCounts.push_back(roomCount);
            }
        }
    }

    // Sort the room counts in ascending order
    sort(roomCounts.begin(), roomCounts.end());

    return roomCounts;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char>> matrix(rows, vector<char>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> roomCounts = countRooms(matrix);

    // Print the room counts in ascending order
    for (int count : roomCounts) {
        cout << count << " ";
    }

    cout << endl;

    return 0;
}
