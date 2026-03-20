/* Names: Ivy Loi, Homan Qiu, Richie Nguyen, Robert Gutierrez
Emails: iloi05@csu.fullerton.edu, hqiu2006@csu.fullerton.edu, richienguyen@csu.fullerton.edu, lil.rjg3@csu.fullerton.edu
CPSC 335 section 11
Project 2: Algorithm 1
Date: 3/20/26
*/
#include <iostream>
#include <queue>
#include <vector>
#include <tuple>

int shortest_path(std::vector<std::vector<int>> grid, std::pair<int, int> start, std::pair<int, int> target) {

    int rows = grid.size();
    int cols = grid[0].size();

    int sx = start.first;
    int sy = start.second;
    int tx = target.first;
    int ty = target.second;

    // avoid blocked paths
    if (grid[sx][sy] == 1 || grid[tx][ty] == 1) {
        return -1;
    }

   
    // pushing start node into the queue
    std::queue<std::tuple<int, int, int>> q;
    q.push({sx, sy, 0});
    // marking the start node as visited
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    visited[sx][sy] = true;

    // establishing the movement that is allowed
    std::vector<std::pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    // looping through vector
    while (!q.empty()) {
        auto [x, y, dist] = q.front();
        q.pop();
        // once target coordinates == reached, return the distance traveled
        if (x == tx && y == ty) {
            return dist;
        }
        // looping through vector and moving around
        for (auto [dx, dy] : directions) {
            int nx = x + dx;
            int ny = y + dy;
            // if the node we're on is in bounds and not marked as visited
            if ((0 <= nx && nx < rows) &&
                (0 <= ny && ny < cols) &&
                (grid[nx][ny] == 0) &&
                !visited[nx][ny]) {
                // mark it as visited
                visited[nx][ny] = true;
                // push it into the queue
                q.push({nx, ny, dist + 1});
            }
        }     
    }
    return -1;
}

int main() {
    std::vector<std::vector<int>> sample1 = {{0, 0, 1, 0, 0, 0},
                                             {1, 0, 1, 0, 1, 0},
                                             {0, 0, 0, 0, 1, 0},
                                             {0, 1, 1, 0, 0, 0},
                                             {0, 0, 0, 1, 1, 0},
                                             {1, 1, 0, 0, 0, 0}};
    std::pair<int, int> start1 = {0, 0};
    std::pair<int, int> target1 = {5, 5};
    int steps1 = shortest_path(sample1, start1, target1);

    std::cout << steps1 << std::endl;

    std::vector<std::vector<int>> sample2 = {{0, 0, 0, 1, 0, 0},
                                             {1, 1, 0, 1, 0, 1},
                                             {0, 0, 0, 1, 0, 0},
                                             {0, 1, 1, 1, 1, 0},
                                             {0, 0, 0, 1, 0, 0},
                                             {0, 1, 0, 1, 0, 0}};
    std::pair<int, int> start2 = {0, 0};
    std::pair<int, int> target2 = {5, 5};
    int steps2 = shortest_path(sample2, start2, target2);
    std::cout << steps2 << std::endl;
    return 0;
}