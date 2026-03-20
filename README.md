# CPSC335-Project-2

## Shortest Escape Path in a Maze

Algorithm one uses the breadth first search method to traverse a 2D vector and find the shortest path to a target node from a start node.
The algorithm allows from only up, down, left, and right movements. The inputs are a grid, a starting position, and a target position.
The algorithm will then take those inputs, calculate the minimum amount of steps needed to get to the target node, and output the minimum steps
to the user. If the target cannot be reached then it will output -1. 

## Boats to Save People

This algorithm uses a two-pointer greedy method to find the minimum number of boats needed to save everyone.
After sorting the vector, one pointer starts at the lightest person and the other starts at the heaviest person.
If the lightest and heaviest people can share a boat without exceeding the limit, both pointers move inward.
Otherwise, the heaviest person goes alone and only the right pointer moves.
Each iteration uses one boat, and the process continues until the pointers cross.
If any person's weight is greater than the limit, the algorithm returns -1 because not everyone can be saved.