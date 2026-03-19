#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>

int find_steps(const std::vector<std::vector<int>>& grid, std::pair<int, int> start, std::pair<int, int> end) {
    // Implementation of the pathfinding algorithm
    int row = grid.size();
    int column = grid[0].size();
    // std::vector<std::vector<int>> distance(row, std::vector<int>(column, INT_MAX));
    // using Node = std::pair<int, std::pair<int, int>>;
    // std::priority_queue<Node, std::vector<Node>, std::greater<Node>> q;
    // q.push({0, start});
    // distance[start.first][start.second] = 0;
    // std::vector<std::pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    // while (!q.empty()) {
    //     auto [dist, position] = q.top();
    //     q.pop();

    //     int x = position.first;
    //     int y = position.second;

    //     if (x == end.first && y == end.second)
    //         return dist;
        
    //     for (auto dir: directions) {
    //         int nx = x + dir.first;
    //         int ny = y + dir.second;

    //         if (nx >= 0 && ny >= 0 && nx < row && ny < column && grid[nx][ny] == 0) {
    //             int newDistance = dist + 1;

    //             if (newDistance < distance[nx][ny]) {
    //                 distance[nx][ny] = newDistance;
    //                 q.push({newDistance, {nx, ny}});
    //             }
    //         }
    //     }
    // }
    return -1; // Return the length of the shortest path
}

int main() {
    const int openCell = 0;
    const int blockedCell = 1;
    // Sample 1
   std::vector<std::vector<int>> grid = {{0, 0, 1, 0, 0, 0},
                      {1, 0, 1, 0, 1, 0},
                      {0, 0, 0, 0, 1, 0},
                      {0, 0, 0, 1, 1, 0},
                      {1, 1, 0, 0, 0, 0}}; // Example graph represented as an adjacency list

    std::pair<int, int> start = {0, 0}; // Starting point
    std::pair<int, int> end = {3, 5}; // Ending point
    int steps = find_path(grid, start, end);
    std::cout << "Output: " << steps << std::endl;
    // Sample 2
    std::vector<std::vector<int>> grid2 = {{0, 0, 0, 1, 0, 0},
                       {1, 1, 0, 1, 0, 1},
                       {0, 0, 0, 1, 0, 0},
                       {0, 1, 1, 1, 1, 0},
                       {0, 1, 0, 1, 0, 0}}; // Example graph represented as an adjacency list
    std::pair<int, int> start2 = {0, 0};
    std::pair<int, int> end2 = {5, 5};
    int steps2 = find_path(grid2, start2, end2);
    std::cout << "Output: " << steps2 << std::endl;
    return 0;
}